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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3a13d830, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x78825660, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0xaba9e57b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0xa286e059, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x1ba4f323, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x5bd61082, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0xef4b3dc3, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0x12243095, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0xaaa39250, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_put) },
	{ 0x3336edf6, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x34ceba49, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x5af4e201, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0xf01135bc, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x141271bf, __VMLINUX_SYMBOL_STR(acpi_dev_found) },
	{ 0xe9fd88db, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0xe763c7b4, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x4bf49ed6, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x4ec66b77, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x36b8e655, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_name) },
	{ 0xfd952d4e, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x3a88f278, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9160c3ac, __VMLINUX_SYMBOL_STR(snd_hda_gen_hp_automute) },
	{ 0xa40318c, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x33e0f7dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0x856a5328, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0x4fcc1c5c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_get) },
	{ 0xc33e56c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_info) },
	{ 0x9d29fb5b, __VMLINUX_SYMBOL_STR(snd_hda_gen_path_power_filter) },
	{ 0x27cd82c1, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x77af63e1, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x36b5d97d, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_gating_jack) },
	{ 0x33bb7d8d, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x7352a878, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xa1f93f01, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x47c48cf5, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0x1101cd42, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x654c082e, __VMLINUX_SYMBOL_STR(snd_hdac_override_parm) },
	{ 0xc12c837f, __VMLINUX_SYMBOL_STR(snd_hda_bind_sw) },
	{ 0x9f088027, __VMLINUX_SYMBOL_STR(snd_hda_pick_pin_fixup) },
	{ 0x790df80a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x109716ec, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xaacc05fc, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7db7269e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x499af318, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xa280804f, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3c371e91, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0x9bde059f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x49d48cc4, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xd399247, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0xcfb5300b, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xd28b6d8, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xe2111c7f, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xf3ade2ba, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0x23ca75d5, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x22adc754, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core";

MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
