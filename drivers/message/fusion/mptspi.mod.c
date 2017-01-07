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
	{ 0x7364da5d, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x36ff812b, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0x339a4563, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x22c8a6b3, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x5815820c, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x32d4b16d, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0xad8c3d7e, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x2439a7a6, __VMLINUX_SYMBOL_STR(spi_release_transport) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6a1bbaa5, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x20a233ff, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x747c6c83, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xeff3c11c, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0x797b828a, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x21f44395, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0x91be37cb, __VMLINUX_SYMBOL_STR(spi_attach_transport) },
	{ 0x69700929, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x491d7cb6, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0xac5ba1c9, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xb48e0f44, __VMLINUX_SYMBOL_STR(scsi_device_lookup_by_target) },
	{ 0x97b018f1, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x34698023, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0xaf3907b1, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x8e360f35, __VMLINUX_SYMBOL_STR(mptscsih_IssueTaskMgmt) },
	{ 0xfdfa2064, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd0927e02, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2bc66ba3, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x2544a064, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x18aec877, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x215e6bd9, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0xe024146, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x3344adde, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x8f8ee20d, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0xcbfa2bb7, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0xa9652302, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1590bbfe, __VMLINUX_SYMBOL_STR(spi_display_xfer_agreement) },
	{ 0x88fa7333, __VMLINUX_SYMBOL_STR(spi_dv_device) },
	{ 0x76a16876, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0xa17b85de, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf21f01cb, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x4fa59995, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x59a31ba5, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x58237fa2, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xf5e2bbe3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46FED2EB42AD74594F7C10A");
