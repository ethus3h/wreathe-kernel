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
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x593f5994, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x999b10e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3c0987f3, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x51bad4d4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x4c1c1a50, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x9639c791, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x6867de48, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x33f370a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe77cd3c, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x7a471883, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcb073097, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xbb459dbb, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8bc1866a, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xde1c4efe, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x43a5df77, __VMLINUX_SYMBOL_STR(netdev_printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa0eda6f6, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xac834ac8, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf5dd9913, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xdaa4b7e2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001000d00000702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000701sv*sd*bc*sc*i*");