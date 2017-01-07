cmd_drivers/block/paride/pcd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/paride/pcd.ko drivers/block/paride/pcd.o drivers/block/paride/pcd.mod.o
