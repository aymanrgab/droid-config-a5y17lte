%define device a5y17lte
%define vendor samsung
%define vendor_pretty SAMSUNG
%define device_pretty Samsung A5 2017
%define android_version_major 10
%define community_adaptation 1
%define have_modem 1
%define pixel_ratio 1.25

Provides: ofono-configs
Obsoletes: ofono-configs-mer
Obsoletes: ofono-configs-binder

%define ofono_enable_plugins bluez5,hfp_ag_bluez5
%define ofono_disable_plugins bluez4,dun_gw_bluez4,hfp_ag_bluez4,hfp_bluez4,dun_gw_bluez5,hfp_bluez5

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-a5y17lte.inc
%include patterns/patterns-sailfish-device-configuration-a5y17lte.inc

