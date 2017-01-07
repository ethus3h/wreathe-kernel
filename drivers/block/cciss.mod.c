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
	{ 0xc09f143e, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xc24b89ce, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xdc823ee1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x87278024, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x868b2bb5, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x566b1221, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2a303d4d, __VMLINUX_SYMBOL_STR(check_signature) },
	{ 0x30be89ba, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xf5fa02cf, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x83b8f3c4, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xd9a159e0, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf79046a7, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe05b9a37, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xee5b7718, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf97a0dbb, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xcaa7eb52, __VMLINUX_SYMBOL_STR(copy_in_user) },
	{ 0x8f9c199c, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd428627b, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc2e587d1, __VMLINUX_SYMBOL_STR(reset_devices) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x66a72859, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x7cc2906b, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5b35b005, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa4da6c1f, __VMLINUX_SYMBOL_STR(blk_start_request) },
	{ 0x1eb1af36, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0x1229997a, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x12d647e7, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x72d47a61, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x74fcf555, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x6ba4b829, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xf2042377, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x778ccea0, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x9f878db6, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x43f31270, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x16f8065e, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xe1605d7a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2c023b08, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x970bb909, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2a7288e, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xde2e811, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xdb913b80, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x14ef600c, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x76dd109b, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x190d2262, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x4230015e, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x836d449f, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x121bdac6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00000E11d0000B060sv00000E11sd00004070bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004080bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004082bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004083bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd00004091bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Abc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Bbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Cbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Dbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003220sv0000103Csd00003225bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003223bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003234bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003235bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003211bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003212bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003213bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003215bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003237bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd0000323Dbc*sc*i*");

MODULE_INFO(srcversion, "86F92B1274BBF96F97BA23B");
