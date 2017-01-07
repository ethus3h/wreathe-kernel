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
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbce2e932, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc1119a63, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2a7288e, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x970bb909, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x74fcf555, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x9f878db6, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x16f8065e, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xb21ba07d, __VMLINUX_SYMBOL_STR(pi_unregister_driver) },
	{ 0x121bdac6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x481a66ef, __VMLINUX_SYMBOL_STR(pi_release) },
	{ 0xed1ddba3, __VMLINUX_SYMBOL_STR(pi_init) },
	{ 0x4267110a, __VMLINUX_SYMBOL_STR(pi_register_driver) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x72d47a61, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x76021823, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xa1662fa5, __VMLINUX_SYMBOL_STR(pi_do_claimed) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4d024da2, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x3c0a124e, __VMLINUX_SYMBOL_STR(pi_read_block) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa9db2579, __VMLINUX_SYMBOL_STR(pi_disconnect) },
	{ 0x4aef68c7, __VMLINUX_SYMBOL_STR(pi_write_block) },
	{ 0x71e9c8ed, __VMLINUX_SYMBOL_STR(pi_write_regr) },
	{ 0xb3e6f041, __VMLINUX_SYMBOL_STR(pi_connect) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x50889221, __VMLINUX_SYMBOL_STR(pi_read_regr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=paride";

