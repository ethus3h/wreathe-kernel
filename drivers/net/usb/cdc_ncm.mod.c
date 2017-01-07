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
	{ 0x51bad4d4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf40e292b, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x253e4c74, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x9d976791, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x42f1cec8, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x32d96c88, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x7cb9400b, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xe8f844d0, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xbaf9522e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xb273748e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xdce4cb08, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x4edb6452, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x2a8c8108, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x33f370a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x3d585439, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd88a7f3c, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x79b6875, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe0875eb1, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x452004ea, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x41798845, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd24fc7a5, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x28a4f2e3, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdd589cfc, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xe78038a5, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x6f69ae4e, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xa0715ede, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x2d87c0b2, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6baee46e, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x2f7671d0, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0xb0bf72db, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0xd8c2caff, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x5fb42412, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x4e0f337a, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x739d7edc, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1f2306e9, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0x999b10e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71451794, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x6355f65c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4f010e22, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3c0987f3, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xd3d6d15a, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0xfd6d64d6, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xf07317fb, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
