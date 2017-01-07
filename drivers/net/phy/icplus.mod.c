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
	{ 0x390391ca, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x6a75ab8e, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x88a3e2f6, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x7c8d8234, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb82145b0, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xb000d749, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6fac1a3, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xa3c17971, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xae57f9a7, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("mdio:????001001000011000011011000????");
MODULE_ALIAS("mdio:????001001000011000011011001????");
MODULE_ALIAS("mdio:????001001000011000011000101????");
