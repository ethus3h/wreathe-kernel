cmd_drivers/net/wan/hdlc_raw.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/hdlc_raw.ko drivers/net/wan/hdlc_raw.o drivers/net/wan/hdlc_raw.mod.o
