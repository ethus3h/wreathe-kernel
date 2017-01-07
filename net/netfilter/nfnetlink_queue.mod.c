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
	{ 0x5ca3f49f, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x2d8b54b1, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0xc038caf5, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xb18923f9, __VMLINUX_SYMBOL_STR(nf_queue_entry_release_refs) },
	{ 0xb5bb7f6f, __VMLINUX_SYMBOL_STR(nf_queue_entry_get_refs) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x72c615fb, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xe23aeefb, __VMLINUX_SYMBOL_STR(nfnetlink_unicast) },
	{ 0x861cce5c, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x20808cc7, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xdc7a2575, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x6370234b, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x2ded27, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbd13bab2, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0x87558f6e, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x4ef5a474, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfb8c3816, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0xbdc745f8, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb1c86278, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3cf44f3f, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xd2056493, __VMLINUX_SYMBOL_STR(nf_register_queue_handler) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb2989195, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x1db17c3d, __VMLINUX_SYMBOL_STR(nf_unregister_queue_handler) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x77506672, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8f134482, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ae64508, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd43ff032, __VMLINUX_SYMBOL_STR(nf_reinject) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";

