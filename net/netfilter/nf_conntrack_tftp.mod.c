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
	{ 0x4440bc96, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0xe5e0b76c, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x4075bc08, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8178e81, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xd392e799, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xa49d3381, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x6e4a2d1b, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x3e28868d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x16847df7, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";
