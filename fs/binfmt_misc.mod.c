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
	{ 0xee37fd97, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xbab3718a, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xc555582b, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xa829779e, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x35ec0c61, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x61529fca, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x57b8c8eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x5463b690, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x9f82f95f, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xe7ba84ab, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0xe2eb76cd, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xa27560b1, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xa64cc0f6, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x64bbc288, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7e32222a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x3a7bca5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x555f6938, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd45cc6ca, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x403c6172, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xe850234d, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x258ad3aa, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xbdf1007a, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e43f67f, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xcd6460ab, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x550ef40f, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x107fe66c, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0xb2c48afc, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xf646bcb8, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x97e1896c, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x2eaf6609, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xd2e28ee2, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xd90b1c69, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x8364a9e8, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0xf221c518, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x49934248, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

