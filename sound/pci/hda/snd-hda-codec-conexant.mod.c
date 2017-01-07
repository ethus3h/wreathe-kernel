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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3a13d830, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x78825660, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0xaba9e57b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x1ba4f323, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x5bd61082, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x12243095, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x34ceba49, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0xf01135bc, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x141271bf, __VMLINUX_SYMBOL_STR(acpi_dev_found) },
	{ 0xe9fd88db, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x1dae9236, __VMLINUX_SYMBOL_STR(snd_hda_get_path_from_idx) },
	{ 0xfd952d4e, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0xa40318c, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x33e0f7dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x856a5328, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0xf8afae92, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0x6819c9be, __VMLINUX_SYMBOL_STR(snd_hda_activate_path) },
	{ 0x27cd82c1, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x77af63e1, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x33bb7d8d, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x7352a878, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xb9d02d40, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xa1f93f01, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x109716ec, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x499af318, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x8fcbdd1a, __VMLINUX_SYMBOL_STR(snd_hda_add_new_path) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9bde059f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x49d48cc4, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x29096c7f, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_read_raw) },
	{ 0xcfb5300b, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xf59e2bcd, __VMLINUX_SYMBOL_STR(snd_hda_gen_mic_autoswitch) },
	{ 0xe2111c7f, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xf3ade2ba, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");
