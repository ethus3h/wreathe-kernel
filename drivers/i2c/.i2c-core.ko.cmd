cmd_drivers/i2c/i2c-core.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/i2c/i2c-core.ko drivers/i2c/i2c-core.o drivers/i2c/i2c-core.mod.o
