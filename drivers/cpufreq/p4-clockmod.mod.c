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
	{ 0x6560813, __VMLINUX_SYMBOL_STR(cpufreq_generic_attr) },
	{ 0x72075f4d, __VMLINUX_SYMBOL_STR(cpufreq_generic_frequency_table_verify) },
	{ 0xb464bf96, __VMLINUX_SYMBOL_STR(cpufreq_unregister_driver) },
	{ 0xb5f2da6a, __VMLINUX_SYMBOL_STR(cpufreq_register_driver) },
	{ 0xb581290c, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf27654e2, __VMLINUX_SYMBOL_STR(cpufreq_table_validate_and_show) },
	{ 0x2b67f096, __VMLINUX_SYMBOL_STR(speedstep_get_frequency) },
	{ 0x31e76b57, __VMLINUX_SYMBOL_STR(recalibrate_cpu_khz) },
	{ 0xd7ab2c0c, __VMLINUX_SYMBOL_STR(speedstep_detect_processor) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x3d5ec6de, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0x4a3bdeb3, __VMLINUX_SYMBOL_STR(cpu_sibling_map) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xe997667b, __VMLINUX_SYMBOL_STR(wrmsr_on_cpu) },
	{ 0xb1cfad22, __VMLINUX_SYMBOL_STR(rdmsr_on_cpu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speedstep-lib";

