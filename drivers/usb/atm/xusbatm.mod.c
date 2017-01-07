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
	{ 0x3e28868d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x2ac0f504, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xa093d201, __VMLINUX_SYMBOL_STR(usbatm_usb_disconnect) },
	{ 0x452004ea, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6355f65c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x41798845, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xd24fc7a5, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x253e4c74, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x5fb42412, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa6f5fdd2, __VMLINUX_SYMBOL_STR(usbatm_usb_probe) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm";


MODULE_INFO(srcversion, "E0E8FA35C6CA34E6A731A0E");
