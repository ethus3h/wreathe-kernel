cmd_drivers/mmc/card/mmc_block.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mmc/card/mmc_block.ko drivers/mmc/card/mmc_block.o drivers/mmc/card/mmc_block.mod.o
