cmd_drivers/media/v4l2-core/v4l2-common.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/media/v4l2-core/v4l2-common.ko drivers/media/v4l2-core/v4l2-common.o drivers/media/v4l2-core/v4l2-common.mod.o