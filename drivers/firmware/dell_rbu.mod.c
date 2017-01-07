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
	{ 0x3b154876, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x6c8d07c5, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0xfc18d734, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2d593948, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x732b937b, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xa36eb58d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x65e0d6d7, __VMLINUX_SYMBOL_STR(memory_read_from_buffer) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x50777af8, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5E1977B1681D078D08B8F58");
