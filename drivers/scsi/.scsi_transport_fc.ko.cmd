cmd_drivers/scsi/scsi_transport_fc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/scsi_transport_fc.ko drivers/scsi/scsi_transport_fc.o drivers/scsi/scsi_transport_fc.mod.o