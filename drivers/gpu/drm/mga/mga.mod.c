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
	{ 0xfd941c91, __VMLINUX_SYMBOL_STR(drm_agp_release) },
	{ 0xdf4498b5, __VMLINUX_SYMBOL_STR(drm_agp_acquire) },
	{ 0x2b80fe5d, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x122e6e41, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3239addb, __VMLINUX_SYMBOL_STR(drm_legacy_addbufs_agp) },
	{ 0xef845809, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x5516c112, __VMLINUX_SYMBOL_STR(drm_legacy_ioremapfree) },
	{ 0x85a0490e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x76ef2c6f, __VMLINUX_SYMBOL_STR(drm_legacy_addmap) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4fb2e30d, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0xa36eb58d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x29f304ff, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x650f5e42, __VMLINUX_SYMBOL_STR(drm_agp_free) },
	{ 0x8315815f, __VMLINUX_SYMBOL_STR(drm_legacy_getsarea) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x62ce946e, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xfc18d734, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x7928f952, __VMLINUX_SYMBOL_STR(drm_agp_bind) },
	{ 0xd9a159e0, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xc0a9524d, __VMLINUX_SYMBOL_STR(drm_legacy_ioremap) },
	{ 0x73084c52, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf93740a2, __VMLINUX_SYMBOL_STR(drm_agp_unbind) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x9f780635, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0x42140015, __VMLINUX_SYMBOL_STR(drm_legacy_addbufs_pci) },
	{ 0x4a9e240, __VMLINUX_SYMBOL_STR(drm_agp_alloc) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1226bdb6, __VMLINUX_SYMBOL_STR(ex_handler_default) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x28b69f3a, __VMLINUX_SYMBOL_STR(drm_legacy_mmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x69085b4c, __VMLINUX_SYMBOL_STR(drm_agp_enable) },
	{ 0x4ee7ee5d, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0x6bb049bc, __VMLINUX_SYMBOL_STR(drm_agp_info) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x349954aa, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x12eba8c9, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

