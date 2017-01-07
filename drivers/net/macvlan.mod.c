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
	{ 0xaa6467dd, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6db4bf25, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x50ef1335, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2ba6deb0, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x5fe2214f, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x8f2723c8, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0x58642448, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0xd3ef160, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x79c4cd11, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x25e2755b, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x190f93e1, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xe8649f7d, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xd5664e5, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xce3e1e03, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x6a486cde, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe77cd3c, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfed83b4f, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x8468999e, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x72962cd2, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xedbb7564, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x17c0b226, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x95e6babf, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xdcd5e90a, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0xd9f1a8b0, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x10b44d86, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x3a5d6a1e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xd0eb05d, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9af11df9, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6a978ffc, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x9dc4dd0, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe307a97a, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xd7425a39, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x6713fe26, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9c9c8d1b, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4dc65073, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x999b10e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x8a83dd35, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf4afdcc0, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x53f09213, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xea0f010b, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x17875562, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf081e03b, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0xbf3b36ec, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0xf9a76acd, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x94315a2e, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0xc32e5957, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

