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
	{ 0xa9e04941, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x30e2c610, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xf6a74363, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x72c1d49, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xe9cef4b5, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x4eeff13e, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xf43c09cf, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xa02d919a, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x42d692b, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x42eb92e5, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x2e18e166, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x77575f22, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xaad2c0c3, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x74e21153, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0xdeabdb47, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xbf75bf8b, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x3269ac39, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x842ae148, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x5afd2e36, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";

