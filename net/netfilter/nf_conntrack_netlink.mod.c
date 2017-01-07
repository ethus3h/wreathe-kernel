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
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2d8b54b1, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xc038caf5, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x28eff409, __VMLINUX_SYMBOL_STR(nf_conntrack_hash) },
	{ 0x4289b80c, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0x1497885b, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x440a4fcf, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0xa49d3381, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x2ed0f11d, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0xd392e799, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xe0bb4f50, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x57b3245b, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x5434235b, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0x252ef9cb, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0xe310299a, __VMLINUX_SYMBOL_STR(nf_conntrack_eventmask_report) },
	{ 0x8bc1866a, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xf0858d44, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x8190bb89, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x472f96c8, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x356e4630, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xf70de5b0, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x7e8ace84, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x39b067cf, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x69e6fbbf, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0xd56cb9dc, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3851aedd, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0xd24f06ff, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf5a46ce3, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xf535764, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x2680c5c6, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xec8beba6, __VMLINUX_SYMBOL_STR(nf_ct_expect_hash) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6a18dc58, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x986db2bf, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x604007b5, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x8178e81, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xf8eb4f09, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7bf251a6, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x39aa5ac7, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x87558f6e, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb68d5929, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa25eda82, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x1c4ff47d, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x23c081f6, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";

