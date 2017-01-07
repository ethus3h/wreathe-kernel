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
	{ 0x2b80fe5d, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xef845809, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x5516c112, __VMLINUX_SYMBOL_STR(drm_legacy_ioremapfree) },
	{ 0x85a0490e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbe32f0f4, __VMLINUX_SYMBOL_STR(drm_legacy_idlelock_take) },
	{ 0x29f304ff, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xe18470c3, __VMLINUX_SYMBOL_STR(drm_legacy_idlelock_release) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xc0a9524d, __VMLINUX_SYMBOL_STR(drm_legacy_ioremap) },
	{ 0x73084c52, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9f780635, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0xde14f2ab, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0x28b69f3a, __VMLINUX_SYMBOL_STR(drm_legacy_mmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x307973a9, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x5b56860c, __VMLINUX_SYMBOL_STR(vm_munmap) },
	{ 0x4ee7ee5d, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x349954aa, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x12eba8c9, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";
