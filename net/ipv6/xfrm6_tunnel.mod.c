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
	{ 0xd05f2737, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xb3e6f8be, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_deregister) },
	{ 0xf43c09cf, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9fe09c18, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x42d692b, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2c8b9b5f, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xbfaf8c98, __VMLINUX_SYMBOL_STR(xfrm6_rcv_spi) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x93e040fd, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";

