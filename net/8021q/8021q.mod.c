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
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x276f237c, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0xf79d00c6, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x50ef1335, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0xa6fbd6a5, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x8da4a163, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x2ba6deb0, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0xe7ba5888, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x5fe2214f, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x9943fbe, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xc23d8c4, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x74f79672, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xb000d749, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x7156bd6e, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x190f93e1, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xe8649f7d, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xd5664e5, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xce3e1e03, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0xa2399f19, __VMLINUX_SYMBOL_STR(dev_add_offload) },
	{ 0x6a486cde, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb25319be, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x11621d6f, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xde2e811, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xedbb7564, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17c0b226, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x9ed2d311, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xdcd5e90a, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdc541656, __VMLINUX_SYMBOL_STR(dev_remove_offload) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5259f24e, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x5ca3f49f, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x10b44d86, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0xbd57c12, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0x3a5d6a1e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xd0eb05d, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9dc4dd0, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1b65d255, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xd7425a39, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x6713fe26, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9c9c8d1b, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x415ff384, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4dc65073, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xac834ac8, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x999b10e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x8a83dd35, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb2989195, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x49f71442, __VMLINUX_SYMBOL_STR(dev_close_many) },
	{ 0x53f09213, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xea0f010b, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x17875562, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xf081e03b, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xf9a76acd, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x94315a2e, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x5d476b94, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xc32e5957, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D04C3E7A1A006C4C0E6CBCD");
