do_install_append () {
    cat >> ${D}${sysconfdir}/fstab <<EOF
# Mount the boot partition on /boot
/dev/mmcblk0p1		/boot		auto		defaults	0	0
EOF
}

do_install_append () {
    mkdir -p ${D}${sysconfdir}/modules-load.d/
    touch ${D}${sysconfdir}/modules-load.d/i2c_dev.conf
    touch ${D}${sysconfdir}/modules-load.d/i2c_bcm2835.conf
}

do_install_append () {
    cat >> ${D}${sysconfdir}/modules-load.d/i2c_dev.conf <<EOF
# Autoload i2c_dev
i2c_dev
EOF
}

do_install_append () {
    cat >> ${D}${sysconfdir}/modules-load.d/i2c_bcm2835.conf <<EOF
# Autoload i2c_bcm2835
i2c_bcm2835
EOF
}
