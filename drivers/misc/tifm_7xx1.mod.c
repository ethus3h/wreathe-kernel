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
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x8ad5f4af, __VMLINUX_SYMBOL_STR(tifm_add_adapter) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3d5953b1, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x630e2adc, __VMLINUX_SYMBOL_STR(tifm_alloc_adapter) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xf1128f1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2093cf3e, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x9e930d1a, __VMLINUX_SYMBOL_STR(tifm_alloc_device) },
	{ 0x87b55510, __VMLINUX_SYMBOL_STR(tifm_free_device) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x70c5b648, __VMLINUX_SYMBOL_STR(tifm_free_adapter) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xe6d4c0ea, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x8f5c5839, __VMLINUX_SYMBOL_STR(tifm_remove_adapter) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb006ad7d, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xbe7cdab9, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xe05b9a37, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x30be89ba, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x3b59e785, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa8c2ec46, __VMLINUX_SYMBOL_STR(tifm_queue_work) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tifm_core";

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EA826F9E352D3CBC9046FD4");
