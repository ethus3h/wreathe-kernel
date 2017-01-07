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
	{ 0xd9d2bb03, __VMLINUX_SYMBOL_STR(snd_usbmidi_disconnect) },
	{ 0xa286a234, __VMLINUX_SYMBOL_STR(snd_pcm_format_name) },
	{ 0x5f8f2579, __VMLINUX_SYMBOL_STR(mutex_destroy) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xfe15ac18, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xb641acc2, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0xb4db2e2, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x625fbef7, __VMLINUX_SYMBOL_STR(snd_pcm_stop_xrun) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf505758a, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xbf61fabe, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbbd93b7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb2af19e1, __VMLINUX_SYMBOL_STR(snd_usbmidi_resume) },
	{ 0x9db1ac3, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7403f419, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x575b7ed8, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd3384cdf, __VMLINUX_SYMBOL_STR(usb_get_descriptor) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbce2e932, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb9638db4, __VMLINUX_SYMBOL_STR(snd_pcm_rate_to_rate_bit) },
	{ 0x561f9186, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x3dcbfcfd, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6afeefb6, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x452004ea, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe6718f32, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x41798845, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x6f7d21e2, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x678606bc, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xe206aef9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0xcb58ca46, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd24fc7a5, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xc27d097d, __VMLINUX_SYMBOL_STR(snd_pcm_new_stream) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x9dbf81a3, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0x6c59ed0c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xb4d86a13, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0xb9d02d40, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x7bbcbda3, __VMLINUX_SYMBOL_STR(__snd_usbmidi_create) },
	{ 0x55ba5894, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xbed43a41, __VMLINUX_SYMBOL_STR(snd_usbmidi_suspend) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe277c0f5, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb739e4db, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x582629de, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0x58c6e477, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0x59f2e276, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x5c23e9f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x75b5e10, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x123f82f3, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0xa68c9498, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xc0180a99, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x6355f65c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x7194f13c, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd9cd552f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xa9bc3d04, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x4f010e22, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x61339424, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xf0a7514a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x8005bb5e, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x929aee48, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xcbd83cc7, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x9d2ca2a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x8a404497, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x9b6c452, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usbmidi-lib,snd-pcm,snd,snd-hwdep";

MODULE_ALIAS("usb:v0403pB8D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F0Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pB832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0850d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08AEd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F0d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F5d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp0990d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0499p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1004d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p100Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p104Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p104Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1053d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1054d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1509d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p002Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p003Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0074d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00C4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00E6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0108d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p012Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v06F8pB000d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1011d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1021d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1031d010dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p1033d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2003d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2008d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p200Dd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p2030d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2031d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2080d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2081d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v07CFp6801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp6802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FDp0001d*dc*dsc02dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0944p0200d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0944p0201d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v09E8p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09E8p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep2040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep4040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0012d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0013d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0014d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p0002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p4661d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v133Ep0815d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13E5p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p752Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F38p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4752p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7104p2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0DBAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DBAp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0283d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v200Cp100Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1686p00DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc03ip*in*");
MODULE_ALIAS("usb:v0D8Cp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc01ip*in*");
