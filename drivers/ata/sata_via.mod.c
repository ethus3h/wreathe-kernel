#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59776590, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbe448c8b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xbc7307b2, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xbd0e3127, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0xcc8adf8c, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x6dcd1cf0, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xf2c4dcf9, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x2070b06a, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x5b04d2d4, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9a0abcf6, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x63a5161b, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0xeff4b5da, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xdccb0bf3, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0x73a48b4a, __VMLINUX_SYMBOL_STR(ata_sff_std_ports) },
	{ 0xb4c921c1, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x5ec0ab59, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xdaaf26f7, __VMLINUX_SYMBOL_STR(ata_slave_link_init) },
	{ 0xe116c7e5, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x81790abf, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x37ec29c6, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_prepare_host) },
	{ 0x6ffe1b15, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xdde528c, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x56f01888, __VMLINUX_SYMBOL_STR(ata_sff_error_handler) },
	{ 0xc2d0e0e, __VMLINUX_SYMBOL_STR(ata_bmdma_irq_clear) },
	{ 0x262d7b37, __VMLINUX_SYMBOL_STR(ata_sff_wait_ready) },
	{ 0x5582d54f, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xe70d5ad3, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x32264445, __VMLINUX_SYMBOL_STR(ata_sff_pause) },
	{ 0x6b4adf90, __VMLINUX_SYMBOL_STR(ata_bmdma_start) },
	{ 0xa15a0358, __VMLINUX_SYMBOL_STR(ata_sff_tf_load) },
	{ 0xd5ade019, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe818b32b, __VMLINUX_SYMBOL_STR(ata_bmdma_interrupt) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x81cc4d7e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x7cf05f15, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001106d00005337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C8FE6636E327239ACB7A440");
