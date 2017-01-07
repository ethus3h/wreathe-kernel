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
	{ 0x7f8fc623, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x6118f1a5, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x2bc70083, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb78f340a, __VMLINUX_SYMBOL_STR(hid_open_report) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000050Dp00003201");
MODULE_ALIAS("hid:b0003g*v00001020p00000006");
