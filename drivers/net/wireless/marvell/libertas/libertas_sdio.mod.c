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
	{ 0x6b4f787f, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x5731edb9, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc6b915d1, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3dc3b0d, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0x7f84364b, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xd13f81d5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xba009a35, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc388224a, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0x31a1bd82, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x163251d9, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x1c82e24d, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x909b52a0, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x33f370a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xcf61d14d, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x7ca93141, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xe52d961c, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0x69148d3f, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0xb30d8307, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x936097d7, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xac8e19bc, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x801d0580, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0xec26f1b7, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x40913e01, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x835389d0, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0x2868169b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1d32a7a, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xde65752, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf77bbf88, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x1f0c5e1e, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0xa3214878, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x1b512562, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0xcb073097, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb9309eba, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe9ba46fe, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x3cd74bb0, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2169477c, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xa9013ad0, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x774207b9, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xbf79678d, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");
