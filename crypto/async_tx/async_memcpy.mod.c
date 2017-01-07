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
	{ 0xfa3866f6, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0x350fd4ef, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x96191d58, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x887e1c6, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x64cca3c0, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx";

