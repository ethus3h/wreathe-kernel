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
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2614cb7e, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x2d593948, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2bc66ba3, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x20eadeb6, __VMLINUX_SYMBOL_STR(ip_compute_csum) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xfdfa2064, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x46c34455, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x59a31ba5, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa51ef930, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb3150f7c, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0xf97a0dbb, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3d5ec6de, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x7954b1ea, __VMLINUX_SYMBOL_STR(fc_get_event_number) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x87278024, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x48bbb375, __VMLINUX_SYMBOL_STR(blk_mq_unique_tag) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xf5e2bbe3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x622f3b1a, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x3da1edff, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x48e1c3a9, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x30be89ba, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x38d0ecd, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xdc823ee1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd4ab6664, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0xd5cdda31, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xef5005a3, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x29064bf, __VMLINUX_SYMBOL_STR(fc_remote_port_rolechg) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x85046e14, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xea628e36, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x50777af8, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x1bbf82ff, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xb44a5b42, __VMLINUX_SYMBOL_STR(fc_vport_create) },
	{ 0x1afb4436, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xb5848bae, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x7f2be7a2, __VMLINUX_SYMBOL_STR(fc_host_post_vendor_event) },
	{ 0x7c147d6c, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0x54d504df, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xac81a8ee, __VMLINUX_SYMBOL_STR(fc_host_post_event) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xfab159d4, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x83b8f3c4, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xe1605d7a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe234be93, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0x71849231, __VMLINUX_SYMBOL_STR(fc_remote_port_delete) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x35804949, __VMLINUX_SYMBOL_STR(fc_block_scsi_eh) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x76dd109b, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf5fa02cf, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe99c439c, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xe488e64a, __VMLINUX_SYMBOL_STR(pci_try_set_mwi) },
	{ 0xe024146, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x2ac0f504, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3b59e785, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x3dd75be0, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7d5b9cce, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xee5b7718, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x732b937b, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x17ac620c, __VMLINUX_SYMBOL_STR(__cpu_present_mask) },
	{ 0x84e34060, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9d31883e, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc666a132, __VMLINUX_SYMBOL_STR(crc_t10dif) },
	{ 0xbc4a9ab6, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x39861f89, __VMLINUX_SYMBOL_STR(fc_remote_port_add) },
	{ 0x11787204, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x784736ac, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xc4a00102, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xa0fa1742, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0x619e8af0, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xea71ecbf, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb111e81d, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x3cd19d60, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0xaadd54, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe05b9a37, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x4dfb8b85, __VMLINUX_SYMBOL_STR(param_ops_ullong) },
	{ 0x32ca8caf, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_fc,crc-t10dif";

MODULE_ALIAS("pci:v000010DFd0000FB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00001AE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE05sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000704sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E208sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000724sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000072Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "217DF8392E7B0EFE2FC30FE");
