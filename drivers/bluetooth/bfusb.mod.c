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
	{ 0x452004ea, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6355f65c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xca820b80, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xf505758a, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x302dbfba, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xa68594a, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xcf495f96, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa253e287, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xcb58ca46, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2d5e24ac, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xd20f3020, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0xea3f725d, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9b6c452, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x54b794fc, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x9d2ca2a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x15e38b5, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xe277c0f5, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x32d47abc, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x32ec741d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x30df9d26, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "05716A080CE29B1B9C5732F");
