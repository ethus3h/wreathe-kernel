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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x80f97bae, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0x24c8e482, __VMLINUX_SYMBOL_STR(xt_copy_counters_from_user) },
	{ 0xe0b4971b, __VMLINUX_SYMBOL_STR(xt_compat_lock) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x109c1dea, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0x12e98b30, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xe450fa62, __VMLINUX_SYMBOL_STR(xt_compat_match_offset) },
	{ 0xb0176f06, __VMLINUX_SYMBOL_STR(xt_compat_target_to_user) },
	{ 0xd87ae60d, __VMLINUX_SYMBOL_STR(xt_check_entry_offsets) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb0133aba, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0x98da0f7b, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x58499d5d, __VMLINUX_SYMBOL_STR(xt_compat_target_offset) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xaaf03711, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0x25ccbe84, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xa25bb884, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x13fc03ce, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xef57f1d4, __VMLINUX_SYMBOL_STR(xt_compat_match_to_user) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa25fc115, __VMLINUX_SYMBOL_STR(xt_compat_check_entry_offsets) },
	{ 0x92cf90fb, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0x9ed2d311, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x29d0ca04, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x46aa0f0, __VMLINUX_SYMBOL_STR(xt_compat_target_from_user) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x71466172, __VMLINUX_SYMBOL_STR(nf_log_trace) },
	{ 0x5f82f1f7, __VMLINUX_SYMBOL_STR(xt_compat_flush_offsets) },
	{ 0x691a6d69, __VMLINUX_SYMBOL_STR(xt_compat_calc_jump) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0x37a27bef, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x253e8b44, __VMLINUX_SYMBOL_STR(xt_compat_init_offsets) },
	{ 0x77506672, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xec24fd82, __VMLINUX_SYMBOL_STR(xt_compat_add_offset) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x2d8e9b8e, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0x2b59df63, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x3f1ef70a, __VMLINUX_SYMBOL_STR(xt_tee_enabled) },
	{ 0x2e777306, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x61aa08a2, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7aab2b68, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc7e3ce70, __VMLINUX_SYMBOL_STR(xt_compat_match_from_user) },
	{ 0x70c52dc5, __VMLINUX_SYMBOL_STR(nf_skb_duplicated) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x193a40bf, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0xbee836e9, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x555c3243, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x16847df7, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa48b3a97, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0x161d1417, __VMLINUX_SYMBOL_STR(xt_compat_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

