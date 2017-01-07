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
	{ 0x62a85cbe, __VMLINUX_SYMBOL_STR(usb_wwan_write) },
	{ 0xe2f905b, __VMLINUX_SYMBOL_STR(usb_wwan_port_remove) },
	{ 0x10cc27f4, __VMLINUX_SYMBOL_STR(usb_wwan_port_probe) },
	{ 0x5a2f263e, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xd812ee20, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xacf30a8c, __VMLINUX_SYMBOL_STR(usb_wwan_open) },
	{ 0x6430be09, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4eb4747d, __VMLINUX_SYMBOL_STR(usb_wwan_close) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcb58ca46, __VMLINUX_SYMBOL_STR(usb_control_msg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_wwan,usbserial";

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");
