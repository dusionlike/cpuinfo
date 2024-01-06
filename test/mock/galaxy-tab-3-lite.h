struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 349,
		.content = "Processor\t: ARMv7 Processor rev 5 (v7l)\n"
			   "processor\t: 0\n"
			   "model name\t: ARMv7 Processor rev 5 (v7l)\n"
			   "BogoMIPS\t: 1538.01\n"
			   "Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			   "CPU implementer\t: 0x41\n"
			   "CPU architecture: 7\n"
			   "CPU variant\t: 0x0\n"
			   "CPU part\t: 0xc07\n"
			   "CPU revision\t: 5\n"
			   "\n"
			   "Hardware\t: sc8830\n"
			   "Revision\t: 0004\n"
			   "Serial\t\t: 3100818054f13400\n",
	},
	{
		.path = "/system/build.prop",
		.size = 4495,
		.content =
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=KTU84P\n"
			"ro.build.display.id=KTU84P.T113ZHU0AOG1\n"
			"ro.build.version.incremental=T113ZHU0AOG1\n"
			"ro.build.version.sdk=19\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.release=4.4.4\n"
			"ro.build.date=Thu Jul  2 16:50:29 KST 2015\n"
			"ro.build.date.utc=1435823429\n"
			"ro.build.type=user\n"
			"ro.build.user=dpi\n"
			"ro.build.host=SWDD6109\n"
			"ro.build.tags=release-keys\n"
			"ro.product.model=SM-T113\n"
			"ro.product.brand=samsung\n"
			"ro.product.name=goyavewifizh\n"
			"ro.product.device=goyavewifi\n"
			"ro.product.board=sc7730s\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.manufacturer=samsung\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=GB\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=sc8830\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=goyavewifi\n"
			"# Do not try to parse ro.build.description or .fingerprint\n"
			"ro.build.description=goyavewifizh-user 4.4.4 KTU84P T113ZHU0AOG1 release-keys\n"
			"ro.build.fingerprint=samsung/goyavewifizh/goyavewifi:4.4.4/KTU84P/T113ZHU0AOG1:user/release-keys\n"
			"ro.build.characteristics=tablet\n"
			"ro.zygote.disable_gl_preload=false\n"
			"# Samsung Specific Properties\n"
			"ro.build.PDA=T113ZHU0AOG1\n"
			"ro.build.hidden_ver=T113ZHU0AOG1\n"
			"ro.config.rm_preload_enabled=0\n"
			"ro.build.changelist=693337\n"
			"ro.product_ship=true\n"
			"ro.chipname=sc7730s\n"
			"ro.build.knox.container=\n"
			"persist.sys.storage_preload=1\n"
			"# end build properties\n"
			"#\n"
			"# from device/samsung/goyavewifi/system.prop\n"
			"#\n"
			"ro.sf.lcd_width=154\n"
			"ro.sf.lcd_height=90\n"
			"ro.opengles.version=131072\n"
			"ro.product.hardware=PIKEAYOUNG2DTV_V1.0.0\n"
			"\n"
			"debug.hwui.render_dirty_regions=false\n"
			"\n"
			"# Bluetooth OPP low speed for save power\n"
			"debug.bt.lowspeed=true\n"
			"\n"
			"persist.ttydev=ttyVUART0\n"
			"\n"
			"# delay for ConnectivityChange broadcast (ms)\n"
			"conn.connectivity_change_delay = 0\n"
			"\n"
			"ro.product.partitionpath=/dev/block/platform/sprd-sdhci.3/by-name/\n"
			"\n"
			"# rotation setting in potrait mode.\n"
			"ro.sf.hwrotation=270\n"
			"\n"
			"# Default ecclist\n"
			"ro.ril.ecclist=112,911,#911,*911\n"
			"\n"
			"persist.modem.w.enable=1\n"
			"persist.modem.w.nvp=w\n"
			"ro.modem.w.dev=/dev/cpw\n"
			"ro.modem.w.tty=/dev/stty_w\n"
			"ro.modem.w.eth=rmnet\n"
			"ro.modem.w.snd=1\n"
			"ro.modem.w.diag=/dev/slog_w\n"
			"ro.modem.w.loop=/dev/spipe_w0\n"
			"ro.modem.w.nv=/dev/spipe_w1\n"
			"ro.modem.w.assert=/dev/spipe_w2\n"
			"ro.modem.w.vbc=/dev/spipe_w6\n"
			"ro.modem.w.id=0\n"
			"ro.modem.w.fixnv_size=0x40000\n"
			"ro.modem.w.runnv_size=0x60000\n"
			"\n"
			"persist.sys.engpc.disable=0\n"
			"\n"
			"ro.config.ksm.support=true\n"
			"\n"
			"#zram config\n"
			"ro.config.zram.support=true\n"
			"ro.board_ram_size=mid\n"
			"\n"
			"# SPRD: add low cost low memory @{\n"
			"ro.config.low_ram=true\n"
			"# @}\n"
			"\n"
			"#if our product not support drm,set as false\n"
			"drm.service.enabled=true\n"
			"\n"
			"# hotspot development\n"
			"ro.hotspot.enabled=1\n"
			"\n"
			"# System property for storage_preload\n"
			"persist.sys.storage_preload=1\n"
			"\n"
			"# this product does not support bt and softap coexist\n"
			"ro.btwifisoftap.coexist=false\n"
			"# SPRD: add support hwrotation\n"
			"ro.sf.hwrotation=270\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.hwui.texture_cache_size=24\n"
			"ro.hwui.layer_cache_size=16\n"
			"ro.hwui.path_cache_size=4\n"
			"ro.hwui.shape_cache_size=1\n"
			"ro.hwui.gradient_cache_size=0.5\n"
			"ro.hwui.drop_shadow_cache_size=2\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=512\n"
			"ro.hwui.text_large_cache_width=2048\n"
			"ro.hwui.text_large_cache_height=1024\n"
			"persist.sys.sprd.modemreset=0\n"
			"ro.adb.secure=1\n"
			"persist.sys.sprd.wcnreset=1\n"
			"ro.storage.flash_type=2\n"
			"keyguard.no_require_sim=true\n"
			"ro.com.android.dataroaming=false\n"
			"ro.msms.phone_count=1\n"
			"persist.msms.phone_count=1\n"
			"persist.msms.phone_default=0\n"
			"ro.modem.w.count=1\n"
			"persist.sys.modem.diag=,gser\n"
			"sys.usb.gser.count=4\n"
			"lmk.autocalc=false\n"
			"dalvik.vm.heapstartsize=5m\n"
			"dalvik.vm.heapgrowthlimit=64m\n"
			"dalvik.vm.heapsize=128m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=512k\n"
			"dalvik.vm.heapmaxfree=2m\n"
			"ro.carrier=wifi-only\n"
			"ro.build.scafe=macchiato\n"
			"ro.build.scafe.cream=white\n"
			"ro.build.scafe.size=tall\n"
			"ro.build.scafe.shot=half\n"
			"ro.sf.lcd_density=160\n"
			"ro.config.low_ram=true\n"
			"ro.error.receiver.default=com.samsung.receiver.error\n"
			"ro.sec.fle.encryption=true\n"
			"ro.config.ringtone=Over_the_horizon.ogg\n"
			"ro.config.ringtone_2=Fog_on_the_Water.ogg\n"
			"ro.config.notification_sound=S_Whistle.ogg\n"
			"ro.config.notification_sound_2=S_On_Time.ogg\n"
			"ro.config.alarm_alert=Alarm_Morning_Flower.ogg\n"
			"ro.config.media_sound=Media_preview_Touch_the_light.ogg\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.ril.hsxpa=1\n"
			"ro.ril.gprsclass=10\n"
			"ro.adb.qemud=1\n"
			"ro.setupwizard.mode=OPTIONAL\n"
			"ro.com.google.clientidbase=android-samsung\n"
			"ro.com.google.gmsversion=4.4_r7\n"
			"persist.sys.dalvik.vm.lib=libdvm.so\n"
			"ro.config.knox=v00\n"
			"ro.kernel.qemu=0\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/online",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/offline",
		.size = 4,
		.content = "1-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_driver",
		.size = 11,
		.content = "sc_cpuidle\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_governor_ro",
		.size = 5,
		.content = "menu\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/affected_cpus",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "768000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_transition_latency",
		.size = 7,
		.content = "100000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/related_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies",
		.size = 32,
		.content = "1300000 1200000 1000000 768000 \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors",
		.size = 25,
		.content = "interactive performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq",
		.size = 7,
		.content = "768000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_driver",
		.size = 5,
		.content = "sprd\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "768000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/time_in_state",
		.size = 51,
		.content = "1300000 7925\n"
			   "1200000 1060\n"
			   "1000000 207\n"
			   "768000 21236\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/total_trans",
		.size = 4,
		.content = "110\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 3,
		.content = "15\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings",
		.size = 2,
		.content = "f\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings",
		.size = 2,
		.content = "1\n",
	},
	{NULL},
};

#ifdef __ANDROID__
struct cpuinfo_mock_property properties[] = {
	{
		.key = "conn.connectivity_change_delay",
		.value = "0",
	},
	{
		.key = "dalvik.vm.heapgrowthlimit",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.heapmaxfree",
		.value = "2m",
	},
	{
		.key = "dalvik.vm.heapminfree",
		.value = "512k",
	},
	{
		.key = "dalvik.vm.heapsize",
		.value = "128m",
	},
	{
		.key = "dalvik.vm.heapstartsize",
		.value = "5m",
	},
	{
		.key = "dalvik.vm.heaptargetutilization",
		.value = "0.75",
	},
	{
		.key = "dalvik.vm.stack-trace-file",
		.value = "/data/anr/traces.txt",
	},
	{
		.key = "debug.bt.lowspeed",
		.value = "true",
	},
	{
		.key = "debug.force_rtl",
		.value = "0",
	},
	{
		.key = "debug.hwui.render_dirty_regions",
		.value = "false",
	},
	{
		.key = "dev.bootcomplete",
		.value = "1",
	},
	{
		.key = "dev.kies.sommode",
		.value = "TRUE",
	},
	{
		.key = "dev.kiessupport",
		.value = "TRUE",
	},
	{
		.key = "dev.knoxapp.running",
		.value = "false",
	},
	{
		.key = "dev.message.reserved",
		.value = "TRUE",
	},
	{
		.key = "dev.ssrm.emergencymode",
		.value = "false",
	},
	{
		.key = "dev.ssrm.init",
		.value = "1",
	},
	{
		.key = "dev.ssrm.mode",
		.value = "",
	},
	{
		.key = "dhcp.wlan0.dns1",
		.value = "208.67.222.222",
	},
	{
		.key = "dhcp.wlan0.dns2",
		.value = "208.67.220.220",
	},
	{
		.key = "dhcp.wlan0.dns3",
		.value = "",
	},
	{
		.key = "dhcp.wlan0.dns4",
		.value = "",
	},
	{
		.key = "dhcp.wlan0.domain",
		.value = "tfbnw.net",
	},
	{
		.key = "dhcp.wlan0.gateway",
		.value = "172.22.192.1",
	},
	{
		.key = "dhcp.wlan0.ipaddress",
		.value = "172.22.208.66",
	},
	{
		.key = "dhcp.wlan0.leasetime",
		.value = "1800",
	},
	{
		.key = "dhcp.wlan0.mask",
		.value = "255.255.224.0",
	},
	{
		.key = "dhcp.wlan0.mtu",
		.value = "",
	},
	{
		.key = "dhcp.wlan0.pid",
		.value = "1017",
	},
	{
		.key = "dhcp.wlan0.reason",
		.value = "BOUND",
	},
	{
		.key = "dhcp.wlan0.result",
		.value = "ok",
	},
	{
		.key = "dhcp.wlan0.roaming",
		.value = "0",
	},
	{
		.key = "dhcp.wlan0.server",
		.value = "192.168.47.185",
	},
	{
		.key = "dhcp.wlan0.vendorInfo",
		.value = "",
	},
	{
		.key = "drm.service.enabled",
		.value = "true",
	},
	{
		.key = "gsm.current.phone-type",
		.value = "1",
	},
	{
		.key = "gsm.network.type",
		.value = "Unknown:0",
	},
	{
		.key = "gsm.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.operator.iso-country",
		.value = "",
	},
	{
		.key = "gsm.operator.isroaming",
		.value = "false",
	},
	{
		.key = "gsm.operator.numeric",
		.value = "",
	},
	{
		.key = "gsm.sim.state",
		.value = "NOT_READY",
	},
	{
		.key = "init.svc.BCS-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.DR-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.SMD-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.adbd",
		.value = "running",
	},
	{
		.key = "init.svc.apanic_rename",
		.value = "stopped",
	},
	{
		.key = "init.svc.at_distributor",
		.value = "running",
	},
	{
		.key = "init.svc.batterysrv",
		.value = "running",
	},
	{
		.key = "init.svc.bootanim",
		.value = "stopped",
	},
	{
		.key = "init.svc.copy_cp_imgs",
		.value = "stopped",
	},
	{
		.key = "init.svc.debuggerd",
		.value = "running",
	},
	{
		.key = "init.svc.dhcpcd_wlan0",
		.value = "running",
	},
	{
		.key = "init.svc.drm",
		.value = "running",
	},
	{
		.key = "init.svc.engpcclientw",
		.value = "running",
	},
	{
		.key = "init.svc.gpsd",
		.value = "running",
	},
	{
		.key = "init.svc.healthd",
		.value = "running",
	},
	{
		.key = "init.svc.installd",
		.value = "running",
	},
	{
		.key = "init.svc.keystore",
		.value = "running",
	},
	{
		.key = "init.svc.macloader",
		.value = "stopped",
	},
	{
		.key = "init.svc.media",
		.value = "running",
	},
	{
		.key = "init.svc.mobex-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.modemd",
		.value = "running",
	},
	{
		.key = "init.svc.napa_ts",
		.value = "stopped",
	},
	{
		.key = "init.svc.netd",
		.value = "running",
	},
	{
		.key = "init.svc.nvitemd_w",
		.value = "running",
	},
	{
		.key = "init.svc.p2p_supplicant",
		.value = "running",
	},
	{
		.key = "init.svc.phoneserver_w",
		.value = "running",
	},
	{
		.key = "init.svc.powersnd",
		.value = "stopped",
	},
	{
		.key = "init.svc.prepare_param",
		.value = "stopped",
	},
	{
		.key = "init.svc.refnotify_w",
		.value = "running",
	},
	{
		.key = "init.svc.ril-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.rtccd",
		.value = "stopped",
	},
	{
		.key = "init.svc.sdcard",
		.value = "stopped",
	},
	{
		.key = "init.svc.servicemanager",
		.value = "running",
	},
	{
		.key = "init.svc.slog",
		.value = "running",
	},
	{
		.key = "init.svc.smd_symlink",
		.value = "stopped",
	},
	{
		.key = "init.svc.surfaceflinger",
		.value = "running",
	},
	{
		.key = "init.svc.ueventd",
		.value = "running",
	},
	{
		.key = "init.svc.vold",
		.value = "running",
	},
	{
		.key = "init.svc.zram",
		.value = "stopped",
	},
	{
		.key = "init.svc.zygote",
		.value = "running",
	},
	{
		.key = "installd.sdcard_manipulate_done",
		.value = "1",
	},
	{
		.key = "keyguard.no_require_sim",
		.value = "true",
	},
	{
		.key = "lmk.autocalc",
		.value = "false",
	},
	{
		.key = "media.dump.path",
		.value = "/data/local/media/",
	},
	{
		.key = "media.dump.switch",
		.value = "0x0",
	},
	{
		.key = "net.bt.name",
		.value = "Android",
	},
	{
		.key = "net.change",
		.value = "net.dns2",
	},
	{
		.key = "net.dns1",
		.value = "208.67.222.222",
	},
	{
		.key = "net.dns2",
		.value = "208.67.220.220",
	},
	{
		.key = "net.hostname",
		.value = "android-2845661b46d60c57",
	},
	{
		.key = "net.knoxscep.version",
		.value = "N/A",
	},
	{
		.key = "net.knoxsso.version",
		.value = "1.0.0",
	},
	{
		.key = "net.knoxvpn.version",
		.value = "2.2.0",
	},
	{
		.key = "net.mt.init",
		.value = "DONE",
	},
	{
		.key = "net.qtaguid_enabled",
		.value = "1",
	},
	{
		.key = "net.tcp.buffersize.default",
		.value = "4096,87380,110208,4096,16384,110208",
	},
	{
		.key = "net.tcp.buffersize.edge",
		.value = "4093,26280,35040,4096,16384,35040",
	},
	{
		.key = "net.tcp.buffersize.evdo",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.gprs",
		.value = "4092,8760,11680,4096,8760,11680",
	},
	{
		.key = "net.tcp.buffersize.hsdpa",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.hspa",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.hspap",
		.value = "4094,87380,1220608,4096,16384,1220608",
	},
	{
		.key = "net.tcp.buffersize.hsupa",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.lte",
		.value = "524288,1048576,2097152,262144,524288,1048576",
	},
	{
		.key = "net.tcp.buffersize.umts",
		.value = "4094,87380,110208,4096,16384,110208",
	},
	{
		.key = "net.tcp.buffersize.wifi",
		.value = "524288,1048576,2097152,262144,524288,1048576",
	},
	{
		.key = "net.tcp.default_init_rwnd",
		.value = "60",
	},
	{
		.key = "persist.audio.allsoundmute",
		.value = "0",
	},
	{
		.key = "persist.audio.headsetsysvolume",
		.value = "9",
	},
	{
		.key = "persist.audio.hphonesysvolume",
		.value = "9",
	},
	{
		.key = "persist.audio.ringermode",
		.value = "2",
	},
	{
		.key = "persist.audio.sysvolume",
		.value = "9",
	},
	{
		.key = "persist.modem.w.enable",
		.value = "1",
	},
	{
		.key = "persist.modem.w.nvp",
		.value = "w",
	},
	{
		.key = "persist.msms.phone_count",
		.value = "1",
	},
	{
		.key = "persist.msms.phone_default",
		.value = "0",
	},
	{
		.key = "persist.radio.gprsattachmode",
		.value = "1",
	},
	{
		.key = "persist.radio.initphone-type",
		.value = "1",
	},
	{
		.key = "persist.radio.plmnname_1",
		.value = "",
	},
	{
		.key = "persist.radio.plmnname_2",
		.value = "",
	},
	{
		.key = "persist.radio.readcheck",
		.value = "1",
	},
	{
		.key = "persist.radio.singlesim.network",
		.value = "1",
	},
	{
		.key = "persist.sys.bpmsetting.enable",
		.value = "0",
	},
	{
		.key = "persist.sys.clssprld2",
		.value = "718",
	},
	{
		.key = "persist.sys.country",
		.value = "US",
	},
	{
		.key = "persist.sys.dalvik.vm.lib",
		.value = "libdvm.so",
	},
	{
		.key = "persist.sys.engpc.disable",
		.value = "0",
	},
	{
		.key = "persist.sys.flipfontpath",
		.value = "default",
	},
	{
		.key = "persist.sys.language",
		.value = "en",
	},
	{
		.key = "persist.sys.localevar",
		.value = "",
	},
	{
		.key = "persist.sys.modem.diag",
		.value = ",gser",
	},
	{
		.key = "persist.sys.profiler_ms",
		.value = "0",
	},
	{
		.key = "persist.sys.setupwizard",
		.value = "FINISH",
	},
	{
		.key = "persist.sys.silent",
		.value = "0",
	},
	{
		.key = "persist.sys.sprd.modemreset",
		.value = "0",
	},
	{
		.key = "persist.sys.sprd.wcnreset",
		.value = "1",
	},
	{
		.key = "persist.sys.storage_preload",
		.value = "2",
	},
	{
		.key = "persist.sys.timezone",
		.value = "America/Los_Angeles",
	},
	{
		.key = "persist.sys.usb.config",
		.value = "mtp,adb",
	},
	{
		.key = "persist.sys.usb.mobex",
		.value = "0",
	},
	{
		.key = "persist.sys.usb.sport",
		.value = "1",
	},
	{
		.key = "persist.ttydev",
		.value = "ttyVUART0",
	},
	{
		.key = "ril.ICC_TYPE",
		.value = "0",
	},
	{
		.key = "ril.MSIMM",
		.value = "0",
	},
	{
		.key = "ril.RildInit",
		.value = "1",
	},
	{
		.key = "ril.SIMSLOT_EXCHANGED",
		.value = "0",
	},
	{
		.key = "ril.approved_codever",
		.value = "none",
	},
	{
		.key = "ril.approved_cscver",
		.value = "none",
	},
	{
		.key = "ril.atd_status",
		.value = "1_1_0",
	},
	{
		.key = "ril.boot_completed",
		.value = "1",
	},
	{
		.key = "ril.hw_ver",
		.value = "MP 0.300",
	},
	{
		.key = "ril.modem.board",
		.value = "sc7730s",
	},
	{
		.key = "ril.official_cscver",
		.value = "T113ZZH0AOG1",
	},
	{
		.key = "ril.product_code",
		.value = "SM-T113NDWATGY",
	},
	{
		.key = "ril.rfcal_date",
		.value = "Unknown",
	},
	{
		.key = "ril.serialnumber",
		.value = "R52J617K51J",
	},
	{
		.key = "ril.servicestate",
		.value = "1",
	},
	{
		.key = "ril.valid_certsig1",
		.value = "false",
	},
	{
		.key = "ril.valid_certsig2",
		.value = "false",
	},
	{
		.key = "ril.w.sim.power",
		.value = "1",
	},
	{
		.key = "ro.SecEDS.enable",
		.value = "false",
	},
	{
		.key = "ro.adb.qemud",
		.value = "1",
	},
	{
		.key = "ro.adb.secure",
		.value = "1",
	},
	{
		.key = "ro.allow.mock.location",
		.value = "0",
	},
	{
		.key = "ro.baseband",
		.value = "unknown",
	},
	{
		.key = "ro.board.platform",
		.value = "sc8830",
	},
	{
		.key = "ro.board_ram_size",
		.value = "mid",
	},
	{
		.key = "ro.boot.bootloader",
		.value = "T113ZHU0AOG1",
	},
	{
		.key = "ro.boot.debug_level",
		.value = "0x4f4c",
	},
	{
		.key = "ro.boot.emmc_checksum",
		.value = "0",
	},
	{
		.key = "ro.boot.serialno",
		.value = "3100818054f13400",
	},
	{
		.key = "ro.bootloader",
		.value = "T113ZHU0AOG1",
	},
	{
		.key = "ro.bootmode",
		.value = "unknown",
	},
	{
		.key = "ro.bt.bdaddr_path",
		.value = "/efs/bluetooth/bt_addr",
	},
	{
		.key = "ro.btwifisoftap.coexist",
		.value = "false",
	},
	{
		.key = "ro.build.PDA",
		.value = "T113ZHU0AOG1",
	},
	{
		.key = "ro.build.changelist",
		.value = "693337",
	},
	{
		.key = "ro.build.characteristics",
		.value = "tablet",
	},
	{
		.key = "ro.build.date.utc",
		.value = "1435823429",
	},
	{
		.key = "ro.build.date",
		.value = "Thu Jul  2 16:50:29 KST 2015",
	},
	{
		.key = "ro.build.description",
		.value = "goyavewifizh-user 4.4.4 KTU84P T113ZHU0AOG1 release-keys",
	},
	{
		.key = "ro.build.display.id",
		.value = "KTU84P.T113ZHU0AOG1",
	},
	{
		.key = "ro.build.fingerprint",
		.value = "samsung/goyavewifizh/goyavewifi:4.4.4/KTU84P/T113ZHU0AOG1:user/release-keys",
	},
	{
		.key = "ro.build.hidden_ver",
		.value = "T113ZHU0AOG1",
	},
	{
		.key = "ro.build.host",
		.value = "SWDD6109",
	},
	{
		.key = "ro.build.id",
		.value = "KTU84P",
	},
	{
		.key = "ro.build.knox.container",
		.value = "",
	},
	{
		.key = "ro.build.product",
		.value = "goyavewifi",
	},
	{
		.key = "ro.build.scafe.cream",
		.value = "white",
	},
	{
		.key = "ro.build.scafe.shot",
		.value = "half",
	},
	{
		.key = "ro.build.scafe.size",
		.value = "tall",
	},
	{
		.key = "ro.build.scafe",
		.value = "macchiato",
	},
	{
		.key = "ro.build.tags",
		.value = "release-keys",
	},
	{
		.key = "ro.build.type",
		.value = "user",
	},
	{
		.key = "ro.build.user",
		.value = "dpi",
	},
	{
		.key = "ro.build.version.codename",
		.value = "REL",
	},
	{
		.key = "ro.build.version.incremental",
		.value = "T113ZHU0AOG1",
	},
	{
		.key = "ro.build.version.release",
		.value = "4.4.4",
	},
	{
		.key = "ro.build.version.sdk",
		.value = "19",
	},
	{
		.key = "ro.carrier",
		.value = "wifi-only",
	},
	{
		.key = "ro.chipname",
		.value = "sc7730s",
	},
	{
		.key = "ro.com.android.dataroaming",
		.value = "false",
	},
	{
		.key = "ro.com.android.dateformat",
		.value = "MM-dd-yyyy",
	},
	{
		.key = "ro.com.google.clientidbase",
		.value = "android-samsung",
	},
	{
		.key = "ro.com.google.gmsversion",
		.value = "4.4_r7",
	},
	{
		.key = "ro.config.alarm_alert",
		.value = "Alarm_Morning_Flower.ogg",
	},
	{
		.key = "ro.config.knox",
		.value = "v00",
	},
	{
		.key = "ro.config.ksm.support",
		.value = "true",
	},
	{
		.key = "ro.config.low_ram",
		.value = "true",
	},
	{
		.key = "ro.config.media_sound",
		.value = "Media_preview_Touch_the_light.ogg",
	},
	{
		.key = "ro.config.notification_sound",
		.value = "S_Whistle.ogg",
	},
	{
		.key = "ro.config.notification_sound_2",
		.value = "S_On_Time.ogg",
	},
	{
		.key = "ro.config.ringtone",
		.value = "Over_the_horizon.ogg",
	},
	{
		.key = "ro.config.ringtone_2",
		.value = "Fog_on_the_Water.ogg",
	},
	{
		.key = "ro.config.rm_preload_enabled",
		.value = "0",
	},
	{
		.key = "ro.config.zram.support",
		.value = "true",
	},
	{
		.key = "ro.crypto.fuse_sdcard",
		.value = "true",
	},
	{
		.key = "ro.crypto.state",
		.value = "unencrypted",
	},
	{
		.key = "ro.csc.country_code",
		.value = "Hong Kong",
	},
	{
		.key = "ro.csc.countryiso_code",
		.value = "HK",
	},
	{
		.key = "ro.csc.sales_code",
		.value = "TGY",
	},
	{
		.key = "ro.debug_level",
		.value = "0x4f4c",
	},
	{
		.key = "ro.debuggable",
		.value = "0",
	},
	{
		.key = "ro.error.receiver.default",
		.value = "com.samsung.receiver.error",
	},
	{
		.key = "ro.factorytest",
		.value = "0",
	},
	{
		.key = "ro.hardware",
		.value = "sc8830",
	},
	{
		.key = "ro.hotspot.enabled",
		.value = "1",
	},
	{
		.key = "ro.hwui.drop_shadow_cache_size",
		.value = "2",
	},
	{
		.key = "ro.hwui.gradient_cache_size",
		.value = "0.5",
	},
	{
		.key = "ro.hwui.layer_cache_size",
		.value = "16",
	},
	{
		.key = "ro.hwui.path_cache_size",
		.value = "4",
	},
	{
		.key = "ro.hwui.shape_cache_size",
		.value = "1",
	},
	{
		.key = "ro.hwui.text_large_cache_height",
		.value = "1024",
	},
	{
		.key = "ro.hwui.text_large_cache_width",
		.value = "2048",
	},
	{
		.key = "ro.hwui.text_small_cache_height",
		.value = "512",
	},
	{
		.key = "ro.hwui.text_small_cache_width",
		.value = "1024",
	},
	{
		.key = "ro.hwui.texture_cache_size",
		.value = "24",
	},
	{
		.key = "ro.kernel.qemu",
		.value = "0",
	},
	{
		.key = "ro.modem.w.assert",
		.value = "/dev/spipe_w2",
	},
	{
		.key = "ro.modem.w.count",
		.value = "1",
	},
	{
		.key = "ro.modem.w.dev",
		.value = "/dev/cpw",
	},
	{
		.key = "ro.modem.w.diag",
		.value = "/dev/slog_w",
	},
	{
		.key = "ro.modem.w.eth",
		.value = "rmnet",
	},
	{
		.key = "ro.modem.w.fixnv_size",
		.value = "0x40000",
	},
	{
		.key = "ro.modem.w.id",
		.value = "0",
	},
	{
		.key = "ro.modem.w.loop",
		.value = "/dev/spipe_w0",
	},
	{
		.key = "ro.modem.w.nv",
		.value = "/dev/spipe_w1",
	},
	{
		.key = "ro.modem.w.runnv_size",
		.value = "0x60000",
	},
	{
		.key = "ro.modem.w.snd",
		.value = "1",
	},
	{
		.key = "ro.modem.w.tty",
		.value = "/dev/stty_w",
	},
	{
		.key = "ro.modem.w.vbc",
		.value = "/dev/spipe_w6",
	},
	{
		.key = "ro.msms.phone_count",
		.value = "1",
	},
	{
		.key = "ro.opengles.version",
		.value = "131072",
	},
	{
		.key = "ro.product.board",
		.value = "sc7730s",
	},
	{
		.key = "ro.product.brand",
		.value = "samsung",
	},
	{
		.key = "ro.product.cpu.abi2",
		.value = "armeabi",
	},
	{
		.key = "ro.product.cpu.abi",
		.value = "armeabi-v7a",
	},
	{
		.key = "ro.product.device",
		.value = "goyavewifi",
	},
	{
		.key = "ro.product.hardware",
		.value = "PIKEAYOUNG2DTV_V1.0.0",
	},
	{
		.key = "ro.product.locale.language",
		.value = "en",
	},
	{
		.key = "ro.product.locale.region",
		.value = "GB",
	},
	{
		.key = "ro.product.manufacturer",
		.value = "samsung",
	},
	{
		.key = "ro.product.model",
		.value = "SM-T113",
	},
	{
		.key = "ro.product.name",
		.value = "goyavewifizh",
	},
	{
		.key = "ro.product.partitionpath",
		.value = "/dev/block/platform/sprd-sdhci.3/by-name/",
	},
	{
		.key = "ro.product_ship",
		.value = "true",
	},
	{
		.key = "ro.radio.noril",
		.value = "no",
	},
	{
		.key = "ro.revision",
		.value = "4",
	},
	{
		.key = "ro.ril.ecclist",
		.value = "112,911,#911,*911",
	},
	{
		.key = "ro.ril.gprsclass",
		.value = "10",
	},
	{
		.key = "ro.ril.hsxpa",
		.value = "1",
	},
	{
		.key = "ro.runtime.firstboot",
		.value = "1508437195165",
	},
	{
		.key = "ro.sec.fle.encryption",
		.value = "true",
	},
	{
		.key = "ro.secure",
		.value = "1",
	},
	{
		.key = "ro.serialno",
		.value = "3100818054f13400",
	},
	{
		.key = "ro.setupwizard.mode",
		.value = "OPTIONAL",
	},
	{
		.key = "ro.sf.hwrotation",
		.value = "270",
	},
	{
		.key = "ro.sf.lcd_density",
		.value = "160",
	},
	{
		.key = "ro.sf.lcd_height",
		.value = "90",
	},
	{
		.key = "ro.sf.lcd_width",
		.value = "154",
	},
	{
		.key = "ro.storage.flash_type",
		.value = "2",
	},
	{
		.key = "ro.telephony.call_ring.multiple",
		.value = "0",
	},
	{
		.key = "ro.wifi.channels",
		.value = "",
	},
	{
		.key = "ro.zygote.disable_gl_preload",
		.value = "false",
	},
	{
		.key = "sec.fle.encryption.status",
		.value = "Dec NewFile IncludeMedia",
	},
	{
		.key = "service.bootanim.exit",
		.value = "1",
	},
	{
		.key = "service.media.powersnd",
		.value = "1",
	},
	{
		.key = "slog.listen",
		.value = "1",
	},
	{
		.key = "slog.reload",
		.value = "0",
	},
	{
		.key = "status.battery.level",
		.value = "10",
	},
	{
		.key = "status.battery.level_raw",
		.value = "100",
	},
	{
		.key = "status.battery.level_scale",
		.value = "10",
	},
	{
		.key = "status.battery.state",
		.value = "Slow",
	},
	{
		.key = "storage.mmc.size",
		.value = "7818182656",
	},
	{
		.key = "sys.boot_completed",
		.value = "1",
	},
	{
		.key = "sys.cameramode.blackbox",
		.value = "0",
	},
	{
		.key = "sys.cameramode.vtcall",
		.value = "0",
	},
	{
		.key = "sys.factory.mediaScanningCount",
		.value = "4",
	},
	{
		.key = "sys.factory.runningFtClient",
		.value = "true",
	},
	{
		.key = "sys.settings_global_version",
		.value = "6",
	},
	{
		.key = "sys.settings_secure_version",
		.value = "4",
	},
	{
		.key = "sys.settings_system_version",
		.value = "25",
	},
	{
		.key = "sys.siop.level",
		.value = "1",
	},
	{
		.key = "sys.ssrm.mdnie",
		.value = "-1",
	},
	{
		.key = "sys.symlink.umts_router",
		.value = "/dev/pts/7  /dev/umts_router",
	},
	{
		.key = "sys.sysctl.extra_free_kbytes",
		.value = "7200",
	},
	{
		.key = "sys.sysctl.tcp_def_init_rwnd",
		.value = "60",
	},
	{
		.key = "sys.usb.config",
		.value = "mtp,adb",
	},
	{
		.key = "sys.usb.gser.count",
		.value = "4",
	},
	{
		.key = "sys.usb.state",
		.value = "mtp,adb",
	},
	{
		.key = "sys.vm.swappiness",
		.value = "100",
	},
	{
		.key = "vold.post_fs_data_done",
		.value = "1",
	},
	{
		.key = "wifi.interface",
		.value = "wlan0",
	},
	{
		.key = "wlan.driver.status",
		.value = "ok",
	},
	{
		.key = "zram.disksize",
		.value = "300",
	},
	{NULL},
};
#endif /* __ANDROID__ */
