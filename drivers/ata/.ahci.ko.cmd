cmd_drivers/ata/ahci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/ata/ahci.ko drivers/ata/ahci.o drivers/ata/ahci.mod.o
