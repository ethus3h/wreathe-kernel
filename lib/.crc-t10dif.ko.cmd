cmd_lib/crc-t10dif.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/crc-t10dif.ko lib/crc-t10dif.o lib/crc-t10dif.mod.o