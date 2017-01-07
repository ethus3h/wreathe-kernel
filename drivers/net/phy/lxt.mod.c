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
	{ 0xa3c17971, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x88a3e2f6, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x7c8d8234, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xb82145b0, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x6fac1a3, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xae57f9a7, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("mdio:0111100000010000000000000000????");
MODULE_ALIAS("mdio:0000000000010011011110001110????");
MODULE_ALIAS("mdio:0000000000010011011110100001????");
