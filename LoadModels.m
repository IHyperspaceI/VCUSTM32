%find_mdlrefs("ENV", KeepModelsLoaded=true);
%find_system(type="block_diagram")

%find_mdlrefs("ENV", KeepModelsLoaded=true, MatchFilter=@Simulink.match.allVariants);
%find_system(type="block_diagram")

load_system('ENV');
models = find_mdlrefs("ENV", KeepModelsLoaded=true, MatchFilter=@Simulink.match.allVariants);

% Every Model Reference block in the whole hierarchy, no matter how it's nested
refBlocks = find_system('ENV', 'LookUnderMasks', 'all', 'FollowLinks', 'on', ...
    'BlockType', 'ModelReference');

fprintf('Found %d ModelReference block(s):\n', numel(refBlocks));
for i = 1:numel(refBlocks)
    blk = refBlocks{i};
    modelName = get_param(blk, 'ModelNameDialog');
    isCommented = get_param(blk, 'Commented');
    fprintf('  %-20s | block: %-50s | commented: %s\n', modelName, blk, isCommented);
end

refModelNames = get_param(refBlocks, 'ModelNameDialog');
if ischar(refModelNames)
    refModelNames = {refModelNames};
end

missing = setdiff(unique(refModelNames), models);
fprintf('\nIn ModelReference blocks but NOT returned by find_mdlrefs:\n');
disp(missing);