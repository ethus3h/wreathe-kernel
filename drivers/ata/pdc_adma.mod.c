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
	{ 0xbd0e3127, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0xcc8adf8c, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x6dcd1cf0, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xf2c4dcf9, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x2070b06a, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x5b04d2d4, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9a0abcf6, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x4ff4cb8a, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0xbc7307b2, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6ffe1b15, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x81790abf, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xdccb0bf3, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xb4c921c1, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xe116c7e5, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xdde528c, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x5ec0ab59, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x42e7e269, __VMLINUX_SYMBOL_STR(ata_sff_qc_issue) },
	{ 0x396b0a2f, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x82c5c544, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6edb1970, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xd5ade019, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xe411a0a5, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xa40a01b9, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xd8763fe0, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0x4d1f585f, __VMLINUX_SYMBOL_STR(ata_sff_check_status) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000015E9d00001841sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E62591882C608717C9FE458");