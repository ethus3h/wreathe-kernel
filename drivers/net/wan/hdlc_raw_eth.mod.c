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
	{ 0x7a471883, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xab9f5cb2, __VMLINUX_SYMBOL_STR(unregister_hdlc_protocol) },
	{ 0xbc844799, __VMLINUX_SYMBOL_STR(register_hdlc_protocol) },
	{ 0xce3e1e03, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd5664e5, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6713fe26, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x8cf78bc6, __VMLINUX_SYMBOL_STR(attach_hdlc_protocol) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc3be3308, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hdlc";
