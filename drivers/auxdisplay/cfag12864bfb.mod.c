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
	{ 0x3092bfc, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x23ca79a3, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x1424eb3c, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x2ea1abe4, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x1456b7f, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xecb2e5d, __VMLINUX_SYMBOL_STR(cfag12864b_disable) },
	{ 0xfc18d734, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xc4e73e9f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6c4d3eba, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xcd673149, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x633f4e94, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x313bc46, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3389f926, __VMLINUX_SYMBOL_STR(cfag12864b_enable) },
	{ 0x2ff9464, __VMLINUX_SYMBOL_STR(cfag12864b_isinited) },
	{ 0x432c3320, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfe4ebc37, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc48e9d95, __VMLINUX_SYMBOL_STR(cfag12864b_buffer) },
	{ 0x172cfe9a, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x1b9788bf, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x4dc68f65, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b";

