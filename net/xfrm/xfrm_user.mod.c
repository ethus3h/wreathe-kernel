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
	{ 0x75b05a12, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xc5c44ec7, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xedb6bb2c, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x5d5ccde2, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0xdb37f879, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x61764834, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x23ce9c58, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0xda9ffdd6, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0xb3525b7a, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0x11e71dbd, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x3bf471d7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x47b34e60, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x60b73277, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0xaad2c0c3, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x5bb499fc, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0x24fe1159, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0xaf645751, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0xed27fdd, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0xc187bb8d, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0xe2dbf4f9, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0x8baff67a, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb68d5929, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xacf3e831, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0xb19f9eca, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xe43ebf82, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x83b009ea, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf8eb4f09, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x3aa60f0d, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x122e6e41, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x3780bf60, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x5ee5d0d6, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0xd56cb9dc, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd1b16c13, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x73bf95ec, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0xc2488580, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0xbe009ca0, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0x2b7a3494, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xf8708a4d, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x60d98b38, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0xa1588d8c, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0x81280537, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0xeec4d934, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0xfe2b5047, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xc68c4645, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x94826275, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0xac42ae25, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0x252b27b6, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3269ac39, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x5afd2e36, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x605848b3, __VMLINUX_SYMBOL_STR(xfrm_policy_hash_rebuild) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd10d6172, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xebfe49d5, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x13b88505, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x87558f6e, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x4f79dd6e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa833e68a, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

