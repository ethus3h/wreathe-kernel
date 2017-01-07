cmd_drivers/block/paride/pg.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/pg.ko drivers/block/paride/pg.o drivers/block/paride/pg.mod.o
