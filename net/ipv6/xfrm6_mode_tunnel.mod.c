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
	{ 0xf666f2c9, __VMLINUX_SYMBOL_STR(xfrm6_prepare_output) },
	{ 0xa3957596, __VMLINUX_SYMBOL_STR(xfrm_prepare_input) },
	{ 0x34f83dc3, __VMLINUX_SYMBOL_STR(xfrm_unregister_mode) },
	{ 0xeb8b9c77, __VMLINUX_SYMBOL_STR(xfrm_register_mode) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xc3be3308, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfe054d40, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";

