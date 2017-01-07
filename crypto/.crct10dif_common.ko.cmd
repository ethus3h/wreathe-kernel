cmd_crypto/crct10dif_common.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/crct10dif_common.ko crypto/crct10dif_common.o crypto/crct10dif_common.mod.o
