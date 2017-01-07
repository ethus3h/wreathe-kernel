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
	{ 0xc4e73e9f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x313bc46, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xaacc05fc, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x790df80a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x23ca75d5, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x7db7269e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x735a0bd5, __VMLINUX_SYMBOL_STR(native_io_delay) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa788f1a0, __VMLINUX_SYMBOL_STR(i8253_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

