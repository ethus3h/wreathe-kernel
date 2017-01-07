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
	{ 0x18aec877, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x5815820c, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x32d4b16d, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0xa9652302, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0xad8c3d7e, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x7c147d6c, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6a1bbaa5, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x20a233ff, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x747c6c83, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xeff3c11c, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0x797b828a, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x21f44395, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0xaadd54, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x97b018f1, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfdfa2064, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2bc66ba3, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x2544a064, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x22c8a6b3, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x339a4563, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x36ff812b, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0x7364da5d, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8f8ee20d, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x58237fa2, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x34698023, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb3150f7c, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0x29064bf, __VMLINUX_SYMBOL_STR(fc_remote_port_rolechg) },
	{ 0x39861f89, __VMLINUX_SYMBOL_STR(fc_remote_port_add) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x71849231, __VMLINUX_SYMBOL_STR(fc_remote_port_delete) },
	{ 0xd0927e02, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d31883e, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_fc";

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "81F9334711F90F7F05D12B9");
