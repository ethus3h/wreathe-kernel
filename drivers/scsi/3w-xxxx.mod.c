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
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x2614cb7e, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe322ee5e, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xaf3907b1, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xfdfa2064, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2bc66ba3, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xac5ba1c9, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3fc92c94, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x1bbf82ff, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xbc4a9ab6, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x32ca8caf, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0xee30d9a7, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x7d5b9cce, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8b8b9ccb, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000013C1d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C1d00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3E279F1B753175A77C7CBAA");