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
	{ 0x999b10e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdaa4b7e2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xc8f6a7a7, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x868e586b, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x3d585439, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x7fd2a394, __VMLINUX_SYMBOL_STR(build_skb) },
	{ 0x31008d7a, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x7a471883, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xe234be93, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0x30be89ba, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf1face1c, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x3b59e785, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb006ad7d, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xac834ac8, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x9a9f570f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x2027d68b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb53620d1, __VMLINUX_SYMBOL_STR(pci_vpd_find_info_keyword) },
	{ 0xa787ee24, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x6f52ea8f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xe05b9a37, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2c3bacf4, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3c9390db, __VMLINUX_SYMBOL_STR(pci_vpd_find_tag) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x3dd75be0, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x48e1c3a9, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xd9a159e0, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x9639c791, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf5dd9913, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x4c1c1a50, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x6867de48, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x33f370a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9f1e8fc3, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x3da1edff, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x2924ed76, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7845e22, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x3c501e26, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd7e21b5b, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xa0eda6f6, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xdce4cb08, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa4c3c587, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xf5fa02cf, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x83b8f3c4, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xae068656, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x6574199, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x274dc2b, __VMLINUX_SYMBOL_STR(netif_get_num_default_rss_queues) },
	{ 0xca413c63, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xee5b7718, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf97a0dbb, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x48f8fc97, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x51bad4d4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xb000d749, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7156bd6e, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcb073097, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003101bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003106bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv0000103Csd00003102bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001639sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D6643D6CCFB5C8DCF914004");