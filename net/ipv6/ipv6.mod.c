#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59776590, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6cc42aee, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x18589338, __VMLINUX_SYMBOL_STR(secpath_dup) },
	{ 0xbc4217d4, __VMLINUX_SYMBOL_STR(inet_peer_base_init) },
	{ 0xc25e63a7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6ef03441, __VMLINUX_SYMBOL_STR(xfrm_state_register_afinfo) },
	{ 0xd05f2737, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7ee89b2e, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0xc96c635d, __VMLINUX_SYMBOL_STR(neigh_proc_dointvec_jiffies) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x26df432d, __VMLINUX_SYMBOL_STR(__sock_cmsg_send) },
	{ 0x122e6e41, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x878ab3ce, __VMLINUX_SYMBOL_STR(sysctl_tcp_adv_win_scale) },
	{ 0xa9959b06, __VMLINUX_SYMBOL_STR(sk_prot_clear_portaddr_nulls) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x463ce3ad, __VMLINUX_SYMBOL_STR(tcp_v4_connect) },
	{ 0x76d63a1e, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xb67d04d8, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x26e76fb8, __VMLINUX_SYMBOL_STR(sysctl_udp_wmem_min) },
	{ 0x4d6d96c7, __VMLINUX_SYMBOL_STR(tcp_splice_read) },
	{ 0x120a8492, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x55bd85a4, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0x58aaed0, __VMLINUX_SYMBOL_STR(ping_init_sock) },
	{ 0x9ecef3f0, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0xb6337e, __VMLINUX_SYMBOL_STR(ping_rcv) },
	{ 0xc9a98d68, __VMLINUX_SYMBOL_STR(tcp_fetch_timewait_stamp) },
	{ 0x35406240, __VMLINUX_SYMBOL_STR(inet_listen) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x8e977dde, __VMLINUX_SYMBOL_STR(udplite_prot) },
	{ 0x16317109, __VMLINUX_SYMBOL_STR(xfrm_output) },
	{ 0xa6fbd6a5, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x649d878e, __VMLINUX_SYMBOL_STR(tcp_prot) },
	{ 0x706ff367, __VMLINUX_SYMBOL_STR(xfrm_policy_register_afinfo) },
	{ 0x66d804b1, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x3c33237a, __VMLINUX_SYMBOL_STR(get_task_pid) },
	{ 0x65ccb6f0, __VMLINUX_SYMBOL_STR(call_netevent_notifiers) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2a08825c, __VMLINUX_SYMBOL_STR(tcp_poll) },
	{ 0x6c44bc15, __VMLINUX_SYMBOL_STR(neigh_proc_dointvec) },
	{ 0xa0ebd14c, __VMLINUX_SYMBOL_STR(sysctl_tcp_mem) },
	{ 0xd0a2847c, __VMLINUX_SYMBOL_STR(sha_init) },
	{ 0x8da4a163, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0xa0436e98, __VMLINUX_SYMBOL_STR(in6addr_linklocal_allnodes) },
	{ 0x23afdf8a, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x18d03f7d, __VMLINUX_SYMBOL_STR(neigh_sysctl_register) },
	{ 0xd493fd7, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x557e6477, __VMLINUX_SYMBOL_STR(ping_close) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd8543bf9, __VMLINUX_SYMBOL_STR(__dev_get_by_flags) },
	{ 0x2bc3157e, __VMLINUX_SYMBOL_STR(__skb_gro_checksum_complete) },
	{ 0x5f098b2a, __VMLINUX_SYMBOL_STR(in6addr_interfacelocal_allrouters) },
	{ 0x84879f6b, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0x6370234b, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x8ee47996, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xf908b849, __VMLINUX_SYMBOL_STR(xfrm_audit_state_notfound_simple) },
	{ 0x8ed5412e, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf7415dac, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x14465942, __VMLINUX_SYMBOL_STR(__skb_checksum_complete_head) },
	{ 0x9e472f5f, __VMLINUX_SYMBOL_STR(snmp_fold_field) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xc096f9dc, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x51a70969, __VMLINUX_SYMBOL_STR(tcp_done) },
	{ 0x39991865, __VMLINUX_SYMBOL_STR(icmp_global_allow) },
	{ 0x7ec54283, __VMLINUX_SYMBOL_STR(rtnetlink_put_metrics) },
	{ 0x7248acc8, __VMLINUX_SYMBOL_STR(tcp_rcv_state_process) },
	{ 0x9943fbe, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xc872fd85, __VMLINUX_SYMBOL_STR(in6addr_interfacelocal_allnodes) },
	{ 0x66446135, __VMLINUX_SYMBOL_STR(udp_lib_rehash) },
	{ 0xc23d8c4, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8507c383, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xb48d7004, __VMLINUX_SYMBOL_STR(tcp_ca_openreq_child) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xe4196f71, __VMLINUX_SYMBOL_STR(tcp_v4_conn_request) },
	{ 0x24fe1159, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0x4dac3d60, __VMLINUX_SYMBOL_STR(tcp_sendpage) },
	{ 0x412c1952, __VMLINUX_SYMBOL_STR(pid_nr_ns) },
	{ 0x7cc514ab, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xacc40ab3, __VMLINUX_SYMBOL_STR(udp_push_pending_frames) },
	{ 0xccc2b5bd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa380e806, __VMLINUX_SYMBOL_STR(ping_common_sendmsg) },
	{ 0x783d8153, __VMLINUX_SYMBOL_STR(nf_getsockopt) },
	{ 0x5870445b, __VMLINUX_SYMBOL_STR(raw_seq_start) },
	{ 0x25e2755b, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x9e396d86, __VMLINUX_SYMBOL_STR(tcp_syn_ack_timeout) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2c177045, __VMLINUX_SYMBOL_STR(__rtnl_register) },
	{ 0x6fb9c0e, __VMLINUX_SYMBOL_STR(ping_get_port) },
	{ 0x661d549f, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x1d004626, __VMLINUX_SYMBOL_STR(rtnl_notify) },
	{ 0x4f45ba8d, __VMLINUX_SYMBOL_STR(neigh_table_init) },
	{ 0x4708f65d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x5662abb9, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xa0ff74d6, __VMLINUX_SYMBOL_STR(udp_memory_allocated) },
	{ 0xaafe909c, __VMLINUX_SYMBOL_STR(inet_peer_xrlim_allow) },
	{ 0x42e421f3, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get_rcu) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x64a2681e, __VMLINUX_SYMBOL_STR(pneigh_enqueue) },
	{ 0x3bad7086, __VMLINUX_SYMBOL_STR(tcp_v4_destroy_sock) },
	{ 0x4d4d7ce0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x6fa25e34, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x2aca1b18, __VMLINUX_SYMBOL_STR(__skb_free_datagram_locked) },
	{ 0xefe508d1, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xc5beaca4, __VMLINUX_SYMBOL_STR(pingv6_ops) },
	{ 0x2ded27, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xb5dbd16a, __VMLINUX_SYMBOL_STR(__percpu_counter_sum) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5fae4fa8, __VMLINUX_SYMBOL_STR(udp_lib_setsockopt) },
	{ 0x1c734d7, __VMLINUX_SYMBOL_STR(xfrm_dst_ifdown) },
	{ 0xc1258b79, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x89f73e71, __VMLINUX_SYMBOL_STR(sk_set_peek_off) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf098b21, __VMLINUX_SYMBOL_STR(__dst_destroy_metrics_generic) },
	{ 0xad59246, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x69b1d4db, __VMLINUX_SYMBOL_STR(tcp_v4_mtu_reduced) },
	{ 0xfa8d0ecf, __VMLINUX_SYMBOL_STR(neigh_changeaddr) },
	{ 0x81ef0093, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x4a67f1b1, __VMLINUX_SYMBOL_STR(ping_seq_fops) },
	{ 0xa3bc7ffd, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x28cc8f7e, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xd88d6b0e, __VMLINUX_SYMBOL_STR(xfrm_state_unregister_afinfo) },
	{ 0x1f31871e, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x54e0c2c3, __VMLINUX_SYMBOL_STR(raw_unhash_sk) },
	{ 0x9ea9f26e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x9fa28196, __VMLINUX_SYMBOL_STR(ping_unhash) },
	{ 0x35910f72, __VMLINUX_SYMBOL_STR(tcp_orphan_count) },
	{ 0x2a6d5b4e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x17b6aef5, __VMLINUX_SYMBOL_STR(compat_nf_getsockopt) },
	{ 0x9a506514, __VMLINUX_SYMBOL_STR(dst_alloc) },
	{ 0x4dc4d7d6, __VMLINUX_SYMBOL_STR(tcp_check_req) },
	{ 0x47b6075f, __VMLINUX_SYMBOL_STR(neigh_parms_release) },
	{ 0xe2039390, __VMLINUX_SYMBOL_STR(__neigh_create) },
	{ 0xf10a9468, __VMLINUX_SYMBOL_STR(tcp_release_cb) },
	{ 0xe4c9eb38, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0x9741e714, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x4a8bdef5, __VMLINUX_SYMBOL_STR(__dst_free) },
	{ 0x713fc331, __VMLINUX_SYMBOL_STR(sock_queue_err_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x3feeaf71, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xd68140c1, __VMLINUX_SYMBOL_STR(ping_bind) },
	{ 0x110b2ed1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x54262dd1, __VMLINUX_SYMBOL_STR(ipv6_select_ident) },
	{ 0xb25319be, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x329deee3, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0x4818ecca, __VMLINUX_SYMBOL_STR(ping_err) },
	{ 0x6bb354fe, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xf9a4bae, __VMLINUX_SYMBOL_STR(ping_seq_next) },
	{ 0x5f0a89e7, __VMLINUX_SYMBOL_STR(tcp_twsk_destructor) },
	{ 0xbc1c3cd5, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0xb0e7d96e, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x29b78cfe, __VMLINUX_SYMBOL_STR(nf_register_afinfo) },
	{ 0xaba86a19, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x200b9afb, __VMLINUX_SYMBOL_STR(dev_mc_add) },
	{ 0xb47cca30, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x73b49816, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xede6dfb6, __VMLINUX_SYMBOL_STR(nf_setsockopt) },
	{ 0xa0e329bd, __VMLINUX_SYMBOL_STR(xfrm_input_register_afinfo) },
	{ 0x808bf7a6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf27e326d, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xbe1b1b7b, __VMLINUX_SYMBOL_STR(tcp_sendmsg) },
	{ 0x81346dc6, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x326ec07b, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe38df4db, __VMLINUX_SYMBOL_STR(tcp_twsk_unique) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc8b28ba0, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0xde2e811, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x506ca1e9, __VMLINUX_SYMBOL_STR(tcp_parse_options) },
	{ 0xa108eb4d, __VMLINUX_SYMBOL_STR(sysctl_optmem_max) },
	{ 0x6f1bf786, __VMLINUX_SYMBOL_STR(inetpeer_invalidate_tree) },
	{ 0x3da1edff, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x30df9d26, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x7d287136, __VMLINUX_SYMBOL_STR(neigh_proc_dointvec_ms_jiffies) },
	{ 0x49e4b503, __VMLINUX_SYMBOL_STR(ping_proc_unregister) },
	{ 0xdcec5d3d, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4040197b, __VMLINUX_SYMBOL_STR(neigh_direct_output) },
	{ 0x41b9db23, __VMLINUX_SYMBOL_STR(neigh_app_ns) },
	{ 0xaad670ff, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8dc77209, __VMLINUX_SYMBOL_STR(tcp_rtx_synack) },
	{ 0x267ed31, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xe690b8d8, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0xd86cd219, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xf1917db5, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xd4d6056d, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x566b1221, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x8d551bef, __VMLINUX_SYMBOL_STR(sysctl_tcp_rmem) },
	{ 0x6b38f984, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xd0d3174b, __VMLINUX_SYMBOL_STR(dev_loopback_xmit) },
	{ 0xaa011f7d, __VMLINUX_SYMBOL_STR(__sock_queue_rcv_skb) },
	{ 0xbc4aa2eb, __VMLINUX_SYMBOL_STR(tcp_create_openreq_child) },
	{ 0x4cc3454b, __VMLINUX_SYMBOL_STR(inet_sendpage) },
	{ 0xd2b86ec, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xdc6f607, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xa81b3059, __VMLINUX_SYMBOL_STR(udp_sendmsg) },
	{ 0x4b9dfb04, __VMLINUX_SYMBOL_STR(_raw_spin_trylock_bh) },
	{ 0xba03179f, __VMLINUX_SYMBOL_STR(tcp_make_synack) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x88176ab4, __VMLINUX_SYMBOL_STR(neigh_resolve_output) },
	{ 0x80683f85, __VMLINUX_SYMBOL_STR(single_open_net) },
	{ 0xb52cae2d, __VMLINUX_SYMBOL_STR(tcp_simple_retransmit) },
	{ 0x337cdb3e, __VMLINUX_SYMBOL_STR(skb_append_datato_frags) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xc1b20e9f, __VMLINUX_SYMBOL_STR(udp_flush_pending_frames) },
	{ 0x9abd39, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x6d294e43, __VMLINUX_SYMBOL_STR(clock_t_to_jiffies) },
	{ 0x8310f0a9, __VMLINUX_SYMBOL_STR(tcp_rcv_established) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1250c7e1, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6d9e6bfb, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xe44171fd, __VMLINUX_SYMBOL_STR(ping_seq_stop) },
	{ 0xda730379, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x1a0718c7, __VMLINUX_SYMBOL_STR(__skb_recv_datagram) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x9ed2d311, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x55e8d502, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0xb3a2565a, __VMLINUX_SYMBOL_STR(udp_gro_receive) },
	{ 0x509908e8, __VMLINUX_SYMBOL_STR(tcp_connect) },
	{ 0xa80fbece, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xbea5ff1e, __VMLINUX_SYMBOL_STR(static_key_initialized) },
	{ 0x426be541, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0xa87aabcd, __VMLINUX_SYMBOL_STR(dst_discard_out) },
	{ 0x25d8633a, __VMLINUX_SYMBOL_STR(inet6_protos) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3f6eb4bf, __VMLINUX_SYMBOL_STR(skb_kill_datagram) },
	{ 0x95e6babf, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8433ded7, __VMLINUX_SYMBOL_STR(neigh_connected_output) },
	{ 0xd1ea59aa, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0xcb580327, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x345507da, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x761ddd02, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0xc9634df9, __VMLINUX_SYMBOL_STR(in6addr_linklocal_allrouters) },
	{ 0x38a9f7c5, __VMLINUX_SYMBOL_STR(in6addr_loopback) },
	{ 0x9fe09c18, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x468366c9, __VMLINUX_SYMBOL_STR(tcp_set_state) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbb980ea1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xac6e1d12, __VMLINUX_SYMBOL_STR(__xfrm_route_forward) },
	{ 0x92e277c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe66f9aa6, __VMLINUX_SYMBOL_STR(ping_getfrag) },
	{ 0xc2805b31, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x683e4fc9, __VMLINUX_SYMBOL_STR(skb_store_bits) },
	{ 0x437a0d6d, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0xdcfe16f3, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc12fb683, __VMLINUX_SYMBOL_STR(ipv4_specific) },
	{ 0x1952a0af, __VMLINUX_SYMBOL_STR(tcp_ioctl) },
	{ 0x90c00be9, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xc2a3c590, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xc0edb098, __VMLINUX_SYMBOL_STR(raw_seq_open) },
	{ 0x5ca3f49f, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xf1a4b036, __VMLINUX_SYMBOL_STR(tcp_death_row) },
	{ 0xf404cf61, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x4179b40c, __VMLINUX_SYMBOL_STR(tcp_req_err) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0xde6151db, __VMLINUX_SYMBOL_STR(tcp_memory_allocated) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x121168aa, __VMLINUX_SYMBOL_STR(udp_prot) },
	{ 0x55bdc49c, __VMLINUX_SYMBOL_STR(rtnl_af_unregister) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xc62d0736, __VMLINUX_SYMBOL_STR(lock_sock_fast) },
	{ 0x7d4cd930, __VMLINUX_SYMBOL_STR(inet6_unregister_icmp_sender) },
	{ 0x5fdab4ef, __VMLINUX_SYMBOL_STR(tcp_timewait_state_process) },
	{ 0x1f18e4c0, __VMLINUX_SYMBOL_STR(inet6_hash_connect) },
	{ 0xeec2ce3d, __VMLINUX_SYMBOL_STR(tcp_v4_do_rcv) },
	{ 0x580b77ef, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x3acd8a76, __VMLINUX_SYMBOL_STR(sk_dst_check) },
	{ 0x417ceea1, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x8544b66d, __VMLINUX_SYMBOL_STR(ipv6_rcv_saddr_equal) },
	{ 0x5f16170e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xeeaebaec, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0x7b37e9ba, __VMLINUX_SYMBOL_STR(raw_hash_sk) },
	{ 0xd0eb05d, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x4b6bdd3b, __VMLINUX_SYMBOL_STR(inet6_hash) },
	{ 0xe686efdf, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_drop_and_put) },
	{ 0xb150d931, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0x8bd52407, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x71828a66, __VMLINUX_SYMBOL_STR(proc_dostring) },
	{ 0xc3ea6a15, __VMLINUX_SYMBOL_STR(reuseport_select_sock) },
	{ 0x4f228fb9, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xb67dd373, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0x40973662, __VMLINUX_SYMBOL_STR(sysctl_udp_mem) },
	{ 0x520c5134, __VMLINUX_SYMBOL_STR(udp_proc_register) },
	{ 0xc673b8d2, __VMLINUX_SYMBOL_STR(udp6_csum_init) },
	{ 0xd67a7d28, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0x16c896a, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0x245e4130, __VMLINUX_SYMBOL_STR(tcp_conn_request) },
	{ 0xa2993903, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0x2e5a265c, __VMLINUX_SYMBOL_STR(ip6_find_1stfragopt) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x15d15170, __VMLINUX_SYMBOL_STR(inet_stream_ops) },
	{ 0x444c8a0d, __VMLINUX_SYMBOL_STR(cookie_ecn_ok) },
	{ 0x4188d439, __VMLINUX_SYMBOL_STR(neigh_rand_reach_time) },
	{ 0x8798f74f, __VMLINUX_SYMBOL_STR(dst_cow_metrics_generic) },
	{ 0x6403e338, __VMLINUX_SYMBOL_STR(tcp_memory_pressure) },
	{ 0xf0078209, __VMLINUX_SYMBOL_STR(rtnl_unicast) },
	{ 0xf033b983, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x77506672, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xad19aac2, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0xebc9daab, __VMLINUX_SYMBOL_STR(nf_unregister_afinfo) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfaa6319b, __VMLINUX_SYMBOL_STR(neigh_table_clear) },
	{ 0x6d47fb46, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xcbb9098b, __VMLINUX_SYMBOL_STR(put_pid_ns) },
	{ 0x8336bc73, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xf98b471e, __VMLINUX_SYMBOL_STR(rtnl_set_sk_err) },
	{ 0x47e86ca9, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0x325bed91, __VMLINUX_SYMBOL_STR(inet_dgram_ops) },
	{ 0x830a9f98, __VMLINUX_SYMBOL_STR(tcp_get_cookie_sock) },
	{ 0x865d263c, __VMLINUX_SYMBOL_STR(tcp_sockets_allocated) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb78573c3, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x9918f059, __VMLINUX_SYMBOL_STR(udp_poll) },
	{ 0x3897f60e, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x6f95c59b, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0xe01fcbdb, __VMLINUX_SYMBOL_STR(udp_lib_getsockopt) },
	{ 0xbf145237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x351b2267, __VMLINUX_SYMBOL_STR(udp_gro_complete) },
	{ 0xfa0cefde, __VMLINUX_SYMBOL_STR(inet_twsk_purge) },
	{ 0x19717ef7, __VMLINUX_SYMBOL_STR(tcp_sync_mss) },
	{ 0x754fe134, __VMLINUX_SYMBOL_STR(udp_lib_get_port) },
	{ 0xeeafda7a, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xed46ac0c, __VMLINUX_SYMBOL_STR(tcp_getsockopt) },
	{ 0x1b96f8d7, __VMLINUX_SYMBOL_STR(ping_seq_start) },
	{ 0x8939537d, __VMLINUX_SYMBOL_STR(rtnl_af_register) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x606d0b09, __VMLINUX_SYMBOL_STR(secure_tcpv6_sequence_number) },
	{ 0x68b8e516, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xeaa3d3ab, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x861cce5c, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xdb655991, __VMLINUX_SYMBOL_STR(__ip6_local_out) },
	{ 0x5e15189, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xa28c7bc1, __VMLINUX_SYMBOL_STR(inet_reqsk_alloc) },
	{ 0x416bde73, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x9f9d8024, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2d735ff0, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x83a3ce89, __VMLINUX_SYMBOL_STR(pneigh_lookup) },
	{ 0xf29e867, __VMLINUX_SYMBOL_STR(tcp_init_sock) },
	{ 0x1565f4af, __VMLINUX_SYMBOL_STR(tcp_proc_unregister) },
	{ 0x46413d19, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0x3814c9ed, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x2f1ad397, __VMLINUX_SYMBOL_STR(tcp_v4_syn_recv_sock) },
	{ 0x652ce9aa, __VMLINUX_SYMBOL_STR(nla_memcmp) },
	{ 0x175c676, __VMLINUX_SYMBOL_STR(tcp_seq_open) },
	{ 0xf1107e1e, __VMLINUX_SYMBOL_STR(ipv6_proxy_select_ident) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf8efb3d2, __VMLINUX_SYMBOL_STR(__get_hash_from_flowi6) },
	{ 0xdd8fd498, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x771e4dbb, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0x79b17074, __VMLINUX_SYMBOL_STR(__neigh_set_probe_once) },
	{ 0x2b982237, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x9b92b83a, __VMLINUX_SYMBOL_STR(tcp_proc_register) },
	{ 0xf1ea6420, __VMLINUX_SYMBOL_STR(xfrm_policy_unregister_afinfo) },
	{ 0xa1a08378, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xc2317ac4, __VMLINUX_SYMBOL_STR(tcp_abort) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x5bc6655e, __VMLINUX_SYMBOL_STR(inet_sock_destruct) },
	{ 0xf8708a4d, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0xa43fb900, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x66cf8316, __VMLINUX_SYMBOL_STR(xfrm_lookup_route) },
	{ 0x3ca9a86c, __VMLINUX_SYMBOL_STR(tcp_disconnect) },
	{ 0x4af5e89c, __VMLINUX_SYMBOL_STR(inet_ehash_nolisten) },
	{ 0xcc75b646, __VMLINUX_SYMBOL_STR(put_cmsg) },
	{ 0xd6ac909e, __VMLINUX_SYMBOL_STR(inet6_del_offload) },
	{ 0xbb58620c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x5494c2ad, __VMLINUX_SYMBOL_STR(__rtnl_af_unregister) },
	{ 0xc3be3308, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb905c66, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0x2b27c257, __VMLINUX_SYMBOL_STR(snmp_get_cpu_field) },
	{ 0x7f6fe1d0, __VMLINUX_SYMBOL_STR(tcp_initialize_rcv_mss) },
	{ 0xc7856a3d, __VMLINUX_SYMBOL_STR(inet6addr_notifier_call_chain) },
	{ 0xf313da4e, __VMLINUX_SYMBOL_STR(sha_transform) },
	{ 0x415ff384, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x6f2637ab, __VMLINUX_SYMBOL_STR(__pneigh_lookup) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5239994d, __VMLINUX_SYMBOL_STR(udp_lib_unhash) },
	{ 0x280f9f14, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x1ff8f46d, __VMLINUX_SYMBOL_STR(neigh_parms_alloc) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x139352a2, __VMLINUX_SYMBOL_STR(compat_mc_setsockopt) },
	{ 0x60d461b7, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x3269ac39, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x670068ec, __VMLINUX_SYMBOL_STR(xfrm_input_unregister_afinfo) },
	{ 0x2c8b9b5f, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x6c702af7, __VMLINUX_SYMBOL_STR(sysctl_udp_rmem_min) },
	{ 0xd6050685, __VMLINUX_SYMBOL_STR(inet6_register_icmp_sender) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8131decd, __VMLINUX_SYMBOL_STR(xfrm_local_error) },
	{ 0xe2ccbfc8, __VMLINUX_SYMBOL_STR(init_pid_ns) },
	{ 0xc953ef05, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x2d6a6395, __VMLINUX_SYMBOL_STR(neigh_sysctl_unregister) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xccd52c85, __VMLINUX_SYMBOL_STR(neigh_update) },
	{ 0xac445e7b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x19c0870e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x72ae374c, __VMLINUX_SYMBOL_STR(udp_seq_open) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb06db583, __VMLINUX_SYMBOL_STR(dst_destroy) },
	{ 0x9f48f773, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4409a6c0, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x49b07aec, __VMLINUX_SYMBOL_STR(tcp_select_initial_window) },
	{ 0x1b0293ac, __VMLINUX_SYMBOL_STR(sock_dequeue_err_skb) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x3a0ae130, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x586eab9c, __VMLINUX_SYMBOL_STR(tcp_enter_memory_pressure) },
	{ 0xba4e2b6f, __VMLINUX_SYMBOL_STR(skb_copy_and_csum_bits) },
	{ 0xa4349028, __VMLINUX_SYMBOL_STR(sk_mc_loop) },
	{ 0xf0c56013, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3840adec, __VMLINUX_SYMBOL_STR(dev_get_iflink) },
	{ 0x5d538228, __VMLINUX_SYMBOL_STR(ping_proc_register) },
	{ 0x6beb9575, __VMLINUX_SYMBOL_STR(tcp_prequeue) },
	{ 0x83b1c5b0, __VMLINUX_SYMBOL_STR(skb_copy_and_csum_datagram_msg) },
	{ 0xb2989195, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x304895bc, __VMLINUX_SYMBOL_STR(proc_dointvec_ms_jiffies) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xd5272284, __VMLINUX_SYMBOL_STR(tcp_setsockopt) },
	{ 0xbdc745f8, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x71cdc4fc, __VMLINUX_SYMBOL_STR(neigh_ifdown) },
	{ 0x132f40b3, __VMLINUX_SYMBOL_STR(__fib6_flush_trees) },
	{ 0x780e8337, __VMLINUX_SYMBOL_STR(xfrm_state_check_expire) },
	{ 0x6b640864, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0xe0e3b7c4, __VMLINUX_SYMBOL_STR(tcp_child_process) },
	{ 0x2a6358b4, __VMLINUX_SYMBOL_STR(tcp_close) },
	{ 0xff0345d6, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0x13340cc3, __VMLINUX_SYMBOL_STR(inet_sk_rx_dst_set) },
	{ 0xc592eee, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x579e0bf5, __VMLINUX_SYMBOL_STR(rtnl_unregister_all) },
	{ 0xcbb890c6, __VMLINUX_SYMBOL_STR(raw_seq_stop) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x6acafd5b, __VMLINUX_SYMBOL_STR(cookie_timestamp_decode) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x9e87d21a, __VMLINUX_SYMBOL_STR(__ip4_datagram_connect) },
	{ 0x8e6c0314, __VMLINUX_SYMBOL_STR(tcp_shutdown) },
	{ 0xc4401463, __VMLINUX_SYMBOL_STR(skb_segment) },
	{ 0xb6275b2e, __VMLINUX_SYMBOL_STR(ping_recvmsg) },
	{ 0xe5766fae, __VMLINUX_SYMBOL_STR(tcp_v4_send_check) },
	{ 0xa347ded2, __VMLINUX_SYMBOL_STR(raw_seq_next) },
	{ 0x56c663e8, __VMLINUX_SYMBOL_STR(task_active_pid_ns) },
	{ 0x82b0fd87, __VMLINUX_SYMBOL_STR(sock_prot_inuse_get) },
	{ 0xed9ce7ef, __VMLINUX_SYMBOL_STR(inet_getpeer) },
	{ 0x4392da5c, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x7eafb0d0, __VMLINUX_SYMBOL_STR(rtnl_put_cacheinfo) },
	{ 0x17854800, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0x9a14e8d7, __VMLINUX_SYMBOL_STR(compat_nf_setsockopt) },
	{ 0xa9168676, __VMLINUX_SYMBOL_STR(xmit_recursion) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4f79dd6e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x4ee5f562, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd2095847, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x4e70165f, __VMLINUX_SYMBOL_STR(inet6_add_offload) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4900dacc, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xfebe8d85, __VMLINUX_SYMBOL_STR(udp_proc_unregister) },
	{ 0x5da4f7f2, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x2d82bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd2e00625, __VMLINUX_SYMBOL_STR(inet_putpeer) },
	{ 0xfe054d40, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf9a76acd, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x6371ecc9, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xfc02b7ad, __VMLINUX_SYMBOL_STR(sysctl_tcp_wmem) },
	{ 0x69528d1f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7b5e5a17, __VMLINUX_SYMBOL_STR(sk_page_frag_refill) },
	{ 0x39488a71, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x98314fd2, __VMLINUX_SYMBOL_STR(tcp_ca_get_key_by_name) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xfae7c81a, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf41ee96d, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x71bd77db, __VMLINUX_SYMBOL_STR(tcp_recvmsg) },
	{ 0x16847df7, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x87558f6e, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xc9f77ab9, __VMLINUX_SYMBOL_STR(xfrm_user_policy) },
	{ 0x8aafef, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x44e7b1ca, __VMLINUX_SYMBOL_STR(compat_tcp_getsockopt) },
	{ 0xb88679d9, __VMLINUX_SYMBOL_STR(compat_tcp_setsockopt) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x8cfbb69e, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0xc6a35336, __VMLINUX_SYMBOL_STR(ping_hash) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xfb9aec27, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x3c3d4427, __VMLINUX_SYMBOL_STR(ping_queue_rcv_skb) },
	{ 0x6d2b1994, __VMLINUX_SYMBOL_STR(compat_mc_getsockopt) },
	{ 0x4411c503, __VMLINUX_SYMBOL_STR(prandom_seed) },
	{ 0x3f34ea47, __VMLINUX_SYMBOL_STR(skb_udp_tunnel_segment) },
	{ 0xa89f4c0c, __VMLINUX_SYMBOL_STR(xfrm_inner_extract_output) },
	{ 0xb9e8e2cc, __VMLINUX_SYMBOL_STR(in6addr_sitelocal_allrouters) },
	{ 0x31b31f5c, __VMLINUX_SYMBOL_STR(csum_partial_copy_nocheck) },
	{ 0xa803d920, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xbde8487c, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xe2cc96f7, __VMLINUX_SYMBOL_STR(__do_once_done) },
	{ 0xb9c189bf, __VMLINUX_SYMBOL_STR(single_release_net) },
	{ 0x200b2041, __VMLINUX_SYMBOL_STR(in6addr_any) },
	{ 0x3e010d9e, __VMLINUX_SYMBOL_STR(inet_recvmsg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
