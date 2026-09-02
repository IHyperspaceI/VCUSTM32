configFile = 'C:\Users\Will\Desktop\OBR\Embedded\VCUSTM32\OBR26_Controls_30-7-26\STM32H7_Config.mat';
sharedConfigName = 'STM32H7_Config';
mdl = 'ENV2';

load_system(mdl);

activeConfig = getConfigSets(mdl);

% Remove all existing config sets/refs on this model first
existingConfigs = getConfigSets(mdl);
for k = 1:numel(existingConfigs)
    try
        detachConfigSet(mdl, existingConfigs{k});
    catch
        activeConfig = existingConfigs{k};
    end
end

configRef = Simulink.ConfigSetRef;
configRef.SourceName = sharedConfigName;
configRef.Name = sharedConfigName;

attachConfigSet(mdl, configRef, true);
setActiveConfigSet(mdl, configRef.Name);

detachConfigSet(mdl, activeConfig);

save_system(mdl);