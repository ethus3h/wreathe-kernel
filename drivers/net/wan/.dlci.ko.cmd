cmd_drivers/net/wan/dlci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/dlci.ko drivers/net/wan/dlci.o drivers/net/wan/dlci.mod.o
