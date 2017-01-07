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
	{ 0xd88a7f3c, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xf07317fb, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x739d7edc, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x7cb9400b, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xa0715ede, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x6baee46e, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x7d61185c, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x999b10e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xdd589cfc, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x4edb6452, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x4e0f337a, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x9d976791, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xe78038a5, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xb273748e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x32d96c88, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x452004ea, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6355f65c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x97c4f0b, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4e322cf7, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xe8f844d0, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xcb073097, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xfd6d64d6, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdffe19aa, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x2d87c0b2, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xeebd444d, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x28a4f2e3, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x6b0abcfe, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x969efb8, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x51860c40, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x5ff8308d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdce4cb08, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xb1c86278, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");
