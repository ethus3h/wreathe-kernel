cmd_drivers/pcmcia/pcmcia_rsrc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/pcmcia/pcmcia_rsrc.ko drivers/pcmcia/pcmcia_rsrc.o drivers/pcmcia/pcmcia_rsrc.mod.o
