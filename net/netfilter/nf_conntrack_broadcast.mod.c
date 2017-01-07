#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59776590, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4afa7785, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x8178e81, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xd392e799, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xa49d3381, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

