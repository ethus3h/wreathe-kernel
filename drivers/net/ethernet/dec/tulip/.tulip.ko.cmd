cmd_drivers/net/ethernet/dec/tulip/tulip.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/dec/tulip/tulip.ko drivers/net/ethernet/dec/tulip/tulip.o drivers/net/ethernet/dec/tulip/tulip.mod.o