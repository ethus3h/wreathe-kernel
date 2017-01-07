#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59776590, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb82145b0, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x6fac1a3, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x515d0127, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0x9118837f, __VMLINUX_SYMBOL_STR(phy_write_mmd_indirect) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

