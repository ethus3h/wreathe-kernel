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
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xdde528c, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xbc7307b2, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x35408ecd, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0xcc8adf8c, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xf2c4dcf9, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x5b04d2d4, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x81cc4d7e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x2070b06a, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x20443401, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x396b0a2f, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0xbe448c8b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0x9e6747e5, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xe2663779, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x7cf05f15, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6f52ea8f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x6ffe1b15, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x63a5161b, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0xa787ee24, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xbd0e3127, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x6dcd1cf0, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x9a0abcf6, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001039d00005513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00001180sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "17A483B39721ECFEEFB3B6D");