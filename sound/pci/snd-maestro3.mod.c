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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x451c3729, __VMLINUX_SYMBOL_STR(snd_ac97_read) },
	{ 0x8a92626b, __VMLINUX_SYMBOL_STR(snd_ac97_write) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xfe15ac18, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe83d2ee4, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x575b7ed8, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xbce2e932, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x561f9186, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xfa02217d, __VMLINUX_SYMBOL_STR(snd_ac97_update) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe6718f32, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x6f7d21e2, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x5a11becc, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6c59ed0c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x8dba7e1f, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xc7d09050, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x55ba5894, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa68c9498, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc15decce, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x24358fe0, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xbee3384, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x7194f13c, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd9cd552f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x61339424, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x3592c428, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-ac97-codec,snd";

MODULE_ALIAS("pci:v0000125Dd00001988sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001989sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001990sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001992sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001998sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001999sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Asv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Bsv*sd*bc04sc01i*");
