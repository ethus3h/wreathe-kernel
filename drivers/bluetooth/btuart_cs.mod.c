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
	{ 0x2d35bc2d, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xb5219354, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xa68594a, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcf495f96, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0xe85a681b, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0xcd70ffcf, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x8dd5cb15, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x32d47abc, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2e17efbd, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2d5e24ac, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x54b794fc, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x5ff8308d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x32ec741d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x219297d9, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0xf35b4f4f, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0x302dbfba, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xca820b80, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x30df9d26, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,bluetooth";

