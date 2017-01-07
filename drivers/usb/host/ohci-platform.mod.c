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
	{ 0xa093f26f, __VMLINUX_SYMBOL_STR(usb_hcd_platform_shutdown) },
	{ 0xc4e73e9f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x313bc46, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x388d3084, __VMLINUX_SYMBOL_STR(ohci_init_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21f49744, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x5359dbc7, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0xde393368, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x5b4dc5df, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xb3d387e7, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xc80d867a, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x908cdf3e, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6182fbe, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x6a497343, __VMLINUX_SYMBOL_STR(phy_init) },
	{ 0xe4e114ee, __VMLINUX_SYMBOL_STR(phy_power_on) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x7b675be6, __VMLINUX_SYMBOL_STR(phy_exit) },
	{ 0x5761dfc3, __VMLINUX_SYMBOL_STR(phy_power_off) },
	{ 0x3f52adf5, __VMLINUX_SYMBOL_STR(ohci_suspend) },
	{ 0x3e87307a, __VMLINUX_SYMBOL_STR(ohci_resume) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ohci-hcd";

MODULE_ALIAS("platform:ohci-platform");
MODULE_ALIAS("of:N*T*Cgeneric-ohci");
MODULE_ALIAS("of:N*T*Cgeneric-ohciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ohci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ohciC*");
