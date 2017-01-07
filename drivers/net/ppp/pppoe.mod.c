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
	{ 0x326ec07b, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xb758258f, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x7946b8bc, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x6f7bb7f9, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x345507da, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xba6d0987, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xeaa3d3ab, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x92e277c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xaad670ff, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xed11113e, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x5ca3f49f, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xf404cf61, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x7df7e32a, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x2d735ff0, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xd2095847, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xab9528a2, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x8336bc73, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x373efc93, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc23d8c4, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb2989195, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x30df9d26, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xd4b69b8, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x33e5ace6, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x661d549f, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4900dacc, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x9abd39, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x4d4d7ce0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xaaee12de, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x5662abb9, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xc3be3308, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf9a76acd, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x76d63a1e, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xdc6f607, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x7c68f546, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbdc745f8, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xc136c169, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x60d461b7, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x25e2755b, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xdcfe16f3, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc25e63a7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xc2330fed, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xda730379, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";

