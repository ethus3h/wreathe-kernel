cmd_drivers/block/paride/paride.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/paride.ko drivers/block/paride/paride.o drivers/block/paride/paride.mod.o
