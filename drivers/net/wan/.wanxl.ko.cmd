cmd_drivers/net/wan/wanxl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wan/wanxl.ko drivers/net/wan/wanxl.o drivers/net/wan/wanxl.mod.o
