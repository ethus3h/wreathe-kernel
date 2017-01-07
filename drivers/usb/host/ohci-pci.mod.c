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
	{ 0x5abfd222, __VMLINUX_SYMBOL_STR(usb_hcd_pci_remove) },
	{ 0x9a6e0a5f, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x3e87307a, __VMLINUX_SYMBOL_STR(ohci_resume) },
	{ 0x3f52adf5, __VMLINUX_SYMBOL_STR(ohci_suspend) },
	{ 0x388d3084, __VMLINUX_SYMBOL_STR(ohci_init_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0xa787ee24, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x35408ecd, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xddbd6cd4, __VMLINUX_SYMBOL_STR(ohci_restart) },
	{ 0x1cee842e, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xd87fc0a0, __VMLINUX_SYMBOL_STR(usb_amd_prefetch_quirk) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0xd6bf86f2, __VMLINUX_SYMBOL_STR(ohci_setup) },
	{ 0xc2d6ba4d, __VMLINUX_SYMBOL_STR(pci_match_id) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ohci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");
MODULE_ALIAS("pci:v0000104Ad0000CC01sv*sd*bc*sc*i*");
