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
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xcf89f4a6, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x2ea6483b, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x4bf49ed6, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x1cee842e, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x88f9deb7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x73cbfc7c, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x790df80a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x30894961, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x95d05c59, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x87111b2e, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x7610baca, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x55f5a8b6, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x5dcba04d, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xcc7c1afe, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x509c7acf, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3fc92c94, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c4364d7, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x25d633f3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("acpi*:ELAN0001:*");
MODULE_ALIAS("i2c:elants_i2c");

MODULE_INFO(srcversion, "0FF868D00274CE02BC312EA");
