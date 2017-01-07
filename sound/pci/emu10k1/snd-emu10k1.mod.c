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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x122e6e41, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x451c3729, __VMLINUX_SYMBOL_STR(snd_ac97_read) },
	{ 0xf174001a, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_noresample) },
	{ 0x6b954705, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7debba83, __VMLINUX_SYMBOL_STR(__snd_util_memblk_new) },
	{ 0xfe15ac18, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xdb0efe2f, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0xddb541f6, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb641acc2, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x3714a436, __VMLINUX_SYMBOL_STR(snd_util_memhdr_free) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa1ce7a66, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages) },
	{ 0x4d26d9a5, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0xaee26943, __VMLINUX_SYMBOL_STR(__snd_util_mem_free) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa29c73d0, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x9a9f570f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x87278024, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9b62038f, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf995798a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x575b7ed8, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbce2e932, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2af0d06c, __VMLINUX_SYMBOL_STR(snd_pcm_sgbuf_ops_page) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x561f9186, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xfa02217d, __VMLINUX_SYMBOL_STR(snd_ac97_update) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6afeefb6, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x6a61e1ed, __VMLINUX_SYMBOL_STR(snd_timer_new) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdc823ee1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xe6718f32, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x6f7d21e2, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x3971b4df, __VMLINUX_SYMBOL_STR(snd_ecards_limit) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37996ab5, __VMLINUX_SYMBOL_STR(snd_cards) },
	{ 0x9dbf81a3, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0x5a11becc, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6c59ed0c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x7e32222a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xc332f0ea, __VMLINUX_SYMBOL_STR(snd_util_memhdr_new) },
	{ 0x3a7bca5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xb9d02d40, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xda7dbc7e, __VMLINUX_SYMBOL_STR(__snd_util_mem_alloc) },
	{ 0x2027d68b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8dba7e1f, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xc7d09050, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x55ba5894, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x48f8fc97, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x7b69c146, __VMLINUX_SYMBOL_STR(snd_ctl_remove_id) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5c23e9f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x56aeb527, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0x76dd109b, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xa68c9498, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc15decce, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0xe143e7f, __VMLINUX_SYMBOL_STR(snd_ctl_remove) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x24358fe0, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0xf48e5168, __VMLINUX_SYMBOL_STR(snd_ac97_update_bits) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x85e9b91e, __VMLINUX_SYMBOL_STR(snd_timer_interrupt) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xc0180a99, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xbee3384, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x7194f13c, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd9cd552f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xad7433a7, __VMLINUX_SYMBOL_STR(snd_seq_device_new) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x61339424, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x3592c428, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x929aee48, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x59475704, __VMLINUX_SYMBOL_STR(snd_ac97_write_cache) },
	{ 0x986fa89b, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xea71ecbf, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9e05e02f, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-ac97-codec,snd-util-mem,snd,snd-rawmidi,snd-timer,snd-hwdep,snd-seq-device";

MODULE_ALIAS("pci:v00001102d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000008sv*sd*bc*sc*i*");