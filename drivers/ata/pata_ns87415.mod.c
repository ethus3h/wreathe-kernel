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
	{ 0x63a5161b, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x9e6747e5, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0xbd0e3127, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0xcc8adf8c, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x6dcd1cf0, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xf2c4dcf9, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x2070b06a, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x5b04d2d4, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9a0abcf6, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xbe448c8b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xbc7307b2, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6ffe1b15, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x20443401, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0xdde528c, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x81cc4d7e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x7cf05f15, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x6b4adf90, __VMLINUX_SYMBOL_STR(ata_bmdma_start) },
	{ 0x5f4e835a, __VMLINUX_SYMBOL_STR(ata_bmdma_stop) },
	{ 0x26f99b57, __VMLINUX_SYMBOL_STR(ata_pio_need_iordy) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xf004e482, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v0000100Bd00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2E99D1D7901259F82EECCFC");
