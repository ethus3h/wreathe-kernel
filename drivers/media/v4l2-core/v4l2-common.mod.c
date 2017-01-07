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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x45a44c24, __VMLINUX_SYMBOL_STR(v4l2_ctrl_fill) },
	{ 0xa8099d10, __VMLINUX_SYMBOL_STR(i2c_new_probed_device) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbfcc3473, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x77506672, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x8d7fb82f, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0xe2cef376, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x50ba9074, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x8f134482, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,i2c-core";

