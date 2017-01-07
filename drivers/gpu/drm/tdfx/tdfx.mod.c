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
	{ 0xef845809, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x85a0490e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x29f304ff, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x73084c52, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x28b69f3a, __VMLINUX_SYMBOL_STR(drm_legacy_mmap) },
	{ 0x4ee7ee5d, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0x349954aa, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x12eba8c9, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

