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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3a13d830, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0xaba9e57b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0xa286e059, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0xf7a317b, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x1ba4f323, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x5bd61082, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x12243095, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x3336edf6, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xab757cde, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x34ceba49, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x8c5787e1, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0x5af4e201, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0xf01135bc, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x41a7a1bb, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0x62205234, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x4ec66b77, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x36b8e655, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_name) },
	{ 0x874fdc38, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x27cd82c1, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x77af63e1, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x33bb7d8d, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x7352a878, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xb9d02d40, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x1101cd42, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x109716ec, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x499af318, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xa280804f, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x9bde059f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xc4b02508, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x49d48cc4, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x29096c7f, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_read_raw) },
	{ 0xd399247, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0xd28b6d8, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xe2111c7f, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x584af7e8, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xf3ade2ba, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0x22adc754, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");
