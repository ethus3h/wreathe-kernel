cmd_drivers/net/wan/hdlc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/hdlc.ko drivers/net/wan/hdlc.o drivers/net/wan/hdlc.mod.o
