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
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3e28868d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xf15e7b38, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xa787ee24, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xaeca7a43, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x1134f60e, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xca7b7a8, __VMLINUX_SYMBOL_STR(acpi_check_region) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x735a0bd5, __VMLINUX_SYMBOL_STR(native_io_delay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("pci:v00001106d00003050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003147sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003227sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008235sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008410sv*sd*bc*sc*i*");
