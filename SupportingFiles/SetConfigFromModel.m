function SetConfigFromModel(topModel)
    if ~bdIsLoaded(topModel)
        load_system(topModel);
    end

    cs = getActiveConfigSet(topModel);

    models = find_mdlrefs(topModel);   % all referenced models under topModel
    models = [{topModel}; models(:)];  % force both to column cells, then stack

    disp("MODELS:");
    disp(models);

    for i = 1:numel(models)
        mdl = models{i};
        if ~bdIsLoaded(mdl)
            load_system(mdl);
        end
        disp(mdl);

        allConfigs = getConfigSets(mdl);
        % disp(allConfigs);

        newCfg = cs.copy();
        newCfg.Name = "NewConfig";

        attachConfigSet(mdl, newCfg, true);
        setActiveConfigSet(mdl, newCfg.Name);

        save_system(mdl);

        for j = 1:numel(allConfigs)
            cfg = allConfigs{j};
            disp(cfg);
            try
                detachConfigSet(mdl, cfg);
            end
        end

        setActiveConfigSet(mdl, newCfg.Name);

        save_system(mdl);
    end
end