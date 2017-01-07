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
	{ 0xe9cef4b5, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x4eeff13e, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xf43c09cf, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xa02d919a, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x42d692b, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x66fbee95, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xd5ff5635, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xb8ffe624, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6c93aed, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x6f2c1857, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xbdc745f8, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x16847df7, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2b0e13dc, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x79ecfc35, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0x447190ba, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7c280fd9, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbf75bf8b, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x3269ac39, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x842ae148, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x5afd2e36, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_algo";

