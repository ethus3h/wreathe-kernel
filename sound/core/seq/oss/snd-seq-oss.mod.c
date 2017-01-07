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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0x205395a0, __VMLINUX_SYMBOL_STR(snd_midi_event_encode_byte) },
	{ 0x7c3ea5e1, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_write_poll) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x737d91f5, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7746bb9b, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0x2c10b03, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x79794472, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0x7b8699eb, __VMLINUX_SYMBOL_STR(snd_seq_event_port_detach) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3061c52d, __VMLINUX_SYMBOL_STR(snd_use_lock_sync_helper) },
	{ 0x8df3789f, __VMLINUX_SYMBOL_STR(snd_oss_info_register) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x614705ff, __VMLINUX_SYMBOL_STR(snd_midi_event_no_status) },
	{ 0x77506672, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xef8fa3d2, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1a5ce976, __VMLINUX_SYMBOL_STR(snd_register_oss_device) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfa8d98c3, __VMLINUX_SYMBOL_STR(snd_unregister_oss_device) },
	{ 0xa0acf27a, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_enqueue_blocking) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x350dfe45, __VMLINUX_SYMBOL_STR(snd_seq_root) },
	{ 0xce8945c6, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9f1a78c4, __VMLINUX_SYMBOL_STR(snd_info_create_module_entry) },
	{ 0xb8e448a0, __VMLINUX_SYMBOL_STR(snd_seq_set_queue_tempo) },
	{ 0x80c7f7b8, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x8f134482, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb2b43e2c, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
	{ 0xcac0a3be, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_enqueue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq,snd-seq-midi-event,snd-seq-device,snd";

