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
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xf15bd57e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x8906da38, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x99692010, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x75b16fc4, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xca88bb8a, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x29d8ff5, __VMLINUX_SYMBOL_STR(scsi_cmd_ioctl) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x5dfccbb1, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x3fc92c94, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x4627ca24, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xff313424, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcc63b256, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x2d899c91, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb52a394a, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xd9e23d92, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xe23fb057, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7c455001, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xfe3ed0f8, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xdef8ceea, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5953768e, __VMLINUX_SYMBOL_STR(get_user_pages_unlocked) },
	{ 0x9a9f570f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x2027d68b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xbe8a4b35, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x84a4af92, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xd072a2b2, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x54c6a6c, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0xac5ba1c9, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x51757b63, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x1ca5961c, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8b8b9ccb, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x41015e30, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0x72d47a61, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbf9bece8, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x50d02757, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xec43ee84, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x15bc8e93, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xf1128f1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x1c70a92c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x474ee9ae, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x121bdac6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x48f8fc97, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

