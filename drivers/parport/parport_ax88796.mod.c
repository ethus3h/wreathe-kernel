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
	{ 0x607adc65, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_byte) },
	{ 0xa645a9bd, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_nibble) },
	{ 0x8afd4567, __VMLINUX_SYMBOL_STR(parport_ieee1284_write_compat) },
	{ 0x524e4603, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_addr) },
	{ 0xb705b9b3, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_read_data) },
	{ 0xb226cc37, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_data) },
	{ 0x16418a8a, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_addr) },
	{ 0x94abcf57, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_addr) },
	{ 0x75881084, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_data) },
	{ 0x74c34563, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_data) },
	{ 0xc4e73e9f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x313bc46, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1ef72193, __VMLINUX_SYMBOL_STR(parport_announce_port) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5e3a3912, __VMLINUX_SYMBOL_STR(parport_irq_handler) },
	{ 0xb51272d8, __VMLINUX_SYMBOL_STR(parport_register_port) },
	{ 0xc80d867a, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x5b4dc5df, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x99b16f8c, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf3d1c2f6, __VMLINUX_SYMBOL_STR(parport_remove_port) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

