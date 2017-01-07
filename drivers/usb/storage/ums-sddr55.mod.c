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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6c7e27f0, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0x3f563cec, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x592cde3d, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0x4552e943, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb4f63494, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x452004ea, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3725477, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xfded429e, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x54f982d6, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0xf18e011c, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x5cfbc0c7, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x98e3f276, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x13e49407, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe4a3d498, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x6355f65c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v07C4pA103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C0BpA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v55AApA103d*dc*dsc*dp*ic*isc*ip*in*");
