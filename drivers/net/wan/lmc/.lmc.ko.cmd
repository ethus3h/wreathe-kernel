cmd_drivers/net/wan/lmc/lmc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/lmc/lmc.ko drivers/net/wan/lmc/lmc.o drivers/net/wan/lmc/lmc.mod.o
