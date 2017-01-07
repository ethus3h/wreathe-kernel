cmd_drivers/net/wan/pc300too.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/pc300too.ko drivers/net/wan/pc300too.o drivers/net/wan/pc300too.mod.o
