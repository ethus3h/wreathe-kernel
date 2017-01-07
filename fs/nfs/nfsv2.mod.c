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
	{ 0xa85a545, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0xffff56eb, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x69b3b6b6, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0xee40e798, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0x86cd6a81, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0xb3baad7f, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0xe4cb0799, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x4a097c60, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0x90758c49, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x2ded27, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x4c013300, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0x4440c33d, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0x85dc21f8, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0xd0449e3a, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0xea106d64, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x5cd8cd7b, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0xe8c9e8f8, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0xc2f25102, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0x803bdb05, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0xb2f6b10, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0xc0f5c444, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x306bcdba, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xc1ff1023, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x6ad30cc8, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0xfa1ea79f, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1907ca1e, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0xd0b047b7, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x26884ff7, __VMLINUX_SYMBOL_STR(nfs_alloc_fhandle) },
	{ 0x86743362, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x2f4b3be6, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x8f9619cb, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6a6f668a, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x1425137f, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0xd1aed4b6, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x455aa52c, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbc81a875, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0x9b805e66, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0xde2ce35a, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x20c88fdf, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xb3eafce7, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x73b8423, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x8fc8dc1a, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x676bc93a, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0x459b51ac, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0xc24210a7, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x69b3c427, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0x552cf892, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,lockd";

