cmd_drivers/block/paride/pf.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/pf.ko drivers/block/paride/pf.o drivers/block/paride/pf.mod.o
