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
	{ 0x9943fbe, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xac8e19bc, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x40922d61, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xdca9015f, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xe9ba46fe, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x450b9670, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x1dabebf, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x2804048a, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9409a19, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x81038d73, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7294ac08, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x1d32a7a, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xb3ded4e, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0xab4dc65a, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x70609c02, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xfb910888, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2ec75aeb, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa6fbd6a5, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xa9013ad0, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xba009a35, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xd13f81d5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x31f51872, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0xc1f1802, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x773955da, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x75235a07, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x245acf4c, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xc396e1a2, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x6b4f787f, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x774207b9, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x5731edb9, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x3850cea2, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3cd74bb0, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");
