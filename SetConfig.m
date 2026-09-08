function SetConfig(topModel, cs)
    if ~bdIsLoaded(topModel)
        load_system(topModel);
    end

    models = find_mdlrefs(topModel);   % all referenced models under topModel
    models = [{topModel}; models(:)];  % force both to column cells, then stack

    for i = 1:numel(models)
        mdl = models{i};
        if ~bdIsLoaded(mdl)
            load_system(mdl);
        end
        attachConfigSet(mdl, cs.copy(), true);
        setActiveConfigSet(mdl, cs.copy().Name);
        save_system(mdl);
    end
end