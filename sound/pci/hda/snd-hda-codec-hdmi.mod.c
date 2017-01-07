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
	{ 0x29b6f0c9, __VMLINUX_SYMBOL_STR(snd_hdac_i915_set_bclk) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x90b52a7a, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable) },
	{ 0xa5dc6b78, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0xa286e059, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x62706926, __VMLINUX_SYMBOL_STR(snd_hdac_i915_exit) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0xd78489c7, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xddb541f6, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xe4e07754, __VMLINUX_SYMBOL_STR(snd_hdac_print_channel_allocation) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0xb641acc2, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeda3a721, __VMLINUX_SYMBOL_STR(snd_print_pcm_bits) },
	{ 0x491eb1d3, __VMLINUX_SYMBOL_STR(snd_hdac_get_sub_nodes) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xab757cde, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0x5af4e201, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x67bfe791, __VMLINUX_SYMBOL_STR(snd_hdac_spk_to_chmap) },
	{ 0xb47192c5, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_unassign) },
	{ 0xe763c7b4, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x53d88ef3, __VMLINUX_SYMBOL_STR(snd_hdac_check_power_state) },
	{ 0x3dc873e7, __VMLINUX_SYMBOL_STR(snd_hdac_acomp_get_eld) },
	{ 0x1822e1b8, __VMLINUX_SYMBOL_STR(snd_hda_pin_sense) },
	{ 0xfd952d4e, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x6afeefb6, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x4c7ec4b6, __VMLINUX_SYMBOL_STR(snd_hdac_get_ch_alloc_from_ca) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x856a5328, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0xf8afae92, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0x6f7d21e2, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xfa834ef1, __VMLINUX_SYMBOL_STR(snd_hdac_setup_channel_mapping) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3bd544c2, __VMLINUX_SYMBOL_STR(snd_hdac_get_active_channels) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2132222a, __VMLINUX_SYMBOL_STR(snd_hdac_power_down_pm) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37183a68, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x58159f47, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_assign) },
	{ 0x6a709e3e, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x4d962e91, __VMLINUX_SYMBOL_STR(snd_hdac_register_chmap_ops) },
	{ 0x33bb7d8d, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x396b86be, __VMLINUX_SYMBOL_STR(snd_hda_spdif_out_of_nid) },
	{ 0xa471467c, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x1101cd42, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x30d5502b, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x80f69fb6, __VMLINUX_SYMBOL_STR(snd_hdac_i915_init) },
	{ 0x7fe25ece, __VMLINUX_SYMBOL_STR(snd_hdac_i915_register_notifier) },
	{ 0x1c504aa8, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0x2718102, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x109716ec, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x5c23e9f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbd0b9bc1, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_widgets) },
	{ 0x77c754a8, __VMLINUX_SYMBOL_STR(snd_hdac_chmap_to_spk_mask) },
	{ 0x4408bd7e, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0x11afb2b6, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0xbef01412, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctl) },
	{ 0x54ab5af, __VMLINUX_SYMBOL_STR(snd_hdac_query_supported_pcm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xce8945c6, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x37b31c4f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0xb573cacc, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get_from_tag) },
	{ 0x499af318, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xa280804f, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9bde059f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xa9bc3d04, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0xc57f6a0, __VMLINUX_SYMBOL_STR(snd_hdac_channel_allocation) },
	{ 0x3cd78ea5, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0xd0cec2ab, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5cee92e7, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_dirty_all) },
	{ 0x3817129b, __VMLINUX_SYMBOL_STR(snd_hdac_add_chmap_ctls) },
	{ 0x8eb5e2d, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0xd28b6d8, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xe3a3c6c4, __VMLINUX_SYMBOL_STR(snd_hdac_sync_audio_rate) },
	{ 0xda70aaf5, __VMLINUX_SYMBOL_STR(snd_hdac_power_up_pm) },
	{ 0x584af7e8, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd,snd-hda-codec,snd-pcm";

MODULE_ALIAS("hdaudio:v1002793Cr*a01*");
MODULE_ALIAS("hdaudio:v10027919r*a01*");
MODULE_ALIAS("hdaudio:v1002791Ar*a01*");
MODULE_ALIAS("hdaudio:v1002AA01r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v10DE0002r*a01*");
MODULE_ALIAS("hdaudio:v10DE0003r*a01*");
MODULE_ALIAS("hdaudio:v10DE0005r*a01*");
MODULE_ALIAS("hdaudio:v10DE0006r*a01*");
MODULE_ALIAS("hdaudio:v10DE0007r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0067r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE8001r*a01*");
MODULE_ALIAS("hdaudio:v11069F80r*a01*");
MODULE_ALIAS("hdaudio:v11069F81r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");
