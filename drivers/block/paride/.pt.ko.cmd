cmd_drivers/block/paride/pt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/pt.ko drivers/block/paride/pt.o drivers/block/paride/pt.mod.o
