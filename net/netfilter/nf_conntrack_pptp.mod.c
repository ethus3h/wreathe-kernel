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
	{ 0x3ae6ddf0, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x4440bc96, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x83708614, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xe5e0b76c, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4075bc08, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xf535764, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x8178e81, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xd392e799, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xa49d3381, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x8b1f2088, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x16847df7, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xf5a46ce3, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";

