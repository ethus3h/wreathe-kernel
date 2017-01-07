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
	{ 0x30744377, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x5f6a0d23, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x324de668, __VMLINUX_SYMBOL_STR(sctp_for_each_endpoint) },
	{ 0x17c9b334, __VMLINUX_SYMBOL_STR(sctp_for_each_transport) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd56cb9dc, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc25e63a7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xda730379, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x320cb9c4, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x60ae32d5, __VMLINUX_SYMBOL_STR(inet_diag_msg_common_fill) },
	{ 0x54d45d30, __VMLINUX_SYMBOL_STR(nla_reserve_64bit) },
	{ 0x4f79dd6e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x27ccc528, __VMLINUX_SYMBOL_STR(inet_diag_msg_attrs_fill) },
	{ 0x87558f6e, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x946e6723, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xfa4df033, __VMLINUX_SYMBOL_STR(sctp_transport_lookup_process) },
	{ 0x88345198, __VMLINUX_SYMBOL_STR(sctp_get_sctp_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sctp";

