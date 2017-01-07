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
	{ 0x122f592c, __VMLINUX_SYMBOL_STR(acpi_device_uevent_modalias) },
	{ 0x868b2bb5, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xdc6699cb, __VMLINUX_SYMBOL_STR(acpi_dev_free_resource_list) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd15774fc, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x6b954705, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4d08d74a, __VMLINUX_SYMBOL_STR(rt_mutex_lock) },
	{ 0x182a7e31, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xd6c20194, __VMLINUX_SYMBOL_STR(acpi_device_modalias) },
	{ 0x973e8b64, __VMLINUX_SYMBOL_STR(__i2c_board_lock) },
	{ 0x2068fa2f, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x117fcf31, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x46f6153, __VMLINUX_SYMBOL_STR(dev_pm_clear_wake_irq) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf995798a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x80172320, __VMLINUX_SYMBOL_STR(pm_runtime_no_callbacks) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x174bb41, __VMLINUX_SYMBOL_STR(acpi_bus_get_status) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2093cf3e, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x4da0f7a9, __VMLINUX_SYMBOL_STR(class_compat_create_link) },
	{ 0x50e7193a, __VMLINUX_SYMBOL_STR(__i2c_first_dynamic_bus_num) },
	{ 0xbea5ff1e, __VMLINUX_SYMBOL_STR(static_key_initialized) },
	{ 0x534129fd, __VMLINUX_SYMBOL_STR(class_compat_remove_link) },
	{ 0xf15bd57e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x801a904b, __VMLINUX_SYMBOL_STR(rt_mutex_trylock) },
	{ 0x418b21a1, __VMLINUX_SYMBOL_STR(rt_mutex_unlock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xfa645d3, __VMLINUX_SYMBOL_STR(dev_pm_set_wake_irq) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x1cee842e, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x7e32222a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x3a7bca5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xc24b89ce, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x2bfeb410, __VMLINUX_SYMBOL_STR(acpi_get_handle) },
	{ 0x77506672, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf82014d, __VMLINUX_SYMBOL_STR(dev_pm_domain_detach) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6efd699d, __VMLINUX_SYMBOL_STR(bus_for_each_dev) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x583edfcf, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xaa9a58a3, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xe1605d7a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xc18ac808, __VMLINUX_SYMBOL_STR(acpi_dev_get_resources) },
	{ 0xe99c439c, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x32c3cb4e, __VMLINUX_SYMBOL_STR(class_compat_register) },
	{ 0x343bdf1, __VMLINUX_SYMBOL_STR(__i2c_board_list) },
	{ 0x5e3c98c6, __VMLINUX_SYMBOL_STR(bus_for_each_drv) },
	{ 0xf93773f9, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xd4022957, __VMLINUX_SYMBOL_STR(dev_pm_domain_attach) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf1128f1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xd6375dd5, __VMLINUX_SYMBOL_STR(acpi_driver_match_device) },
	{ 0xe5883bd9, __VMLINUX_SYMBOL_STR(class_compat_unregister) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x4230015e, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xfb80c7a0, __VMLINUX_SYMBOL_STR(acpi_walk_namespace) },
	{ 0x8f134482, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

