cmd_drivers/net/wan/farsync.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/farsync.ko drivers/net/wan/farsync.o drivers/net/wan/farsync.mod.o
