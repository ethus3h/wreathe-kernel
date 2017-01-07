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
	{ 0xb1c3444f, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xbdf1007a, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x7213546b, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xb9a7dddf, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xd3020482, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x184b8d6, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa6d80de3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x8a45c1be, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xa52e2ac8, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x87512ae9, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0xedf77cf2, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xb326f5f7, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0x55ed72f3, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0xc508c0f5, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf22f18d9, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x25f02a48, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x728c7c5, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0xc57151fe, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xa8a04c01, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xdb3be743, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x91265d36, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x57b8c8eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x3c77036b, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x9b18a53f, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x76329728, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x9dd9286f, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x94fcce8b, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xa829779e, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa5d74871, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x46dab0e, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x9f82f95f, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xd32fd4b, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

