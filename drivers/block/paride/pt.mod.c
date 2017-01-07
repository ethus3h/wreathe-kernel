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
	{ 0xbce2e932, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x7f5bbdc6, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9a4ae71e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xbf9bece8, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x8c199467, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xe322ee5e, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xb21ba07d, __VMLINUX_SYMBOL_STR(pi_unregister_driver) },
	{ 0x481a66ef, __VMLINUX_SYMBOL_STR(pi_release) },
	{ 0xed1ddba3, __VMLINUX_SYMBOL_STR(pi_init) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4267110a, __VMLINUX_SYMBOL_STR(pi_register_driver) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x3c0a124e, __VMLINUX_SYMBOL_STR(pi_read_block) },
	{ 0xa9db2579, __VMLINUX_SYMBOL_STR(pi_disconnect) },
	{ 0x4aef68c7, __VMLINUX_SYMBOL_STR(pi_write_block) },
	{ 0x71e9c8ed, __VMLINUX_SYMBOL_STR(pi_write_regr) },
	{ 0xb3e6f041, __VMLINUX_SYMBOL_STR(pi_connect) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x50889221, __VMLINUX_SYMBOL_STR(pi_read_regr) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=paride";
