# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-adaptation-a5y17lte
Summary: Jolla HW Adaptation a5y17lte
Requires: droid-hal-a5y17lte
Requires: droid-hal-a5y17lte-img-boot
Requires: droid-hal-a5y17lte-kernel-modules
Requires: droid-config-a5y17lte-sailfish
Requires: droid-config-a5y17lte-pulseaudio-settings
Requires: droid-config-a5y17lte-policy-settings
Requires: droid-config-a5y17lte-preinit-plugin
Requires: droid-config-a5y17lte-flashing
Requires: droid-config-a5y17lte-bluez5
Requires: droid-hal-version-a5y17lte
Requires: droid-hal-a5y17lte-detritus

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl

# The -dummy-af is needed for newer devices that run the main
# audiosystem-passthrough in qti mode (e.g. >=Android 9 Qualcomm),
# to fix non-responding Camera app and/or voice during a phone call:
#Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC support
# 1. binder plugin requires Android 8 or a newer base
# 2. pn54x plugin talks directly to pn54x driver
# These plugins are mutually exclusive, you need to pick one:
#Requires: nfcd-binder-plugin
#Requires: nfcd-pn54x-plugin

%description -n patterns-sailfish-device-adaptation-a5y17lte
Pattern with packages for a5y17lte HW Adaptation

%files -n patterns-sailfish-device-adaptation-a5y17lte
