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
	{ 0xcb580327, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x6abdc9a8, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xd7b7cdff, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xf43c09cf, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x26c4047b, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x42d692b, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xfa22fb85, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x49119bb3, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6c93aed, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xc3be3308, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x6f2c1857, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x1efe23a, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x14064d57, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x447190ba, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7c280fd9, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x98eae6d7, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x3269ac39, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x6f84f4e2, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x5afd2e36, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

