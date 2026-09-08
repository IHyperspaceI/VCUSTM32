function LoadAllModels(topModel)
    if ~bdIsLoaded(topModel)
        load_system(topModel);
    end

    models = find_mdlrefs(topModel);   % all referenced models under topModel
    models = [{topModel}; models(:)];  % force both to column cells, then stack

    for i = 1:numel(models)
        mdl = models{i};
        
        if ~bdIsLoaded(mdl)
            load_system(mdl);
            disp(mdl);
        end
    end
end