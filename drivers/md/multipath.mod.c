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
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbf477e57, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x3ec74017, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x12e796f5, __VMLINUX_SYMBOL_STR(__bio_clone_fast) },
	{ 0xbb87cc8f, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x9ecbd38a, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x791bf452, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0xfd595abf, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xa77315b, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x55d3c120, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xd8722720, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf8fbb64a, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x30759c1d, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xaf3bad66, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xa4755956, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x621e8c29, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

