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
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb3cae080, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x41a27633, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x3f048dae, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x53f09213, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x1c13246f, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x373efc93, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x7df7e32a, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x6618371c, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x3a5d6a1e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x69d3600e, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x17e5c5cd, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0xe77cd3c, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x3cd6d940, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x84979f53, __VMLINUX_SYMBOL_STR(iptun_encaps) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xad59246, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x9ea9f26e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x81ef0093, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x775cb1cf, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x59849a8e, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x9ed2d311, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xf7973e50, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xa10586af, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xaa6467dd, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x4c1c1a50, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x1b65d255, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x575eba97, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x19c0870e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x9666c4cd, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x6f84f4e2, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb67d04d8, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xf80a5e90, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x5ff8308d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x25e2755b, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x98eae6d7, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xe9474bde, __VMLINUX_SYMBOL_STR(dst_cache_init) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd0eb05d, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xccc2b5bd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x861d97c7, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xada38766, __VMLINUX_SYMBOL_STR(dst_cache_destroy) },
	{ 0x4dc65073, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";

