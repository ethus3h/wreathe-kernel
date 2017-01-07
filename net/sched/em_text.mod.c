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
	{ 0xd7c3168d, __VMLINUX_SYMBOL_STR(tcf_em_unregister) },
	{ 0x643abeb1, __VMLINUX_SYMBOL_STR(tcf_em_register) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x83868f0, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0x2bd1994d, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0xbb901224, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0x725fd887, __VMLINUX_SYMBOL_STR(nla_append) },
	{ 0xe77e14fe, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

