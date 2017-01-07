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
	{ 0xc5d3d297, __VMLINUX_SYMBOL_STR(drm_encoder_index) },
	{ 0x42595e58, __VMLINUX_SYMBOL_STR(vgacon_text_force) },
	{ 0x511cbce1, __VMLINUX_SYMBOL_STR(drm_helper_move_panel_connectors_to_head) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x931f05d3, __VMLINUX_SYMBOL_STR(ktime_get_raw) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd05f2737, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x2b80fe5d, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x348c0862, __VMLINUX_SYMBOL_STR(drm_prime_gem_destroy) },
	{ 0x5d048cbf, __VMLINUX_SYMBOL_STR(drm_atomic_get_connector_state) },
	{ 0x61b2c6da, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x122e6e41, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x8d2e1b82, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x1f6ce67a, __VMLINUX_SYMBOL_STR(sg_pcopy_to_buffer) },
	{ 0x8ffd7a43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd16bceec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb52ee8be, __VMLINUX_SYMBOL_STR(intel_gtt_clear_range) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc6b915d1, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x413003c7, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part1) },
	{ 0x266b7638, __VMLINUX_SYMBOL_STR(interval_tree_remove) },
	{ 0x5d74dbcf, __VMLINUX_SYMBOL_STR(pnp_range_reserved) },
	{ 0x55bd85a4, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xef845809, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xc115905f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_suspend) },
	{ 0xfd60df2, __VMLINUX_SYMBOL_STR(drm_get_connector_status_name) },
	{ 0x6b954705, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x8e2753cd, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_write) },
	{ 0x765cedbc, __VMLINUX_SYMBOL_STR(drm_dp_get_dual_mode_type_name) },
	{ 0x46308a4a, __VMLINUX_SYMBOL_STR(drm_calc_timestamping_constants) },
	{ 0x5ceb5947, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0x59be96c1, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_plane) },
	{ 0x2d593948, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xb8da2cf8, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_max_tmds_clock) },
	{ 0x64d8103d, __VMLINUX_SYMBOL_STR(drm_crtc_index) },
	{ 0x91fec1cc, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale) },
	{ 0x8f64ee1c, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_fillrect) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0xf2e76f9e, __VMLINUX_SYMBOL_STR(drm_calc_vbltimestamp_from_scanoutpos) },
	{ 0x85d94bad, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x686a6716, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfca7b329, __VMLINUX_SYMBOL_STR(drm_hdmi_vendor_infoframe_from_display_mode) },
	{ 0x2ad08175, __VMLINUX_SYMBOL_STR(dummy_con) },
	{ 0x4fa4dca5, __VMLINUX_SYMBOL_STR(drm_edid_to_eld) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x32f00b0, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xee224c28, __VMLINUX_SYMBOL_STR(drm_wait_one_vblank) },
	{ 0x36487cf0, __VMLINUX_SYMBOL_STR(intel_gmch_probe) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x99b16f8c, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x9575262f, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0x42f1cec8, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xc72db74d, __VMLINUX_SYMBOL_STR(drm_gem_dmabuf_release) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xafd67ef1, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x343f5ca6, __VMLINUX_SYMBOL_STR(reservation_object_wait_timeout_rcu) },
	{ 0xb7487279, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0x9fedcc0a, __VMLINUX_SYMBOL_STR(drm_modeset_drop_locks) },
	{ 0x92f7a25, __VMLINUX_SYMBOL_STR(vga_get) },
	{ 0x5b1d2d32, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x9e9eb34c, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0x730f026d, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x85a0490e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0xd7c8c0e5, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x1b1e1088, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0x3e6309cf, __VMLINUX_SYMBOL_STR(drm_atomic_state_clear) },
	{ 0x4721c312, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0x4ea1cc4d, __VMLINUX_SYMBOL_STR(do_unregister_con_driver) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x59a31ba5, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa2bafa40, __VMLINUX_SYMBOL_STR(interval_tree_insert) },
	{ 0x9ebea853, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0xfc146675, __VMLINUX_SYMBOL_STR(drm_match_cea_mode) },
	{ 0xc23d8c4, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xb581290c, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x7f658dcd, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_write_buffer) },
	{ 0xb45e8e77, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x97d34247, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xbaf9522e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x3c02e095, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0x37838c61, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0xf02e1b6f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_swap_state) },
	{ 0x9877334c, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_resume) },
	{ 0xcc7c1afe, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xcb5f8894, __VMLINUX_SYMBOL_STR(drm_atomic_get_plane_state) },
	{ 0xc03f4cb0, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0x92408488, __VMLINUX_SYMBOL_STR(drm_mm_scan_add_block) },
	{ 0x47c4f7fc, __VMLINUX_SYMBOL_STR(nr_swap_pages) },
	{ 0x780fdfd1, __VMLINUX_SYMBOL_STR(intel_enable_gtt) },
	{ 0x9972db48, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale_relaxed) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x99506f6f, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0xc75e088f, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x526f6f71, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale_relaxed) },
	{ 0xcbb107c7, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x22bcc86f, __VMLINUX_SYMBOL_STR(drm_modeset_backoff) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x117fcf31, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf88111ff, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_set_mst) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0x7416be62, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x4caa3b97, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x556e8907, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8ee36ada, __VMLINUX_SYMBOL_STR(sysfs_create_files) },
	{ 0x63521535, __VMLINUX_SYMBOL_STR(__mmu_notifier_register) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x470099ed, __VMLINUX_SYMBOL_STR(pci_get_class) },
	{ 0x26ed2186, __VMLINUX_SYMBOL_STR(register_vmap_purge_notifier) },
	{ 0xf68687be, __VMLINUX_SYMBOL_STR(__sg_page_iter_start) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa47826e4, __VMLINUX_SYMBOL_STR(drm_dp_calc_pbn_mode) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x7645af6f, __VMLINUX_SYMBOL_STR(sg_pcopy_from_buffer) },
	{ 0x436a9e5d, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0x158b2401, __VMLINUX_SYMBOL_STR(__get_user_pages_fast) },
	{ 0xaa8482db, __VMLINUX_SYMBOL_STR(drm_vblank_cleanup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcb936989, __VMLINUX_SYMBOL_STR(hdmi_infoframe_pack) },
	{ 0x9e030a9f, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x99ee45b5, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0x29a010e6, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_in_range_generic) },
	{ 0xab757cde, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9fbcd99, __VMLINUX_SYMBOL_STR(down_write_killable) },
	{ 0xd35d7c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21df74d9, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x31a1bd82, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xf1851c43, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0xdd518f25, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0x38e05673, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_destroy) },
	{ 0x4fb2e30d, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x81a97669, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xd5e12823, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x2e0ccb04, __VMLINUX_SYMBOL_STR(drm_dp_mst_hpd_irq) },
	{ 0x74e04504, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_fini) },
	{ 0x500697dd, __VMLINUX_SYMBOL_STR(drm_pci_free) },
	{ 0x154969f0, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0x1776fa45, __VMLINUX_SYMBOL_STR(pci_bus_alloc_resource) },
	{ 0x44aaf30f, __VMLINUX_SYMBOL_STR(tsc_khz) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x1e793e44, __VMLINUX_SYMBOL_STR(shmem_truncate_range) },
	{ 0x426ba24, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0xf578d573, __VMLINUX_SYMBOL_STR(drm_helper_crtc_enable_color_mgmt) },
	{ 0x1d015b97, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_destroy_state) },
	{ 0x60b40fd8, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0x9a9f570f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xa8e0df2f, __VMLINUX_SYMBOL_STR(drm_av_sync_delay) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0x8826c13b, __VMLINUX_SYMBOL_STR(acpi_video_register) },
	{ 0xf8f762d3, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0xac57f005, __VMLINUX_SYMBOL_STR(drm_dp_mst_allocate_vcpi) },
	{ 0xd52b1d11, __VMLINUX_SYMBOL_STR(drm_mm_init_scan) },
	{ 0x7cfa13c2, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x29f304ff, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x49d3bbd7, __VMLINUX_SYMBOL_STR(vga_put) },
	{ 0x34871adf, __VMLINUX_SYMBOL_STR(drm_dp_channel_eq_ok) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x308b3fa0, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xaeca7a43, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x14ef600c, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x90f4a529, __VMLINUX_SYMBOL_STR(__mmdrop) },
	{ 0x3da171f9, __VMLINUX_SYMBOL_STR(pci_mem_start) },
	{ 0xf995798a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf40f8de0, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_plane_duplicate_state) },
	{ 0x2230b483, __VMLINUX_SYMBOL_STR(drm_vblank_count) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x885a34e, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0x39093736, __VMLINUX_SYMBOL_STR(drm_atomic_set_mode_for_crtc) },
	{ 0x7ae69bd5, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0x142a7255, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_duplicate_state) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x693a1346, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0xaa109d64, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_legacy_modeset_state) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xcb2340b8, __VMLINUX_SYMBOL_STR(drm_rect_debug_print) },
	{ 0x6632efe7, __VMLINUX_SYMBOL_STR(drm_atomic_helper_set_config) },
	{ 0x62ce946e, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0xb94f1b50, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_set_tmds_output) },
	{ 0x819fa99d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3b28fd8f, __VMLINUX_SYMBOL_STR(drm_mode_object_reference) },
	{ 0xa084749a, __VMLINUX_SYMBOL_STR(__bitmap_or) },
	{ 0x8550cc1b, __VMLINUX_SYMBOL_STR(drm_dp_mst_deallocate_vcpi) },
	{ 0x4f81672b, __VMLINUX_SYMBOL_STR(drm_dp_check_act_status) },
	{ 0xef6c3f70, __VMLINUX_SYMBOL_STR(round_jiffies_up_relative) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0x2fd0b530, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_suspend) },
	{ 0x3da1edff, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1a546ddd, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0x79b6875, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x2f384db3, __VMLINUX_SYMBOL_STR(acpi_is_video_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcee66cf6, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x7f04352a, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0x4f2db6b1, __VMLINUX_SYMBOL_STR(drm_atomic_state_alloc) },
	{ 0x29eba37f, __VMLINUX_SYMBOL_STR(current_is_async) },
	{ 0xb8836607, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_copyarea) },
	{ 0xe81ef1dd, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0xd4d6056d, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x91d8e5, __VMLINUX_SYMBOL_STR(drm_mode_connector_set_path_property) },
	{ 0x711a004a, __VMLINUX_SYMBOL_STR(drm_dp_link_rate_to_bw_code) },
	{ 0xfe51f703, __VMLINUX_SYMBOL_STR(drm_mode_copy) },
	{ 0x92707bc1, __VMLINUX_SYMBOL_STR(drm_noop) },
	{ 0x9b32a1d4, __VMLINUX_SYMBOL_STR(drm_atomic_commit) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x48193639, __VMLINUX_SYMBOL_STR(acpi_lid_open) },
	{ 0xfadc3980, __VMLINUX_SYMBOL_STR(drm_plane_index) },
	{ 0xf5dd9913, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x77bedc94, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x629c05e1, __VMLINUX_SYMBOL_STR(drm_clflush_sg) },
	{ 0x80a03979, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xafe31e6d, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3fc92c94, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xfbe7668e, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_put) },
	{ 0x167b5cdc, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference_unlocked) },
	{ 0x99eb629f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x98845a01, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6682baa6, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x7ab7c7d6, __VMLINUX_SYMBOL_STR(drm_atomic_helper_prepare_planes) },
	{ 0x497b137d, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xa055544a, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0xc831764e, __VMLINUX_SYMBOL_STR(drm_has_preferred_mode) },
	{ 0xab339e0, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa9c13a65, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x6e30ba8e, __VMLINUX_SYMBOL_STR(drm_rect_rotate_inv) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0xa5efbf4c, __VMLINUX_SYMBOL_STR(async_synchronize_full) },
	{ 0xe5772d4a, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0x3a699264, __VMLINUX_SYMBOL_STR(pm_runtime_get_if_in_use) },
	{ 0xcb666201, __VMLINUX_SYMBOL_STR(drm_atomic_set_crtc_for_connector) },
	{ 0x84da421f, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0x4a86dd9a, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0xd4f96318, __VMLINUX_SYMBOL_STR(drm_dp_mst_reset_vcpi_slots) },
	{ 0x490cfb78, __VMLINUX_SYMBOL_STR(drm_mm_reserve_node) },
	{ 0xc5569c2, __VMLINUX_SYMBOL_STR(drm_gem_dumb_destroy) },
	{ 0xb0e84368, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0xcbae6c7a, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_unregister) },
	{ 0xa80fbece, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x3a32839e, __VMLINUX_SYMBOL_STR(intel_gtt_chipset_flush) },
	{ 0x1e8ba340, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x98e47d2, __VMLINUX_SYMBOL_STR(drm_dp_link_train_clock_recovery_delay) },
	{ 0x562746ce, __VMLINUX_SYMBOL_STR(drm_mode_create_rotation_property) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xa77858bb, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_voltage) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x617ee585, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_on) },
	{ 0xa4f623a8, __VMLINUX_SYMBOL_STR(drm_atomic_state_free) },
	{ 0xdbe94ffc, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0xf0e5cc75, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x5aa3d8d6, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0xacff9ec, __VMLINUX_SYMBOL_STR(drm_plane_from_index) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb365bc95, __VMLINUX_SYMBOL_STR(drm_atomic_state_init) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4b30c283, __VMLINUX_SYMBOL_STR(drm_panel_attach) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x9e9fdd9d, __VMLINUX_SYMBOL_STR(memunmap) },
	{ 0x9fe09c18, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x5e51cd74, __VMLINUX_SYMBOL_STR(swiotlb_nr_tbl) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6795e0b6, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x28db0cc6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x95d6172, __VMLINUX_SYMBOL_STR(drm_select_eld) },
	{ 0xac625705, __VMLINUX_SYMBOL_STR(vga_client_register) },
	{ 0x54524d0d, __VMLINUX_SYMBOL_STR(drm_probe_ddc) },
	{ 0x5b4009bb, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xfb6eedf9, __VMLINUX_SYMBOL_STR(power_group_name) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdeb813b7, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_suspend) },
	{ 0xf0187927, __VMLINUX_SYMBOL_STR(__sg_page_iter_next) },
	{ 0x48394475, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xdbeef281, __VMLINUX_SYMBOL_STR(drm_modeset_legacy_acquire_ctx) },
	{ 0x71754892, __VMLINUX_SYMBOL_STR(sysfs_merge_group) },
	{ 0x3ad1e80b, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xd96babb4, __VMLINUX_SYMBOL_STR(interval_tree_iter_next) },
	{ 0x4a3b740c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd97527fc, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xc248f71b, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0x189bfca5, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0xb5aae18d, __VMLINUX_SYMBOL_STR(drm_dp_aux_unregister) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x474ee9ae, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xd614c603, __VMLINUX_SYMBOL_STR(drm_fb_helper_release_fbi) },
	{ 0xe3d6c7cf, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0xfc23c27c, __VMLINUX_SYMBOL_STR(drm_atomic_set_fb_for_plane) },
	{ 0xeabd9761, __VMLINUX_SYMBOL_STR(mipi_dsi_generic_write) },
	{ 0x7e32222a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xc515a566, __VMLINUX_SYMBOL_STR(drm_fb_helper_add_one_connector) },
	{ 0xffa947cc, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all_ctx) },
	{ 0x3a7bca5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x49934248, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xd9d60424, __VMLINUX_SYMBOL_STR(sysfs_unmerge_group) },
	{ 0xf09e15ae, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_set_property) },
	{ 0x59af6d58, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0xaa7a92ef, __VMLINUX_SYMBOL_STR(con_is_bound) },
	{ 0xa5e75e9a, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xb899a372, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x34f41244, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xc617f82c, __VMLINUX_SYMBOL_STR(unregister_oom_notifier) },
	{ 0x359d4f39, __VMLINUX_SYMBOL_STR(vga_con) },
	{ 0x2027d68b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0xa9ead5f, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0x9f150497, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0xf62d1c7, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0x2e4d67eb, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x2b7ea8cb, __VMLINUX_SYMBOL_STR(drm_modeset_unlock) },
	{ 0xbc38481b, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0xd84374b5, __VMLINUX_SYMBOL_STR(drm_modeset_lock) },
	{ 0x348a7cab, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7a45377b, __VMLINUX_SYMBOL_STR(acpi_video_unregister) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x47662c7, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x7568e467, __VMLINUX_SYMBOL_STR(stop_machine) },
	{ 0xa9fbba81, __VMLINUX_SYMBOL_STR(drm_crtc_get_hv_timing) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xb347bb2c, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0xdcc3a419, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0x2fe7da80, __VMLINUX_SYMBOL_STR(drm_atomic_get_crtc_state) },
	{ 0x1ca5961c, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xf54a19ec, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0xa5c7806c, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4f19d05b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_set_property) },
	{ 0xf15e7b38, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x2a440a34, __VMLINUX_SYMBOL_STR(drm_framebuffer_remove) },
	{ 0x56ee99e2, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0x87e47cb2, __VMLINUX_SYMBOL_STR(drm_plane_cleanup) },
	{ 0x73084c52, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xc69f9ccd, __VMLINUX_SYMBOL_STR(drm_atomic_helper_legacy_gamma_set) },
	{ 0x37729a47, __VMLINUX_SYMBOL_STR(drm_dp_find_vcpi_slots) },
	{ 0x5a03b52d, __VMLINUX_SYMBOL_STR(drm_property_create_enum) },
	{ 0x4544e538, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfd09d50, __VMLINUX_SYMBOL_STR(drm_mode_create) },
	{ 0xb91e6654, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0x48f8fc97, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x4e10a9eb, __VMLINUX_SYMBOL_STR(drm_mode_hsync) },
	{ 0x8941863d, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x2b05a21b, __VMLINUX_SYMBOL_STR(intel_gtt_get) },
	{ 0xf54c0d07, __VMLINUX_SYMBOL_STR(drm_atomic_set_crtc_for_plane) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x268328a7, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0xa64290da, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x659f86d9, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x1569fe97, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0x5184844a, __VMLINUX_SYMBOL_STR(drm_mode_create_scaling_mode_property) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0xc3f30296, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0x98295b87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0x2cdbe586, __VMLINUX_SYMBOL_STR(drm_framebuffer_unregister_private) },
	{ 0x40d04664, __VMLINUX_SYMBOL_STR(console_trylock) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xcf982486, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_reset) },
	{ 0x7dbbd0da, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable_locked) },
	{ 0x5fdbb0a9, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0xf9ddb4e6, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_detect) },
	{ 0xe8b89b4d, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x67f4ad8d, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0x5b40fe94, __VMLINUX_SYMBOL_STR(drm_mode_create_aspect_ratio_property) },
	{ 0x84e924ba, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_pre_emphasis) },
	{ 0xecd78440, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa72f765, __VMLINUX_SYMBOL_STR(drm_clflush_virt_range) },
	{ 0x7127177e, __VMLINUX_SYMBOL_STR(drm_dp_mst_get_edid) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9f780635, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0x817fadc7, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0x5f992cfa, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x622c7922, __VMLINUX_SYMBOL_STR(register_oom_notifier) },
	{ 0xfe81609f, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xb01b1db8, __VMLINUX_SYMBOL_STR(intel_gtt_insert_sg_entries) },
	{ 0xb053adda, __VMLINUX_SYMBOL_STR(drm_rect_rotate) },
	{ 0x5257a0bb, __VMLINUX_SYMBOL_STR(do_take_over_console) },
	{ 0x2ff063b5, __VMLINUX_SYMBOL_STR(acpi_get_name) },
	{ 0x544b0c11, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_register) },
	{ 0x175e4272, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x9b720312, __VMLINUX_SYMBOL_STR(acpi_target_system_state) },
	{ 0x2ec11f7d, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_crtc) },
	{ 0x9045d454, __VMLINUX_SYMBOL_STR(set_pages_wb) },
	{ 0x163251c8, __VMLINUX_SYMBOL_STR(drm_dp_link_train_channel_eq_delay) },
	{ 0xf344fae0, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0xeefff04e, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x99ba7e25, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_get) },
	{ 0x6e6d5110, __VMLINUX_SYMBOL_STR(drm_pci_alloc) },
	{ 0xad06993e, __VMLINUX_SYMBOL_STR(drm_fb_helper_hotplug_event) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x2defc8e8, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_init) },
	{ 0x76dd109b, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xca5c7790, __VMLINUX_SYMBOL_STR(drm_mm_init_scan_with_range) },
	{ 0x5c9a478e, __VMLINUX_SYMBOL_STR(get_user_pages_remote) },
	{ 0x8129252a, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0xd0eeba6a, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0xf5fa02cf, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xd41fffab, __VMLINUX_SYMBOL_STR(interval_tree_iter_first) },
	{ 0xcb956dc8, __VMLINUX_SYMBOL_STR(drm_atomic_helper_duplicate_state) },
	{ 0x7bfa9e08, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe57edb50, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x310f02ec, __VMLINUX_SYMBOL_STR(memremap) },
	{ 0xda68303e, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0x385db520, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xa1bad735, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x2c8b9b5f, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x34ce743, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_init) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x208c8351, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x627c19bf, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x903ab5a4, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x3b59e785, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x29307e1d, __VMLINUX_SYMBOL_STR(sysfs_remove_files) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb2f74fb6, __VMLINUX_SYMBOL_STR(intel_gmch_remove) },
	{ 0x1226bdb6, __VMLINUX_SYMBOL_STR(ex_handler_default) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x40922818, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x8c17e2b9, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x14a9a178, __VMLINUX_SYMBOL_STR(drm_get_format_name) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x5b5afc45, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0xde14f2ab, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0xc5e758f8, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xa28078b2, __VMLINUX_SYMBOL_STR(drm_edid_duplicate) },
	{ 0x7b5ba775, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_planes_on_crtc) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0xa528113c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_destroy_state) },
	{ 0x14d06c97, __VMLINUX_SYMBOL_STR(i2c_bit_algo) },
	{ 0x3bc5f19, __VMLINUX_SYMBOL_STR(drm_plane_helper_check_update) },
	{ 0x54d30a44, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x5440a7bc, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xcc2a77ba, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0x5e06d4d3, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0xe8bbba64, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xee5b7718, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xe082d9a5, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xa5802bb7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7ee6d93a, __VMLINUX_SYMBOL_STR(nsecs_to_jiffies64) },
	{ 0x1c3a1097, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference) },
	{ 0x71451794, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x732b937b, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x6900d335, __VMLINUX_SYMBOL_STR(drm_rect_clip_scaled) },
	{ 0xdb2a359a, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0xe9836779, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x9da05e10, __VMLINUX_SYMBOL_STR(mipi_dsi_create_packet) },
	{ 0xef704be8, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x156b360e, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_imageblit) },
	{ 0xa220223f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_cleanup_planes) },
	{ 0xf435d306, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xa4ed3f03, __VMLINUX_SYMBOL_STR(drm_atomic_state_default_clear) },
	{ 0xa295f934, __VMLINUX_SYMBOL_STR(set_pages_uc) },
	{ 0x594300e, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xb031a716, __VMLINUX_SYMBOL_STR(drm_fb_helper_remove_one_connector) },
	{ 0xbb14127d, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0xc3b6b387, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xef442a04, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0xdd150721, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xe13a27f9, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_count) },
	{ 0x9dcba3b8, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x2d50570f, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xbd265b48, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_plane) },
	{ 0xa787ee24, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x494e3393, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xf3112630, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_connectors) },
	{ 0x882aeac2, __VMLINUX_SYMBOL_STR(drm_fb_helper_restore_fbdev_mode_unlocked) },
	{ 0xfeb2420f, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3f8c3eb4, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part2) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf147dcb2, __VMLINUX_SYMBOL_STR(hdmi_spd_infoframe_init) },
	{ 0x115ad9df, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x15166dd5, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_planes) },
	{ 0x999ed11c, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0x9639c791, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x4ee7ee5d, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0x6ec69b2d, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0x2f838bd2, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xa4466414, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0x30b04526, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x8777c232, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0xf3f1ba4f, __VMLINUX_SYMBOL_STR(pcibios_align_resource) },
	{ 0x5fb2e8ef, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xcf2b09cc, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0x71061d16, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_read) },
	{ 0xb7839412, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x2b146437, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x94b864ad, __VMLINUX_SYMBOL_STR(drm_dp_mst_detect_port) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x5531b0bb, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xa8defd92, __VMLINUX_SYMBOL_STR(drm_dp_aux_register) },
	{ 0xf9f97eb, __VMLINUX_SYMBOL_STR(drm_mode_object_unreference) },
	{ 0xd6c3ee82, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0xea71ecbf, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x69475b74, __VMLINUX_SYMBOL_STR(drm_pick_cmdline_mode) },
	{ 0xb3b0d6f3, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0xacb99769, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0xf9c99a5c, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x9e142f16, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_disable) },
	{ 0x2c5f3ef5, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0x57a5969d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x924c38aa, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0x349954aa, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x5e37a424, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xbe8a4b35, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x26579aef, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xc7c47632, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x5ca49250, __VMLINUX_SYMBOL_STR(vm_insert_pfn) },
	{ 0x91ac822f, __VMLINUX_SYMBOL_STR(vscnprintf) },
	{ 0x6768a54e, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
	{ 0xfcf54a4f, __VMLINUX_SYMBOL_STR(drm_mm_scan_remove_block) },
	{ 0x2e7a4300, __VMLINUX_SYMBOL_STR(drm_rgb_quant_range_selectable) },
	{ 0x3174bd79, __VMLINUX_SYMBOL_STR(bitmap_clear) },
	{ 0x5fd73e73, __VMLINUX_SYMBOL_STR(sched_clock_cpu) },
	{ 0x12eba8c9, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x3843d5df, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0xe05b9a37, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb7c69a63, __VMLINUX_SYMBOL_STR(unregister_vmap_purge_notifier) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe7644077, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_planes) },
	{ 0xf96ec70, __VMLINUX_SYMBOL_STR(drm_dp_clock_recovery_ok) },
	{ 0x3f071e6e, __VMLINUX_SYMBOL_STR(drm_modeset_lock_crtc) },
	{ 0xe61391c0, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_modeset) },
	{ 0x6a3537e5, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_destroy_state) },
	{ 0x75147db5, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,intel-gtt,i2c-core,video,button,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000258Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002972sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002982sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002992sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A001sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A011sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000042sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000046sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000102sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000112sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000122sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000106sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000116sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000126sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv0000152Dsd00008990bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000156sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000166sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000152sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000162sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000402sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000412sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000422sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000406sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000416sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000426sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F30sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F31sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F33sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000157sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000155sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001602sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001606sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001612sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001616sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001622sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001932sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Bsv*sd*bc03sc*i*");
