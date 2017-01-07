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
	{ 0x6cc42aee, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x229dae7d, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x604007b5, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x4afa7785, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xb04c8761, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x8507c383, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x188c5d9b, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x28eff409, __VMLINUX_SYMBOL_STR(nf_conntrack_hash) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x8af4d397, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x1297575e, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xbc780364, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x73f6eb5e, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x49e294e2, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfb6f42eb, __VMLINUX_SYMBOL_STR(print_tuple) },
	{ 0xec8beba6, __VMLINUX_SYMBOL_STR(nf_ct_expect_hash) },
	{ 0x45a5ad90, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x1a674f31, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x56cd9b9b, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9156f400, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2ec75aeb, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xd3d4a70c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x5ca3f49f, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xa167ec59, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x53b7ada1, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xad17ed8f, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x2b59df63, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x986db2bf, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x9ef160ad, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x22bdbe0a, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2989195, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xbf4e211c, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf38bcdf3, __VMLINUX_SYMBOL_STR(nf_conntrack_max) },
	{ 0xc153a4e1, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x20bb0841, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0xbee836e9, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x16847df7, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x18f8b28e, __VMLINUX_SYMBOL_STR(seq_print_acct) },
	{ 0x8f561f23, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xf5a46ce3, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xa25eda82, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

