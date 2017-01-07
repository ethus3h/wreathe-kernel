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
	{ 0xe156e90c, __VMLINUX_SYMBOL_STR(agp_generic_type_to_mask_type) },
	{ 0x8e036f68, __VMLINUX_SYMBOL_STR(agp_generic_destroy_pages) },
	{ 0xced41593, __VMLINUX_SYMBOL_STR(agp_generic_destroy_page) },
	{ 0xd8d82155, __VMLINUX_SYMBOL_STR(agp_generic_alloc_pages) },
	{ 0x94e1c20f, __VMLINUX_SYMBOL_STR(agp_generic_alloc_page) },
	{ 0xd9e3a3b1, __VMLINUX_SYMBOL_STR(agp_generic_free_by_type) },
	{ 0xd967d02d, __VMLINUX_SYMBOL_STR(agp_generic_alloc_by_type) },
	{ 0xa5c9cdc3, __VMLINUX_SYMBOL_STR(agp_generic_remove_memory) },
	{ 0x9dad5d7b, __VMLINUX_SYMBOL_STR(agp_generic_insert_memory) },
	{ 0xbd3be57a, __VMLINUX_SYMBOL_STR(agp_generic_free_gatt_table) },
	{ 0xdf1588e0, __VMLINUX_SYMBOL_STR(agp_generic_create_gatt_table) },
	{ 0xa4d4f0e6, __VMLINUX_SYMBOL_STR(global_cache_flush) },
	{ 0xe5c9183b, __VMLINUX_SYMBOL_STR(agp_generic_mask_memory) },
	{ 0x6a0e41f1, __VMLINUX_SYMBOL_STR(agp_generic_enable) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0x66497aaf, __VMLINUX_SYMBOL_STR(dev_emerg) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbbb3845a, __VMLINUX_SYMBOL_STR(pci_assign_resource) },
	{ 0x752f0195, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x36487cf0, __VMLINUX_SYMBOL_STR(intel_gmch_probe) },
	{ 0x88b2f1f, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0xd9a159e0, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb004e1f, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x8e3e9a0, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0xb2f74fb6, __VMLINUX_SYMBOL_STR(intel_gmch_remove) },
	{ 0x7b7092e, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0xdfd84c58, __VMLINUX_SYMBOL_STR(agp_bridge) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel-gtt";

MODULE_ALIAS("pci:v00008086d00001237sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007180sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007190sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000071A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007120sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007122sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007124sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001130sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002500sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002501sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003575sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001A21sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001A30sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002560sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000358Csv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003340sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003580sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002531sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002570sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002578sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000255Dsv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002588sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002580sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002590sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002770sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000027A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000027ACsv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000A010sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000A000sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002970sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002980sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002990sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002A00sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002A10sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029C0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029B0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029D0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002A40sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E00sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E10sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E20sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E30sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E40sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E90sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000040sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000069sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000044sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000062sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000006Asv*sd*bc06sc00i00*");
