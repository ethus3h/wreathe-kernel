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
	{ 0xd05f2737, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2614cb7e, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xd3dcc5f9, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xff6c482b, __VMLINUX_SYMBOL_STR(ib_fmr_pool_map_phys) },
	{ 0x2c8e26c, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xebc9f370, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xf1877322, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x72d9ff06, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xfb80edb4, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0x5d446648, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xeca66e4d, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2c75dd40, __VMLINUX_SYMBOL_STR(ib_free_cq) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf122313a, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xc32b59ff, __VMLINUX_SYMBOL_STR(ib_destroy_fmr_pool) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xaab63fa, __VMLINUX_SYMBOL_STR(blk_queue_virt_boundary) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xeb055616, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0xec8db555, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x2357de15, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x4674ee03, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5f3dd052, __VMLINUX_SYMBOL_STR(ib_alloc_mr) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf5e2bbe3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xc1a25dc3, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7d939033, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf903d092, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xd4ab6664, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x9bece4c2, __VMLINUX_SYMBOL_STR(ib_check_mr_status) },
	{ 0xb9d6b074, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0xd56b8362, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x428da1ba, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xaf3fa2d7, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x22f42971, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0x943ea11d, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0xe17ae586, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x5f7e3fc5, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x9fe09c18, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf0269ab, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x5f16170e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xccd990be, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xd724965b, __VMLINUX_SYMBOL_STR(ib_map_mr_sg) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xe0cc30ab, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x73c62a45, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xa9a73b8e, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x841c1996, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xabd8e743, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x4ab7b2ed, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x592ef69f, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x342c7652, __VMLINUX_SYMBOL_STR(ib_drain_sq) },
	{ 0x86a8d733, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0x45d4e354, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x5283e60a, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x547bb517, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x272e26cd, __VMLINUX_SYMBOL_STR(ib_query_qp) },
	{ 0x2c8b9b5f, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3959750e, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0xcfa2a09f, __VMLINUX_SYMBOL_STR(ib_event_msg) },
	{ 0xed226970, __VMLINUX_SYMBOL_STR(iscsi_suspend_queue) },
	{ 0x6c95441b, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x1d86e4cb, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e823084, __VMLINUX_SYMBOL_STR(ib_sg_to_pages) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1890cab5, __VMLINUX_SYMBOL_STR(ib_create_fmr_pool) },
	{ 0xce161c7d, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x954031d2, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x609ccd74, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x5a0912b8, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x9ae2456b, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xe858c040, __VMLINUX_SYMBOL_STR(ib_fmr_pool_unmap) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0xa045aa9d, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x15deadb1, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0xea71ecbf, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x9cfa7eed, __VMLINUX_SYMBOL_STR(ib_alloc_cq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,ib_core,scsi_transport_iscsi,rdma_cm";


MODULE_INFO(srcversion, "FCD57C3E86EC76FEF750905");
