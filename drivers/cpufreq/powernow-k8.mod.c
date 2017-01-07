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
	{ 0xbc2031de, __VMLINUX_SYMBOL_STR(acpi_processor_get_bios_limit) },
	{ 0x72075f4d, __VMLINUX_SYMBOL_STR(cpufreq_generic_frequency_table_verify) },
	{ 0xb464bf96, __VMLINUX_SYMBOL_STR(cpufreq_unregister_driver) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xb5f2da6a, __VMLINUX_SYMBOL_STR(cpufreq_register_driver) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7cd6f042, __VMLINUX_SYMBOL_STR(cpufreq_get_current_driver) },
	{ 0xb581290c, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1ad8183c, __VMLINUX_SYMBOL_STR(cpufreq_freq_transition_end) },
	{ 0xc1688987, __VMLINUX_SYMBOL_STR(cpufreq_freq_transition_begin) },
	{ 0xe57edb50, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x4721c312, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xf27654e2, __VMLINUX_SYMBOL_STR(cpufreq_table_validate_and_show) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xd4ab6664, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x4c07a7e0, __VMLINUX_SYMBOL_STR(acpi_processor_unregister_performance) },
	{ 0x123f2764, __VMLINUX_SYMBOL_STR(acpi_processor_notify_smm) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x36ba417, __VMLINUX_SYMBOL_STR(cpu_core_map) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x524205cc, __VMLINUX_SYMBOL_STR(acpi_processor_register_performance) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdfe2f47d, __VMLINUX_SYMBOL_STR(ex_handler_wrmsr_unsafe) },
	{ 0x86371acd, __VMLINUX_SYMBOL_STR(ex_handler_rdmsr_unsafe) },
	{ 0xf82f3657, __VMLINUX_SYMBOL_STR(work_on_cpu) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=processor";

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
