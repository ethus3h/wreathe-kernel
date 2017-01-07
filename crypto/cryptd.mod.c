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
	{ 0x5a7fd102, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4524365a, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2cac5436, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xcf6b2b25, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xbca6bf67, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x1a49044a, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0xfe91b07b, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xac6f5cba, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x1a97dda3, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0x2e0dd353, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x215090c1, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x84c508ce, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6cbf46cb, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x103c79a5, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x94b7770a, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0x5a98bad8, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x60ac5359, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xd5ff5635, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x441f449e, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6c93aed, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x66fbee95, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xb8ffe624, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x5f492359, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x12d8d441, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5e0eef3a, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x45fbfa1c, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xf59d5b0, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x49119bb3, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

