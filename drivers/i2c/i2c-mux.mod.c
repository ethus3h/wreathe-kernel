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
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4d08d74a, __VMLINUX_SYMBOL_STR(rt_mutex_lock) },
	{ 0x770227b5, __VMLINUX_SYMBOL_STR(set_primary_fwnode) },
	{ 0xcc7c1afe, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xaeca7a43, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x801a904b, __VMLINUX_SYMBOL_STR(rt_mutex_trylock) },
	{ 0x418b21a1, __VMLINUX_SYMBOL_STR(rt_mutex_unlock) },
	{ 0x474ee9ae, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xfc167b7c, __VMLINUX_SYMBOL_STR(i2c_adapter_type) },
	{ 0x1ca5961c, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xf15e7b38, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x55f5a8b6, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x358bbe90, __VMLINUX_SYMBOL_STR(i2c_add_numbered_adapter) },
	{ 0xc71302f7, __VMLINUX_SYMBOL_STR(acpi_find_child_device) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x913e82e8, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

