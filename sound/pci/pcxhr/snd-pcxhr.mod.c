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
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd78489c7, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xfe15ac18, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xdb0efe2f, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb641acc2, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4c221bf8, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa29c73d0, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbce2e932, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x561f9186, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe6718f32, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x2107ab3, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5a11becc, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6c59ed0c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xb9d02d40, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x8dba7e1f, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x55ba5894, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5c23e9f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x56aeb527, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xaf34f789, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x55ba43d7, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd951db90, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x518f1b80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xbee3384, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x7194f13c, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xd9cd552f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x61339424, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x929aee48, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm";

MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B321bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B401bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B601bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B701bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B421bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B621bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B721bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D321bc*sc*i*");
