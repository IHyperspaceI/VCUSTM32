# Embedded Software for OBR Vehicle Controls

If you get the `Index exceeds the number of array elements. Index must not exceed 1.` error when running a build for the first time on a different computer, follow this:
1. Open Configuration Parameters -> Hardware Implementation -> Target Hardware Resources
2. Click 'Create...', name the project something logical, put it in the VCUSTM32 project folder, select 'Custom STM32H7xx Based (Single-core)', set Custom hardware part number to `STM32H7A3RITx`
3. Rebuild the STM32CubeMX file by hand (and silently sob)
4. Actually, you should just be able to open the file in CubeMX, select File -> Save As, and point it to a new VCUCube folder in the project. Then delete the old Cube folder

When opening the project, ONLY add the Controls folder to the path, otherwise it will not build (unable to find main.h)

Before running a build, run `LoadAllModels("ENV")` otherwise it will produce unknown symbol error

After a git pull or on initial setup, ENV's Configuration Parameters -> Hardware Implementation -> Target Hardware Resources and update the STM32CubeMX file path to match the path on your computer

After a change to ENV model configuration, run `SetConfigFromModel("ENV")`. This will make all submodel configurations match ENV
