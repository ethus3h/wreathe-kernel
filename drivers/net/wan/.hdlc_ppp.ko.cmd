cmd_drivers/net/wan/hdlc_ppp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/hdlc_ppp.ko drivers/net/wan/hdlc_ppp.o drivers/net/wan/hdlc_ppp.mod.o
