cmd_crypto/crct10dif_generic.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/crct10dif_generic.ko crypto/crct10dif_generic.o crypto/crct10dif_generic.mod.o
