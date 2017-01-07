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
	{ 0xbe448c8b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xbc7307b2, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xbd0e3127, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0xcc8adf8c, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x6dcd1cf0, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xa24e4a38, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0xf2c4dcf9, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x2070b06a, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x5b04d2d4, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9a0abcf6, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x18487852, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe6d4c0ea, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf5fa02cf, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x6ffe1b15, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x81790abf, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x443dbb06, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x5ec0ab59, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xb4c921c1, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xe116c7e5, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xdde528c, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xd27a59e4, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0xe70d5ad3, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x7bbd5209, __VMLINUX_SYMBOL_STR(sata_link_debounce) },
	{ 0xc428068d, __VMLINUX_SYMBOL_STR(sata_deb_timing_long) },
	{ 0x80d1bcd9, __VMLINUX_SYMBOL_STR(ata_link_online) },
	{ 0xbfdc62d7, __VMLINUX_SYMBOL_STR(sata_set_spd) },
	{ 0x939c27f6, __VMLINUX_SYMBOL_STR(ata_link_offline) },
	{ 0x2bd354ad, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0xeff4b5da, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0x9a643918, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0xd864f6e5, __VMLINUX_SYMBOL_STR(ata_eh_freeze_port) },
	{ 0xdccb0bf3, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x82c5c544, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6edb1970, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x84be59c4, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0xd5ade019, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xc8bae118, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0xe411a0a5, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xa40a01b9, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x5582d54f, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0x7038b8b7, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x81cc4d7e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x7cf05f15, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x22bd7e90, __VMLINUX_SYMBOL_STR(ata_wait_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");
