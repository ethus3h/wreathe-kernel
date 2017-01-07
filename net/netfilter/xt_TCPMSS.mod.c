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
	{ 0x37a27bef, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x29d0ca04, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xeeafda7a, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xccc2b5bd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x21e04c55, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc3be3308, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3283a829, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x3cf44f3f, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

