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
	{ 0xa52a1ecc, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x9a57f3ed, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x9e16cddf, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0x178fc438, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf0adef22, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x71451794, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x19a0730c, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x417ceea1, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc8f370d0, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x637898f1, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x79b6875, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xb00a3cb1, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0x51c42b9b, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x6d016c10, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x195edf99, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x85ea3390, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x6c6457ab, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0x7f7b38ec, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xba655d09, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x83dac63b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x3d4886ba, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xbaf9522e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x61a2b4ea, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0x85adf815, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x36727210, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xcb1838d0, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

