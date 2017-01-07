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
	{ 0x63a015ac, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xe5dabfcf, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x3ec74017, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xa4755956, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xbd4c450e, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x2f733884, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x53db7689, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x9ecbd38a, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x621e8c29, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xfd595abf, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xa77315b, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xd8722720, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x1dd0d152, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xaebdc563, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x218627d7, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x6c282d54, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x778ccea0, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xf8fbb64a, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

