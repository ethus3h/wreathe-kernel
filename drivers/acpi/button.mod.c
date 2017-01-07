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
	{ 0xb6d0a2c2, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa6fbd6a5, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x9943fbe, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xfe3ad3a3, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x5bbca36d, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4bf49ed6, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xde2e811, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x566b1221, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd8687336, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x77456e0a, __VMLINUX_SYMBOL_STR(acpi_root_dir) },
	{ 0x790df80a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1e953d7f, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0xaacc05fc, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x2252f726, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0x6ac55c24, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7db7269e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa16b25c7, __VMLINUX_SYMBOL_STR(acpi_device_hid) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x23ca75d5, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:PNP0C0D:*");
MODULE_ALIAS("acpi*:PNP0C0E:*");
MODULE_ALIAS("acpi*:LNXSLPBN:*");
MODULE_ALIAS("acpi*:PNP0C0C:*");
MODULE_ALIAS("acpi*:LNXPWRBN:*");
