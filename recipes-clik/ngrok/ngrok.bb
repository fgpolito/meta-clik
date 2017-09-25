SRC_URI = "https://bin.equinox.io/c/4VmDzA7iaHb/ngrok-stable-linux-arm.zip"

SRC_URI[md5sum] = "16728ec3f08225ca1474bc0b51afac8a"
SRC_URI[sha256sum] = "2cef6b188b335649ac26cd3166c3522d8c8d033cfca5f5bfde7ed4b9e069fd11"

LICENSE = "CLOSED"

do_install() {
	mkdir -p ${D}${bindir}
	install ${WORKDIR}/ngrok -t ${D}${bindir}/
}
