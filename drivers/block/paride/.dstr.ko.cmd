cmd_drivers/block/paride/dstr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/dstr.ko drivers/block/paride/dstr.o drivers/block/paride/dstr.mod.o
