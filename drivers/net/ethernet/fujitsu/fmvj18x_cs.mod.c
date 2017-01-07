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
	{ 0x3c0987f3, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x2d35bc2d, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xb5219354, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5a328ed5, __VMLINUX_SYMBOL_STR(pcmcia_release_window) },
	{ 0x8dd5cb15, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x42a0b3d, __VMLINUX_SYMBOL_STR(pcmcia_get_mac_from_cis) },
	{ 0x51bad4d4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x4c1c1a50, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xe78c723f, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xb28cd7db, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0xe85a681b, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0xcd70ffcf, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x2e17efbd, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x659fc8c3, __VMLINUX_SYMBOL_STR(pcmcia_get_tuple) },
	{ 0x6867de48, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xe77cd3c, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x7a471883, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x33f370a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x219297d9, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0xde1c4efe, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xa0eda6f6, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd1ae2b80, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x97b4e707, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xdaa4b7e2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf35b4f4f, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2924ed76, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3c501e26, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia";

MODULE_ALIAS("pcmcia:m0004c0004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa528C88C4pb74F91E59pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53AF556Epb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF47E6C66pb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb5BAF31DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb3F04875Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB8451188pb12939BA2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF4F43949pb773910F4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3Apb075FC7B6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3ApbBCCF43E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pbD9413666pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb8FA0EE70pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb7683BC9Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D8FEE2pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2599F454pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8F4005DApb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa90888080pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa1EAE9475pbD9A93BEDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa18DF0BA0pb831B1064pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0D0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0E0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0E01f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0A05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0B05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c1101f*fn*pfn00pa*pb*pc*pd*");
