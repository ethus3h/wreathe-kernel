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
	{ 0x3e632ff2, __VMLINUX_SYMBOL_STR(rmi_process_interrupt_requests) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73cbfc7c, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x77a39553, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x857fc767, __VMLINUX_SYMBOL_STR(rmi_register_transport_device) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x551fbfad, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc01bf229, __VMLINUX_SYMBOL_STR(rmi_dbg) },
	{ 0xcc7c1afe, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x25d633f3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xcdfe13ee, __VMLINUX_SYMBOL_STR(rmi_unregister_transport_device) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xe826a815, __VMLINUX_SYMBOL_STR(rmi_driver_suspend) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf1d2cf99, __VMLINUX_SYMBOL_STR(rmi_driver_resume) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("i2c:rmi4_i2c");

MODULE_INFO(srcversion, "98D32C6E9B2984072F10CC6");
