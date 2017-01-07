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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x65958a49, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x5aac6daa, __VMLINUX_SYMBOL_STR(led_stop_software_blink) },
	{ 0x5f8f2579, __VMLINUX_SYMBOL_STR(mutex_destroy) },
	{ 0x5687cd8e, __VMLINUX_SYMBOL_STR(led_init_core) },
	{ 0x1b4d1c4, __VMLINUX_SYMBOL_STR(led_set_brightness) },
	{ 0x9c1c81b0, __VMLINUX_SYMBOL_STR(led_trigger_set_default) },
	{ 0xc7b00e1b, __VMLINUX_SYMBOL_STR(led_trigger_show) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcd4470b5, __VMLINUX_SYMBOL_STR(device_create_with_groups) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf8663cc, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7e32222a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x3a7bca5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x8e59a9a, __VMLINUX_SYMBOL_STR(led_trigger_set) },
	{ 0xf955c5e6, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xe1605d7a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2497ac27, __VMLINUX_SYMBOL_STR(led_update_brightness) },
	{ 0x24eb7e32, __VMLINUX_SYMBOL_STR(leds_list) },
	{ 0xf49ddc99, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x4e40ec4d, __VMLINUX_SYMBOL_STR(led_trigger_store) },
	{ 0x974f4752, __VMLINUX_SYMBOL_STR(led_trigger_remove) },
	{ 0x7f5bbdc6, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf1128f1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8c199467, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x266f20a0, __VMLINUX_SYMBOL_STR(led_set_brightness_nopm) },
	{ 0x8b7c4f54, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xaf9439db, __VMLINUX_SYMBOL_STR(leds_list_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

