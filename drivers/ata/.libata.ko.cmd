cmd_drivers/ata/libata.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/ata/libata.ko drivers/ata/libata.o drivers/ata/libata.mod.o
