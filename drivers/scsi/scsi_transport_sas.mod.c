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
	{ 0x16f8065e, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x500e5b8d, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x95ad17f, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0x2a7288e, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x59a31ba5, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xdcd306ef, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x45e8b216, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x215e6bd9, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf5e2bbe3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x2c023b08, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x40af1ed1, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4d5c4557, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0xb68e47f5, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x3c510383, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x474ee9ae, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x190d2262, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xa31d0d7a, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x1ca5961c, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe1605d7a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa8e866bf, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0xd76ee764, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x76021823, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xe99c439c, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf93773f9, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12d647e7, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x836d449f, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xedd8d289, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0x579d38e7, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4230015e, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x58229a63, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

