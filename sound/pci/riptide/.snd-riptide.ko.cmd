cmd_sound/pci/riptide/snd-riptide.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o sound/pci/riptide/snd-riptide.ko sound/pci/riptide/snd-riptide.o sound/pci/riptide/snd-riptide.mod.o