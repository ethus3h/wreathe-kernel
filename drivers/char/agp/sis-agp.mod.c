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
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0x6077da80, __VMLINUX_SYMBOL_STR(agp3_generic_tlbflush) },
	{ 0xc2424641, __VMLINUX_SYMBOL_STR(agp3_generic_cleanup) },
	{ 0xde9b17ed, __VMLINUX_SYMBOL_STR(agp3_generic_fetch_size) },
	{ 0x4b085dbf, __VMLINUX_SYMBOL_STR(agp3_generic_configure) },
	{ 0xc65abeb7, __VMLINUX_SYMBOL_STR(agp3_generic_sizes) },
	{ 0x752f0195, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0x6f6daa67, __VMLINUX_SYMBOL_STR(get_agp_version) },
	{ 0x88b2f1f, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd9a159e0, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x6f52ea8f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xa0f743d4, __VMLINUX_SYMBOL_STR(agp_collect_device_status) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8e3e9a0, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0x7b7092e, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0xbe7cdab9, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xe05b9a37, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xb004e1f, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xdfd84c58, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0x30be89ba, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x3b59e785, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001039d00005591sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000540sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000620sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000630sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000635sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000645sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000646sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000648sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000650sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000651sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000655sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000661sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000662sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000671sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000730sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000735sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000740sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000741sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000745sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000746sv*sd*bc06sc00i00*");
