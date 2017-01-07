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
	{ 0x593f5994, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x999b10e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x452004ea, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6355f65c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4c1c1a50, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xcb58ca46, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6867de48, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x3c501e26, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x2924ed76, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x7156bd6e, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xa3415eb4, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0xb000d749, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xe77cd3c, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x7a471883, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x33f370a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa0eda6f6, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9db1ac3, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xdaa4b7e2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf505758a, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9b6c452, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe277c0f5, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9d2ca2a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8DEE61F1C4243E64EAAD562");