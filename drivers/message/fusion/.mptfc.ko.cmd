cmd_drivers/message/fusion/mptfc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/message/fusion/mptfc.ko drivers/message/fusion/mptfc.o drivers/message/fusion/mptfc.mod.o