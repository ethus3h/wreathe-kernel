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
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xea71ecbf, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x9f0bbc93, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0x5eba0390, __VMLINUX_SYMBOL_STR(__parport_register_driver) },
	{ 0x49113aa1, __VMLINUX_SYMBOL_STR(serio_unregister_port) },
	{ 0x3246bcf5, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0xf2ccd2a, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe486aa43, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbaf1d234, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0x1336f1ca, __VMLINUX_SYMBOL_STR(parport_register_dev_model) },
	{ 0x4d7886bf, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

