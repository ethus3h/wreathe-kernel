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
	{ 0xd7c3168d, __VMLINUX_SYMBOL_STR(tcf_em_unregister) },
	{ 0x643abeb1, __VMLINUX_SYMBOL_STR(tcf_em_register) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
