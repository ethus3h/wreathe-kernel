cmd_drivers/block/paride/comm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/comm.ko drivers/block/paride/comm.o drivers/block/paride/comm.mod.o
