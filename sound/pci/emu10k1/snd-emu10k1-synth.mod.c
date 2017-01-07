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
	{ 0xfb9e202, __VMLINUX_SYMBOL_STR(snd_emux_new) },
	{ 0xbac5afd3, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_alloc) },
	{ 0xafd6324, __VMLINUX_SYMBOL_STR(snd_emux_register) },
	{ 0x4c4601f6, __VMLINUX_SYMBOL_STR(snd_emu10k1_memblk_map) },
	{ 0x1c053d8, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_alloc) },
	{ 0x2c10b03, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0x414fa9dc, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_bzero) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7048a97b, __VMLINUX_SYMBOL_STR(snd_emux_free) },
	{ 0xfd44fd8f, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_write) },
	{ 0xa8ea4250, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_free) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefaa882e, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_free) },
	{ 0x2daf82ac, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_copy_from_user) },
	{ 0x57351e98, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_read) },
	{ 0xb2b43e2c, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";

