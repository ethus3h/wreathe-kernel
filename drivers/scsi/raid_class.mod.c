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
	{ 0x500e5b8d, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x90e3dc7f, __VMLINUX_SYMBOL_STR(attribute_container_classdev_to_container) },
	{ 0x59a31ba5, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x45e8b216, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x3c510383, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x190d2262, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xa31d0d7a, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xecd6564a, __VMLINUX_SYMBOL_STR(attribute_container_find_class_device) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe1605d7a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe99c439c, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x836d449f, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xf1128f1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4230015e, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xaa0b03f6, __VMLINUX_SYMBOL_STR(scsi_is_sdev_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

