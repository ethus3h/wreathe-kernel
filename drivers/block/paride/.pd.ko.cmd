cmd_drivers/block/paride/pd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/pd.ko drivers/block/paride/pd.o drivers/block/paride/pd.mod.o
