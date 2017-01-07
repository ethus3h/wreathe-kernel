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
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x88a8052c, __VMLINUX_SYMBOL_STR(snd_opl3_timer_new) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfe15ac18, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xdc86949d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_ratnums) },
	{ 0xdfb89d24, __VMLINUX_SYMBOL_STR(snd_opl3_hwdep_new) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe5fd7b8c, __VMLINUX_SYMBOL_STR(snd_mpu401_uart_new) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7403f419, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x575b7ed8, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbce2e932, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xc0fec227, __VMLINUX_SYMBOL_STR(snd_mpu401_uart_interrupt) },
	{ 0x561f9186, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe6718f32, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x2107ab3, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0x6f7d21e2, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x5a11becc, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6c59ed0c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xcc7d24aa, __VMLINUX_SYMBOL_STR(__gameport_register_port) },
	{ 0xb9d02d40, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x8dba7e1f, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x55ba5894, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5c23e9f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x3cc8e6ef, __VMLINUX_SYMBOL_STR(gameport_unregister_port) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1d5c1629, __VMLINUX_SYMBOL_STR(snd_opl3_create) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xa61aa028, __VMLINUX_SYMBOL_STR(snd_pcm_format_unsigned) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xc0180a99, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xbee3384, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x7194f13c, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xd9cd552f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x61339424, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x929aee48, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x2856423c, __VMLINUX_SYMBOL_STR(gameport_set_phys) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport";

MODULE_ALIAS("pci:v0000125Dd00001969sv*sd*bc*sc*i*");
