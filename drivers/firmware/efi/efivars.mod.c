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
	{ 0x2736039e, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x8e77cbc6, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x122e6e41, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2d593948, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xa801b359, __VMLINUX_SYMBOL_STR(efivar_entry_iter_begin) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x11ac8d29, __VMLINUX_SYMBOL_STR(efivar_validate) },
	{ 0xf062576b, __VMLINUX_SYMBOL_STR(ucs2_utf8size) },
	{ 0xf744526d, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3b0f7e56, __VMLINUX_SYMBOL_STR(efivar_entry_set) },
	{ 0xe377dc55, __VMLINUX_SYMBOL_STR(efivar_entry_remove) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x62d57915, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x62291f72, __VMLINUX_SYMBOL_STR(efivar_init) },
	{ 0x90032b30, __VMLINUX_SYMBOL_STR(efi) },
	{ 0x66012c9c, __VMLINUX_SYMBOL_STR(efivar_entry_find) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd7399d2a, __VMLINUX_SYMBOL_STR(efivar_entry_iter_end) },
	{ 0x7673cb7, __VMLINUX_SYMBOL_STR(efivar_entry_get) },
	{ 0x355a3899, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16d8e5a3, __VMLINUX_SYMBOL_STR(efivar_entry_add) },
	{ 0xf0a4dc8, __VMLINUX_SYMBOL_STR(__efivar_entry_delete) },
	{ 0x732b937b, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x5191bd3c, __VMLINUX_SYMBOL_STR(efivar_work) },
	{ 0xe25c998c, __VMLINUX_SYMBOL_STR(__efivar_entry_iter) },
	{ 0xc42c12d4, __VMLINUX_SYMBOL_STR(efivars_kobject) },
	{ 0xeec2c7cf, __VMLINUX_SYMBOL_STR(ucs2_as_utf8) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "401E4BBFC883FB7C520900D");
