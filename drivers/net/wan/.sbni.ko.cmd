cmd_drivers/net/wan/sbni.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/sbni.ko drivers/net/wan/sbni.o drivers/net/wan/sbni.mod.o
