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
	{ 0x4f75a758, __VMLINUX_SYMBOL_STR(usb_hcd_pci_pm_ops) },
	{ 0xe3cf9e8, __VMLINUX_SYMBOL_STR(usb_hcd_pci_shutdown) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x657a0c3c, __VMLINUX_SYMBOL_STR(xhci_init_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa5e75e9a, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x5359dbc7, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x63a7a24e, __VMLINUX_SYMBOL_STR(usb_create_shared_hcd) },
	{ 0x9a6e0a5f, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x2f57b0f7, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xd3360d2f, __VMLINUX_SYMBOL_STR(xhci_gen_setup) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0xa5e8a3e6, __VMLINUX_SYMBOL_STR(xhci_dbg_trace) },
	{ 0x664b739, __VMLINUX_SYMBOL_STR(xhci_suspend) },
	{ 0x700296ca, __VMLINUX_SYMBOL_STR(usb_enable_intel_xhci_ports) },
	{ 0x5a34fee9, __VMLINUX_SYMBOL_STR(xhci_resume) },
	{ 0x3b59e785, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x5abfd222, __VMLINUX_SYMBOL_STR(usb_hcd_pci_remove) },
	{ 0x908cdf3e, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x6182fbe, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x58680aec, __VMLINUX_SYMBOL_STR(usb_hcd_is_primary_hcd) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xhci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");
