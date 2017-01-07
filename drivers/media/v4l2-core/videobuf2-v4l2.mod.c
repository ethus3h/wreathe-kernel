#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59776590, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x773b2bc6, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbacf3ba2, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0xcef19d7a, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0xd5b32a90, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0x28e54c8f, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa9d076d1, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0xb02b1cee, __VMLINUX_SYMBOL_STR(vb2_core_poll) },
	{ 0x9e69f076, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0xef787df2, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x3fc92c94, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbb23ea8c, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd0af0e43, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x6e9ecc00, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x34619592, __VMLINUX_SYMBOL_STR(vb2_write) },
	{ 0xb7bc8f9c, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x46534472, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x8cf89197, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0x672514fa, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xb1cc63bf, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0xa290f7f6, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0x7371b85, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev";

