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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5815a143, __VMLINUX_SYMBOL_STR(sdio_run_irqs) },
	{ 0xafbcb85f, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xeef3b8b4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x41e903d1, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3da1edff, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x38d0ecd, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xef5005a3, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1afb4436, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xe144d256, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x2a84bd4d, __VMLINUX_SYMBOL_STR(mmc_gpio_get_cd) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1b512562, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0xc4e720cd, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcadb76f8, __VMLINUX_SYMBOL_STR(mmc_regulator_get_supply) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb9309eba, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x88938bf2, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xaa309cf, __VMLINUX_SYMBOL_STR(synchronize_hardirq) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xea71ecbf, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x9e26cec4, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x4fc8752e, __VMLINUX_SYMBOL_STR(mmc_retune_timer_stop) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,led-class";

