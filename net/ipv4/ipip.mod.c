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
	{ 0xe90f39c0, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x41a27633, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x3f048dae, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x711a0bfd, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x7afc4fcc, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x3a5d6a1e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x7df7e32a, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x6618371c, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x53f09213, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x1c13246f, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x373efc93, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x866fa74e, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x27ce41df, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x575eba97, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x19c0870e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x9666c4cd, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0x6f84f4e2, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x98eae6d7, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5a858e26, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xf69d9012, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x775cb1cf, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x59849a8e, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5d913b29, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x97733a0f, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x24fbf455, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x6313a993, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xa10586af, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";

