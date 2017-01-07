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
	{ 0x5a2f263e, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xd812ee20, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xf505758a, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbcf4fcf4, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
	{ 0xe2e28a4d, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe277c0f5, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x1bd28e14, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0x773955da, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xf67fa175, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0586p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p2000d*dc*dsc*dp*ic*isc*ip*in*");