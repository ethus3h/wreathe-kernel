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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe7940c5e, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x85ea3390, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x7f7b38ec, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x637898f1, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc8f370d0, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9ea9f26e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x5ff8308d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x51c42b9b, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x6d016c10, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x417ceea1, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x3d4886ba, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49934248, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x36727210, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x85adf815, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

