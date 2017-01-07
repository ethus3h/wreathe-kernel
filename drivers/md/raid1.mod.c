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
	{ 0x63a015ac, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xe5dabfcf, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xdbcc7834, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4a76ad56, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x42620cef, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0xe925a7b1, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xbf477e57, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xec12dcaf, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x35450ac5, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x15873a3f, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1c3dfa96, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc5b5a7d7, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x791bf452, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x1e6799a8, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xfc3fd74a, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x30759c1d, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x13f62cee, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa81a0080, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x920d693, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xfd595abf, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xd8722720, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x6c282d54, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x48f8fc97, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb601d35c, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x532b6ba9, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x34db52b5, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x60066784, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xc8efdfba, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x93e19805, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x10031a53, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x407597d6, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0x322a049b, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xc14908fb, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xa77315b, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x8ddf26b, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x696f4be3, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1ca5961c, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x474ee9ae, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfba70013, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x3350a0a5, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x43bfc7d7, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x55d3c120, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xbe8a4b35, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x9a9f570f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x2027d68b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x621e8c29, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xf44b67b4, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x74f91e0e, __VMLINUX_SYMBOL_STR(md_cluster_ops) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xaf3bad66, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa4755956, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9ecbd38a, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xf6038c7e, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

