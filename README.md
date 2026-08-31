# Embedded Software for OBR Vehicle Controls

If you get the `Index exceeds the number of array elements. Index must not exceed 1.` error when running a build for the first time on a different computer, follow this:
1. Open Configuration Parameters -> Hardware Implementation -> Target Hardware Resources
2. Click 'Create...', name the project something logical, put it in the VCUSTM32 project folder, select 'Custom STM32H7xx Based (Single-core)', set Custom hardware part number to `STM32H7A3RITx`
3. Rebuild the STM32CubeMX file by hand (and silently sob)
