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
	{ 0xac6f5cba, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x103c79a5, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xf668d6f3, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x2ff94008, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xcf6b2b25, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xe2dfbdff, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xc427283, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x5a7fd102, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x215090c1, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x6c93aed, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x60ac5359, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

