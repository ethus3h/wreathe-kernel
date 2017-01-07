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
	{ 0xcb69f2ee, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xd5ade019, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc6b915d1, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcd5e740a, __VMLINUX_SYMBOL_STR(dev_attr_sw_activity) },
	{ 0x5582d54f, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x9a643918, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0xb1a31163, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0x7c4ef73b, __VMLINUX_SYMBOL_STR(sata_pmp_qc_defer_cmd_switch) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x31a1bd82, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcfc5fc4, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x75c3e1d8, __VMLINUX_SYMBOL_STR(dev_attr_em_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0x18487852, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0xe411a0a5, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1c26cf81, __VMLINUX_SYMBOL_STR(ata_dev_set_feature) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5643d2f2, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x22bd7e90, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0xd27a59e4, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0x924d0c97, __VMLINUX_SYMBOL_STR(ata_host_start) },
	{ 0xc8bae118, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x101cf307, __VMLINUX_SYMBOL_STR(dev_attr_unload_heads) },
	{ 0xe70d5ad3, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x551fbfad, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xa40a01b9, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xe508e084, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0x81790abf, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x3445a15d, __VMLINUX_SYMBOL_STR(ata_host_register) },
	{ 0x47c18105, __VMLINUX_SYMBOL_STR(dev_attr_em_message_type) },
	{ 0x668e2a71, __VMLINUX_SYMBOL_STR(sata_lpm_ignore_phy_events) },
	{ 0xf31648ce, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x2bd354ad, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x12fdf5b6, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7038b8b7, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0xbb7f4dd0, __VMLINUX_SYMBOL_STR(ata_link_next) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbc682917, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1b8b24b6, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0x6edb1970, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x73cbfc7c, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x84be59c4, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0x82c5c544, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

