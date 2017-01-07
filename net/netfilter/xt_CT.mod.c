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
	{ 0x8ad1cfba, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x29d0ca04, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x1dde5d4a, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x77506672, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7e8ace84, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xbe04a6bd, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf70de5b0, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x5b655fa4, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0xd2d3aa24, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x47d8ab5d, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";

