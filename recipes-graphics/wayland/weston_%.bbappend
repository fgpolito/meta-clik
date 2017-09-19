do_install_append () {
	mkdir -p ${D}${sysconfdir}/default
	touch ${D}${sysconfdir}/default/${PN}
	echo 'XDG_RUNTIME_DIR=/run/${PN}-runtime-dir' \
	> ${D}${sysconfdir}/default/${PN}
}

FILES_${PN} += "${sysconfdir}/*"
