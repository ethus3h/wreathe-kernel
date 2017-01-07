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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbdf1007a, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x1f4ceaf0, __VMLINUX_SYMBOL_STR(efivar_entry_delete) },
	{ 0xf062576b, __VMLINUX_SYMBOL_STR(ucs2_utf8size) },
	{ 0xc9b1a61f, __VMLINUX_SYMBOL_STR(simple_lookup) },
	{ 0x97f025de, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xaeba09a9, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x555f6938, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xe850234d, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x184b8d6, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf5466760, __VMLINUX_SYMBOL_STR(uuid_is_valid) },
	{ 0x550ef40f, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x2b9f3c2e, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2b24190e, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xf4063edd, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xee37fd97, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe377dc55, __VMLINUX_SYMBOL_STR(efivar_entry_remove) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcfe2da21, __VMLINUX_SYMBOL_STR(efivar_entry_size) },
	{ 0x62291f72, __VMLINUX_SYMBOL_STR(efivar_init) },
	{ 0xceb6aef4, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x7e32222a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x3a7bca5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x90032b30, __VMLINUX_SYMBOL_STR(efi) },
	{ 0x9c4f4a21, __VMLINUX_SYMBOL_STR(efivar_entry_set_get_size) },
	{ 0xcd363c06, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8240757e, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xe0d29fa8, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0x7673cb7, __VMLINUX_SYMBOL_STR(efivar_entry_get) },
	{ 0x4c12a3a8, __VMLINUX_SYMBOL_STR(efivar_variable_is_removable) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x23c11b74, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0xdac87e28, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x57b8c8eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x5463b690, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4fbae6a6, __VMLINUX_SYMBOL_STR(uuid_le_to_bin) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16d8e5a3, __VMLINUX_SYMBOL_STR(efivar_entry_add) },
	{ 0x55458984, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0x4d6d25d9, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xc555582b, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xb3e1c699, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0xa829779e, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xa27560b1, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe25c998c, __VMLINUX_SYMBOL_STR(__efivar_entry_iter) },
	{ 0x3e43f67f, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x9f82f95f, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc42c12d4, __VMLINUX_SYMBOL_STR(efivars_kobject) },
	{ 0xeec2c7cf, __VMLINUX_SYMBOL_STR(ucs2_as_utf8) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

