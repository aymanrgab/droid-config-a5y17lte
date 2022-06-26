#!/bin/bash
vendor_part=/data/.stowaways/vendor.img
system_part=/data/.stowaways/system.img

dmesg_info() {
    echo "[mount-partitions.sh] $@" > /dev/kmsg
}

dmesg_info "Mount dynamic partitions"
mkdir -p /system_root /vendor /system

dmesg_info "$(mount -v -o loop,ro,barrier=1,discard -t ext4 $system_part /system_root)"
dmesg_info "$(mount --bind /system_root/system /system)"
dmesg_info "$(mount -v -o loop,ro,barrier=1,discard -t ext4 $vendor_part /vendor)"

if ! grep -q hybris /system/etc/ld.config.29.txt; then
    mount -o bind /usr/libexec/droid-hybris/system/etc/ld.config.29.txt /system/etc/ld.config.29.txt
fi

