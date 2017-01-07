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
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd78489c7, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xfe15ac18, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xb641acc2, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x575b7ed8, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6718f32, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x2107ab3, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0xe206aef9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6c59ed0c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x58c6e477, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0x5c23e9f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3796bdcc, __VMLINUX_SYMBOL_STR(snd_pcm_format_little_endian) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd9cd552f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x61339424, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xf0a7514a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x929aee48, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";

