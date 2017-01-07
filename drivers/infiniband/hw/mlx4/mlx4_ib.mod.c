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
	{ 0x54943c39, __VMLINUX_SYMBOL_STR(mlx4_get_parav_qkey) },
	{ 0x2736039e, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb216d565, __VMLINUX_SYMBOL_STR(mlx4_mr_enable) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6fcc837e, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0xe8c0a6fc, __VMLINUX_SYMBOL_STR(mlx4_get_default_counter_index) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x159e13fb, __VMLINUX_SYMBOL_STR(mlx4_counter_alloc) },
	{ 0x9f3fa799, __VMLINUX_SYMBOL_STR(mlx4_pd_free) },
	{ 0x6b954705, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9235e039, __VMLINUX_SYMBOL_STR(mlx4_srq_alloc) },
	{ 0xdc75a525, __VMLINUX_SYMBOL_STR(mlx4_qp_reserve_range) },
	{ 0x4be68d5b, __VMLINUX_SYMBOL_STR(mlx4_srq_free) },
	{ 0xfb488789, __VMLINUX_SYMBOL_STR(mlx4_qp_alloc) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9cbe736b, __VMLINUX_SYMBOL_STR(mlx4_INIT_PORT) },
	{ 0x2c8e26c, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x22357e25, __VMLINUX_SYMBOL_STR(mlx4_sync_pkey_table) },
	{ 0xcfe2d71c, __VMLINUX_SYMBOL_STR(rdma_port_get_link_layer) },
	{ 0x93158f10, __VMLINUX_SYMBOL_STR(mlx4_hw_rule_sz) },
	{ 0xf24c7867, __VMLINUX_SYMBOL_STR(mlx4_srq_lookup) },
	{ 0xb0d634e8, __VMLINUX_SYMBOL_STR(mlx4_fmr_free) },
	{ 0xe7ba5888, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0xb9082558, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0x885e9626, __VMLINUX_SYMBOL_STR(mlx4_register_interface) },
	{ 0xb581290c, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x46b48203, __VMLINUX_SYMBOL_STR(mlx4_vf_set_enable_smi_admin) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3148a87, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xd69e0447, __VMLINUX_SYMBOL_STR(mlx4_phys_to_slave_port) },
	{ 0x9eaf4194, __VMLINUX_SYMBOL_STR(dev_base_lock) },
	{ 0x1c609ae9, __VMLINUX_SYMBOL_STR(mlx4_mr_rereg_mem_cleanup) },
	{ 0x42e421f3, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get_rcu) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd0b65096, __VMLINUX_SYMBOL_STR(mlx4_vf_get_enable_smi_admin) },
	{ 0x96afc0bf, __VMLINUX_SYMBOL_STR(mlx4_mr_hw_put_mpt) },
	{ 0x7f311eae, __VMLINUX_SYMBOL_STR(mlx4_db_alloc) },
	{ 0x63a7c28c, __VMLINUX_SYMBOL_STR(bitmap_find_free_region) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xab757cde, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x2915fffd, __VMLINUX_SYMBOL_STR(mlx4_tunnel_steer_add) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37578152, __VMLINUX_SYMBOL_STR(mlx4_mw_free) },
	{ 0x41f77353, __VMLINUX_SYMBOL_STR(mlx4_gen_pkey_eqe) },
	{ 0xf1851c43, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0xd4108a7d, __VMLINUX_SYMBOL_STR(mlx4_cq_modify) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x29a8c3f4, __VMLINUX_SYMBOL_STR(mlx4_buf_free) },
	{ 0x509c7acf, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x9d4d5259, __VMLINUX_SYMBOL_STR(mlx4_cq_resize) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x49bd3ff9, __VMLINUX_SYMBOL_STR(ib_get_cached_gid) },
	{ 0x7fe32873, __VMLINUX_SYMBOL_STR(rb_replace_node) },
	{ 0x59af16ca, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0x163c6607, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0x9315a767, __VMLINUX_SYMBOL_STR(mlx4_qp_free) },
	{ 0xf995798a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x77e7c759, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xbc45e73e, __VMLINUX_SYMBOL_STR(ib_alloc_device) },
	{ 0x149b37d7, __VMLINUX_SYMBOL_STR(mlx4_get_roce_gid_from_slave) },
	{ 0x88455fdf, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0x3dff7f2b, __VMLINUX_SYMBOL_STR(mlx4_srq_arm) },
	{ 0xfa8bcc67, __VMLINUX_SYMBOL_STR(ib_dealloc_device) },
	{ 0xda044a62, __VMLINUX_SYMBOL_STR(mlx4_qp_remove) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfd3a475e, __VMLINUX_SYMBOL_STR(mlx4_get_counter_stats) },
	{ 0x12dbbbb3, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xee94d078, __VMLINUX_SYMBOL_STR(mlx4_mw_enable) },
	{ 0x2efac974, __VMLINUX_SYMBOL_STR(mlx4_mtt_init) },
	{ 0x8270aaae, __VMLINUX_SYMBOL_STR(mlx4_set_admin_guid) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x9ddad1cc, __VMLINUX_SYMBOL_STR(mlx4_register_vlan) },
	{ 0xf086df58, __VMLINUX_SYMBOL_STR(mlx4_mw_alloc) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0xc1a25dc3, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0xe9e6a723, __VMLINUX_SYMBOL_STR(mlx4_mr_hw_get_mpt) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd4d6056d, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xe1fa372, __VMLINUX_SYMBOL_STR(mlx4_mr_hw_change_pd) },
	{ 0x1bfaefda, __VMLINUX_SYMBOL_STR(mlx4_assign_eq) },
	{ 0x1dde330, __VMLINUX_SYMBOL_STR(mlx4_vf_smi_enabled) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc05e355f, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0x2fa01a5b, __VMLINUX_SYMBOL_STR(mlx4_get_eqs_per_port) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x8820d717, __VMLINUX_SYMBOL_STR(mlx4_config_roce_v2_port) },
	{ 0x57d8205e, __VMLINUX_SYMBOL_STR(mlx4_qp_modify) },
	{ 0x88f9deb7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa450807c, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x62d57915, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x1bdbf4fa, __VMLINUX_SYMBOL_STR(mlx4_buf_alloc) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb0751b5a, __VMLINUX_SYMBOL_STR(mlx4_fmr_alloc) },
	{ 0xa9ad37d7, __VMLINUX_SYMBOL_STR(mlx4_xrcd_alloc) },
	{ 0x3e439df8, __VMLINUX_SYMBOL_STR(mlx4_mr_free) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf33584b3, __VMLINUX_SYMBOL_STR(mlx4_gen_guid_change_eqe) },
	{ 0x58f3ca5a, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0xa136b688, __VMLINUX_SYMBOL_STR(mlx4_uar_alloc) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x4ca37707, __VMLINUX_SYMBOL_STR(mlx4_map_sw_to_hw_steering_mode) },
	{ 0x128c614c, __VMLINUX_SYMBOL_STR(mlx4_map_phys_fmr) },
	{ 0x68f76730, __VMLINUX_SYMBOL_STR(mlx4_gen_port_state_change_eqe) },
	{ 0xbaa5bdf0, __VMLINUX_SYMBOL_STR(mlx4_counter_free) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x322e4c5f, __VMLINUX_SYMBOL_STR(mlx4_FLOW_STEERING_IB_UC_QP_RANGE) },
	{ 0x9f12eb1d, __VMLINUX_SYMBOL_STR(mlx4_alloc_cmd_mailbox) },
	{ 0xc62fb5a2, __VMLINUX_SYMBOL_STR(ib_ud_ip4_csum) },
	{ 0xcd8a78db, __VMLINUX_SYMBOL_STR(ib_get_cached_pkey) },
	{ 0x5f16170e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x48818ceb, __VMLINUX_SYMBOL_STR(mlx4_CLOSE_PORT) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2da83c40, __VMLINUX_SYMBOL_STR(mlx4_cq_free) },
	{ 0x665c85a4, __VMLINUX_SYMBOL_STR(ib_ud_header_init) },
	{ 0x287d1e73, __VMLINUX_SYMBOL_STR(ib_sa_unregister_client) },
	{ 0xacca0c04, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x67bc629, __VMLINUX_SYMBOL_STR(mlx4_get_slave_default_vlan) },
	{ 0x4cbce186, __VMLINUX_SYMBOL_STR(mlx4_is_slave_active) },
	{ 0x553b3207, __VMLINUX_SYMBOL_STR(ib_dispatch_event) },
	{ 0x76bc7194, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0x7e29f023, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xefa486fe, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x6fa19585, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0x95c2aea4, __VMLINUX_SYMBOL_STR(mlx4_is_eq_shared) },
	{ 0xda0d50ec, __VMLINUX_SYMBOL_STR(ib_sa_cancel_query) },
	{ 0xec9e088, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0x3250c783, __VMLINUX_SYMBOL_STR(ib_sa_guid_info_rec_query) },
	{ 0x20a6d615, __VMLINUX_SYMBOL_STR(set_and_calc_slave_port_state) },
	{ 0x871dbca9, __VMLINUX_SYMBOL_STR(mlx4_multicast_attach) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x418be2db, __VMLINUX_SYMBOL_STR(mlx4_mr_alloc) },
	{ 0x9dde3b1d, __VMLINUX_SYMBOL_STR(mlx4_get_devlink_port) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x93189f09, __VMLINUX_SYMBOL_STR(mlx4_get_slave_port_state) },
	{ 0x9e8e0e3a, __VMLINUX_SYMBOL_STR(mlx4_db_free) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0x5ff2143e, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xc8bcd69d, __VMLINUX_SYMBOL_STR(__mlx4_cmd) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x387b840d, __VMLINUX_SYMBOL_STR(mlx4_qp_query) },
	{ 0xeb81266a, __VMLINUX_SYMBOL_STR(mlx4_xrcd_free) },
	{ 0x4564f559, __VMLINUX_SYMBOL_STR(ib_register_device) },
	{ 0xd384610e, __VMLINUX_SYMBOL_STR(mlx4_uar_free) },
	{ 0xa1e46b5d, __VMLINUX_SYMBOL_STR(mlx4_mtt_cleanup) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x574c2e74, __VMLINUX_SYMBOL_STR(bitmap_release_region) },
	{ 0x77faa67d, __VMLINUX_SYMBOL_STR(mlx4_free_cmd_mailbox) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xea55cf2f, __VMLINUX_SYMBOL_STR(mlx4_get_slave_from_roce_gid) },
	{ 0xf8389154, __VMLINUX_SYMBOL_STR(ib_find_cached_pkey) },
	{ 0xef988043, __VMLINUX_SYMBOL_STR(ib_unregister_device) },
	{ 0x41c6a755, __VMLINUX_SYMBOL_STR(mlx4_SYNC_TPT) },
	{ 0x1be70478, __VMLINUX_SYMBOL_STR(mlx4_get_protocol_dev) },
	{ 0x48c9f2eb, __VMLINUX_SYMBOL_STR(mlx4_cq_alloc) },
	{ 0x64dbfec, __VMLINUX_SYMBOL_STR(mlx4_slave_convert_port) },
	{ 0xeb0bf475, __VMLINUX_SYMBOL_STR(mlx4_get_internal_clock_params) },
	{ 0xc7ca4ba7, __VMLINUX_SYMBOL_STR(mlx4_mr_hw_write_mpt) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8b44982, __VMLINUX_SYMBOL_STR(mlx4_qp_release_range) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x760c0831, __VMLINUX_SYMBOL_STR(mlx4_release_eq) },
	{ 0x3948ea60, __VMLINUX_SYMBOL_STR(mlx4_get_active_ports) },
	{ 0xbb529d9a, __VMLINUX_SYMBOL_STR(mlx4_srq_query) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe73537b2, __VMLINUX_SYMBOL_STR(zap_vma_ptes) },
	{ 0x71ebd98a, __VMLINUX_SYMBOL_STR(mlx4_put_slave_node_guid) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x307973a9, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x1e823084, __VMLINUX_SYMBOL_STR(ib_sg_to_pages) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5f51c4a, __VMLINUX_SYMBOL_STR(ib_sa_register_client) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc3b49407, __VMLINUX_SYMBOL_STR(mlx4_get_base_gid_ix) },
	{ 0xef704be8, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x580148bb, __VMLINUX_SYMBOL_STR(ib_modify_qp_is_ok) },
	{ 0x7ae64cc9, __VMLINUX_SYMBOL_STR(zgid) },
	{ 0xf648b06c, __VMLINUX_SYMBOL_STR(mlx4_fmr_enable) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x69a68e23, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0x19c85478, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xf1671b86, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa1e62fb, __VMLINUX_SYMBOL_STR(ib_ud_header_pack) },
	{ 0x35eb2a00, __VMLINUX_SYMBOL_STR(mlx4_register_mac) },
	{ 0xe6184946, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xe1081d2b, __VMLINUX_SYMBOL_STR(mlx4_unregister_vlan) },
	{ 0x37e7334a, __VMLINUX_SYMBOL_STR(mlx4_multicast_detach) },
	{ 0x6a6a2d10, __VMLINUX_SYMBOL_STR(ib_query_ah) },
	{ 0x36b33094, __VMLINUX_SYMBOL_STR(mlx4_pd_alloc) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb261ea84, __VMLINUX_SYMBOL_STR(mlx4_gen_slaves_port_mgt_ev) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x87054c7, __VMLINUX_SYMBOL_STR(mlx4_write_mtt) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x3b7b13d0, __VMLINUX_SYMBOL_STR(mlx4_unregister_interface) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x65c84cc0, __VMLINUX_SYMBOL_STR(mlx4_fmr_unmap) },
	{ 0x27d500aa, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x5fb2e8ef, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xd336e50a, __VMLINUX_SYMBOL_STR(mlx4_mr_hw_change_access) },
	{ 0x336276f2, __VMLINUX_SYMBOL_STR(mlx4_map_sw_to_hw_steering_id) },
	{ 0x5bf0ba1a, __VMLINUX_SYMBOL_STR(mlx4_get_admin_guid) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd99bc92d, __VMLINUX_SYMBOL_STR(mlx4_buf_write_mtt) },
	{ 0x5a91edff, __VMLINUX_SYMBOL_STR(mlx4_unregister_mac) },
	{ 0x6fb0f9e, __VMLINUX_SYMBOL_STR(mlx4_update_qp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlx4_core,ib_core";


MODULE_INFO(srcversion, "3765D75F5B09DB7061A05CA");