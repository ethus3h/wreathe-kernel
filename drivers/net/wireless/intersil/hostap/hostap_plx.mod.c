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
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x3b154876, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x69fa157c, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0x9943fbe, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa3415eb4, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x32d47abc, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x7156bd6e, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x6167425a, __VMLINUX_SYMBOL_STR(hostap_init_ap_proc) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc85a9327, __VMLINUX_SYMBOL_STR(hostap_init_proc) },
	{ 0x1c407090, __VMLINUX_SYMBOL_STR(hostap_add_interface) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf5c36cb2, __VMLINUX_SYMBOL_STR(hostap_init_data) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xaa6467dd, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6762edfd, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xe22d5780, __VMLINUX_SYMBOL_STR(hostap_80211_ops) },
	{ 0xfad92653, __VMLINUX_SYMBOL_STR(hostap_setup_dev) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4968dcb, __VMLINUX_SYMBOL_STR(lib80211_crypt_info_init) },
	{ 0x3bad0e04, __VMLINUX_SYMBOL_STR(hostap_info_init) },
	{ 0x1723ac32, __VMLINUX_SYMBOL_STR(hostap_set_multicast_list_queue) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6867de48, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x82e46443, __VMLINUX_SYMBOL_STR(hostap_get_porttype) },
	{ 0xbc48cc00, __VMLINUX_SYMBOL_STR(hostap_set_auth_algs) },
	{ 0xc4d07e1c, __VMLINUX_SYMBOL_STR(hostap_set_roaming) },
	{ 0x293bb592, __VMLINUX_SYMBOL_STR(hostap_set_encryption) },
	{ 0xee83a117, __VMLINUX_SYMBOL_STR(hostap_set_string) },
	{ 0x680b4a86, __VMLINUX_SYMBOL_STR(hostap_check_sta_fw_version) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3fc92c94, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xa12ad27f, __VMLINUX_SYMBOL_STR(hostap_dump_tx_header) },
	{ 0x9fbc8b95, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x70a899d0, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa6fbd6a5, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xde2e811, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x1b18a06, __VMLINUX_SYMBOL_STR(hostap_set_antsel) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xf84b6a08, __VMLINUX_SYMBOL_STR(hostap_set_word) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd900f140, __VMLINUX_SYMBOL_STR(prism2_update_comms_qual) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x33f370a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8264d0d9, __VMLINUX_SYMBOL_STR(hostap_info_process) },
	{ 0x102f49c8, __VMLINUX_SYMBOL_STR(hostap_80211_rx) },
	{ 0xb2a945e0, __VMLINUX_SYMBOL_STR(hostap_dump_rx_header) },
	{ 0x35b3bb37, __VMLINUX_SYMBOL_STR(hostap_handle_sta_tx_exc) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x5ff8308d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb4b77c8b, __VMLINUX_SYMBOL_STR(hostap_80211_get_hdrlen) },
	{ 0x32ec741d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8bc1866a, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa0eda6f6, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x84a26a3c, __VMLINUX_SYMBOL_STR(hostap_set_hostapd_sta) },
	{ 0xb880b55a, __VMLINUX_SYMBOL_STR(hostap_set_hostapd) },
	{ 0x7ac3f73d, __VMLINUX_SYMBOL_STR(hostap_remove_proc) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xec5b2a17, __VMLINUX_SYMBOL_STR(hostap_free_data) },
	{ 0x30df9d26, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x4aebd127, __VMLINUX_SYMBOL_STR(lib80211_crypt_info_free) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xdaa4b7e2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x7b2309eb, __VMLINUX_SYMBOL_STR(hostap_remove_interface) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hostap,lib80211";

MODULE_ALIAS("pci:v000010B7d00007770sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Cd00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001562d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001385d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015E8d00000130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015E8d00000131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001638d00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00003685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000EC80d0000EC00sv*sd*bc*sc*i*");