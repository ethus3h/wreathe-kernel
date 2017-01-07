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
	{ 0x80867dc8, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0xfc98abad, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0x9bde898, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x9b06d9d6, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0x491d7cb6, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x7364da5d, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x339a4563, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x22c8a6b3, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x5815820c, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0xa9652302, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0xad8c3d7e, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdaaa197, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6a1bbaa5, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x20a233ff, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x747c6c83, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xeff3c11c, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0x797b828a, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x21f44395, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0x709ff60d, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0xfdfa2064, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2bc66ba3, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xdf08a98e, __VMLINUX_SYMBOL_STR(mptscsih_flush_running_cmds) },
	{ 0x2544a064, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x113f3564, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x2a206708, __VMLINUX_SYMBOL_STR(mptbase_sas_persist_operation) },
	{ 0xfff7a199, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x9fed6064, __VMLINUX_SYMBOL_STR(mptscsih_get_scsi_lookup) },
	{ 0xac025c6c, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0x4d49db54, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0x480ffb4f, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x3344adde, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0xac5ba1c9, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x18aec877, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x653763e7, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0xb5cc5e9b, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x84a4af92, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x306c1183, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x97b018f1, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x253b6adf, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xa6051ee7, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0xfa38e3f5, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0x3b94fe75, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0x27668f3e, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0xf9b5d97e, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0x906ac443, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x7178b19e, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0x2ed91336, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0x9a032110, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x20ad6053, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x34698023, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x74df30e6, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0xeaa4e79b, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0xd0927e02, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x2d8f597f, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0xc8d06930, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_response_code) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2de34f38, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0x1e86a4f2, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0xb7f23938, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0x62736d44, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x107167e5, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1eede7, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xf21f01cb, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x76a16876, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x4fa59995, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x3fc92c94, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf5d12850, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg0) },
	{ 0x76c8776e, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0xe55d1fb2, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0xde10009d, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x81a01be8, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x58237fa2, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0xe024146, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x69700929, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcbfa2bb7, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x59a31ba5, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xf5e2bbe3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd4d6056d, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_sas";

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8BCEC753F4658A8880D2D4B");
