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
	{ 0x3a13d830, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0xa286e059, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x1ba4f323, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x5bd61082, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x12243095, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x34ceba49, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0xf01135bc, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x41a7a1bb, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0xe9fd88db, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0xe763c7b4, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x3a88f278, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x912f4a4d, __VMLINUX_SYMBOL_STR(snd_hda_gen_fix_pin_power) },
	{ 0x27cd82c1, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x77af63e1, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x33bb7d8d, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x7352a878, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xa1f93f01, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x47c48cf5, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0x1101cd42, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x30d5502b, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5c23e9f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x499af318, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xa280804f, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x3c371e91, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0x9bde059f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x49d48cc4, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xcfb5300b, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xe2111c7f, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x22adc754, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-core,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");
