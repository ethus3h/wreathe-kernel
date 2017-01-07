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
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x72c615fb, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x58bfff97, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x771e4dbb, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0x637898f1, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xba655d09, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x19a0730c, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x3d4886ba, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x61a2b4ea, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x85adf815, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x195edf99, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xbf249efd, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0xc8677ed, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xc3a8b4da, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0x417ceea1, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xb77131b1, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb68d5929, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

