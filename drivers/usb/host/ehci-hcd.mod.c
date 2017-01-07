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
	{ 0xcbca86ae, __VMLINUX_SYMBOL_STR(usb_root_hub_lost_power) },
	{ 0x3ed74e3, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xbaf9522e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xc26a7ec9, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd751ed73, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0xb9b9df41, __VMLINUX_SYMBOL_STR(usb_amd_dev_put) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7e22ed8f, __VMLINUX_SYMBOL_STR(usb_hub_clear_tt_buffer) },
	{ 0x10ecc52c, __VMLINUX_SYMBOL_STR(usb_amd_quirk_pll_enable) },
	{ 0x79b6875, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x6749a91c, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xdc825d6c, __VMLINUX_SYMBOL_STR(usb_amd_quirk_pll_disable) },
	{ 0xceb32cf4, __VMLINUX_SYMBOL_STR(ehci_cf_port_reset_rwsem) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e64181d, __VMLINUX_SYMBOL_STR(usb_calc_bus_time) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x73df734a, __VMLINUX_SYMBOL_STR(usb_hcd_end_port_resume) },
	{ 0x7e32222a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x3a7bca5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xc17515d7, __VMLINUX_SYMBOL_STR(usb_hcds_loaded) },
	{ 0xefa486fe, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xb04010ad, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x71451794, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc47adf7, __VMLINUX_SYMBOL_STR(usb_hc_died) },
	{ 0x34b1b194, __VMLINUX_SYMBOL_STR(usb_hcd_start_port_resume) },
	{ 0x15b6a56d, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xcfb4eb6e, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x619e8af0, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xea71ecbf, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x69327f39, __VMLINUX_SYMBOL_STR(usb_for_each_dev) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

