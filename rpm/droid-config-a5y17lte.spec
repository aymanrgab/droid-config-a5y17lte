%define device a5y17lte
%define vendor samsung
%define vendor_pretty SAMSUNG
%define device_pretty Samsung A5 2017
%define android_version_major 10
%define community_adaptation 1
%define have_modem 1
%define pixel_ratio 1.5

Provides: ofono-configs
Obsoletes: ofono-configs-mer


%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-a5y17lte.inc
%include patterns/patterns-sailfish-device-configuration-a5y17lte.inc

