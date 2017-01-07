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
	{ 0x3e28868d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xfc18d734, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xc4e73e9f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x313bc46, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6c4d3eba, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xcd673149, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xac0a39bc, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xd89c4e92, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x633f4e94, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x400390fb, __VMLINUX_SYMBOL_STR(acpi_check_resource_conflict) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe5ef156e, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x88f9deb7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xefa486fe, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5b4dc5df, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xfe81609f, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x47662c7, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe945c265, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x509c7acf, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3ed74e3, __VMLINUX_SYMBOL_STR(device_remove_file) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

