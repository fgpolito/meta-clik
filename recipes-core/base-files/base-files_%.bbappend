do_install_append () {
    cat >> ${D}${sysconfdir}/fstab <<EOF
# Mount the boot partition on /boot
/dev/mmcblk0p1		/boot		auto		defaults	0	0
EOF
}
