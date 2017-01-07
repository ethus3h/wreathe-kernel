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
	{ 0x528b8bec, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x97452256, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x4bf49ed6, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x790df80a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xaacc05fc, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xbb42c514, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x87111b2e, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x23ca75d5, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe1605d7a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x79240033, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x7db7269e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xe99c439c, __VMLINUX_SYMBOL_STR(get_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr35id*ex*");
