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
	{ 0x4f75a758, __VMLINUX_SYMBOL_STR(usb_hcd_pci_pm_ops) },
	{ 0xe3cf9e8, __VMLINUX_SYMBOL_STR(usb_hcd_pci_shutdown) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa4dbd3e8, __VMLINUX_SYMBOL_STR(ehci_suspend) },
	{ 0xf6b6230f, __VMLINUX_SYMBOL_STR(ehci_init_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x79023c39, __VMLINUX_SYMBOL_STR(ehci_resume) },
	{ 0x2c3bacf4, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x33832c7, __VMLINUX_SYMBOL_STR(usb_amd_hang_symptom_quirk) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x2f57b0f7, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x14edb094, __VMLINUX_SYMBOL_STR(ehci_setup) },
	{ 0xd9a159e0, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9a6e0a5f, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0xc2d6ba4d, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0x5abfd222, __VMLINUX_SYMBOL_STR(usb_hcd_pci_remove) },
	{ 0x923f6650, __VMLINUX_SYMBOL_STR(pci_clear_mwi) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ehci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i20*");
MODULE_ALIAS("pci:v0000104Ad0000CC00sv*sd*bc*sc*i*");
