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
	{ 0xb004e1f, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xc4c26743, __VMLINUX_SYMBOL_STR(pcmcia_register_socket) },
	{ 0x9ca85711, __VMLINUX_SYMBOL_STR(pccard_nonstatic_ops) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4440970a, __VMLINUX_SYMBOL_STR(pcmcia_parse_events) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7a63c1a2, __VMLINUX_SYMBOL_STR(pcmcia_unregister_socket) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia_core,pcmcia_rsrc";

MODULE_ALIAS("pci:v00008086d00001221sv*sd*bc*sc*i*");
