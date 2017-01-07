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
	{ 0x71c800e6, __VMLINUX_SYMBOL_STR(tcf_unregister_action) },
	{ 0xeaff6ad, __VMLINUX_SYMBOL_STR(tcf_register_action) },
	{ 0x3283a829, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xc3be3308, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb68d5929, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x730c9750, __VMLINUX_SYMBOL_STR(tcf_hash_search) },
	{ 0x54ae331c, __VMLINUX_SYMBOL_STR(tcf_hash_create) },
	{ 0x66a00087, __VMLINUX_SYMBOL_STR(tcf_hash_insert) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xe24f5241, __VMLINUX_SYMBOL_STR(__tcf_hash_release) },
	{ 0x712309fe, __VMLINUX_SYMBOL_STR(tcf_hash_check) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1662d450, __VMLINUX_SYMBOL_STR(tcf_generic_walker) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5cd6478, __VMLINUX_SYMBOL_STR(tcf_hashinfo_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
