#!/bin/bash

if ! grep -q hybris /system/etc/ld.config.29.txt; then
    mount -o bind /usr/libexec/droid-hybris/system/etc/ld.config.29.txt /system/etc/ld.config.29.txt
fi
mount -o bind /system/lib64/hw/audio.hidl_compat.default.so /vendor/lib64/hw/audio.primary.default.so
