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
	{ 0x1fafeabb, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0x25d633f3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xb4d7bc51, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xd7352db0, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x968e42c6, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xa6a0a2fb, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xcc7c1afe, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xa72da54a, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xc07eaff9, __VMLINUX_SYMBOL_STR(__regmap_init) },
	{ 0x5db7ade6, __VMLINUX_SYMBOL_STR(regmap_get_val_endian) },
	{ 0xe7f4a62c, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

