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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x78825660, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xa5dc6b78, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0xaba9e57b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0xa286e059, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0xff941a6c, __VMLINUX_SYMBOL_STR(snd_hda_get_default_vref) },
	{ 0xf7a317b, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x5bd61082, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0xcc772de8, __VMLINUX_SYMBOL_STR(snd_hda_sync_vmaster_hook) },
	{ 0x1f0a263d, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0x57199b2a, __VMLINUX_SYMBOL_STR(__snd_hda_add_vmaster) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0x3336edf6, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x8d30619a, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x8c5787e1, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0xf01135bc, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe118de5d, __VMLINUX_SYMBOL_STR(snd_pcm_2_1_chmaps) },
	{ 0x62205234, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe763c7b4, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xc73fbf9c, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_caps) },
	{ 0x4ec66b77, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xfd952d4e, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x3a88f278, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x33e0f7dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x874fdc38, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0xbbc8a7f2, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_list) },
	{ 0x2107ab3, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0x3abbea7, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_prepare) },
	{ 0x80884d9f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_cleanup) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6a709e3e, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x73d7b34, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_switch_get) },
	{ 0xf24adea9, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0x833f3925, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init) },
	{ 0x77af63e1, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x33bb7d8d, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xa1f93f01, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0xa471467c, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x47c48cf5, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0x8d00cf19, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x6a8bb3f7, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_open) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe5d0847, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_index) },
	{ 0x1c504aa8, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0x2718102, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0x109716ec, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xc2099d16, __VMLINUX_SYMBOL_STR(snd_hda_correct_pin_ctl) },
	{ 0xee87b386, __VMLINUX_SYMBOL_STR(snd_hda_add_imux_item) },
	{ 0x5b2bd7a7, __VMLINUX_SYMBOL_STR(snd_hda_get_pin_label) },
	{ 0x50c3c9ac, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0x5ccbba7d, __VMLINUX_SYMBOL_STR(snd_ctl_sync_vmaster) },
	{ 0x4408bd7e, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0x11afb2b6, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2f85d966, __VMLINUX_SYMBOL_STR(snd_hda_add_vmaster_hook) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37b31c4f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x499af318, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xa280804f, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x9bde059f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xc4b02508, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x3cd78ea5, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe252f538, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_switch_put) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd399247, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0xcfb5300b, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x27cfd2e5, __VMLINUX_SYMBOL_STR(hda_get_autocfg_input_label) },
	{ 0xd28b6d8, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xbb67aa8c, __VMLINUX_SYMBOL_STR(snd_hda_set_vmaster_tlv) },
	{ 0x491208ff, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init_stereo) },
	{ 0x584af7e8, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xf3ade2ba, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x8c753c12, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_update) },
	{ 0x735308e8, __VMLINUX_SYMBOL_STR(snd_hda_apply_verbs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v00000201r*a01*");
