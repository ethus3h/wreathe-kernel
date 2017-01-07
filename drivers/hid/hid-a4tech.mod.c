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
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4bf49ed6, __VMLINUX_SYMBOL_STR(input_event) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000009DAp00000006");
MODULE_ALIAS("hid:b0003g*v000009DAp0000000A");
MODULE_ALIAS("hid:b0003g*v000009DAp0000001A");
