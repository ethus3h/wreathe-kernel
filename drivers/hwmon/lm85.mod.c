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
	{ 0x5a9c78f7, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x530f868d, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x498023f0, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xef1c781c, __VMLINUX_SYMBOL_STR(vid_which_vrm) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xa6a0a2fb, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x903c239, __VMLINUX_SYMBOL_STR(vid_from_reg) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb4d7bc51, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core,hwmon-vid";

MODULE_ALIAS("i2c:adm1027");
MODULE_ALIAS("i2c:adt7463");
MODULE_ALIAS("i2c:adt7468");
MODULE_ALIAS("i2c:lm85");
MODULE_ALIAS("i2c:lm85b");
MODULE_ALIAS("i2c:lm85c");
MODULE_ALIAS("i2c:emc6d100");
MODULE_ALIAS("i2c:emc6d101");
MODULE_ALIAS("i2c:emc6d102");
MODULE_ALIAS("i2c:emc6d103");
MODULE_ALIAS("i2c:emc6d103s");
