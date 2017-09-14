SUMMARY = "TCP port monitoring utilities"
DESCRIPTION = "\
be a sign or warning that (something, especially something momentous or calamitous) is likely to happen. \
"
HOMEPAGE = "https://github.com/jaraco/portend"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://README.rst;md5=944922c42dde33733caa394a8b9d3ecb"

PYPI_PACKAGE = "portend"
inherit pypi

SRC_URI[md5sum] = "e0d1469994a1b12fdb4104e14996ccd6"
SRC_URI[sha256sum] = "8407621ba5f095439b19dedaf38f0911a7f261e1f4b74a74e9d513637358a837"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-tempora \
    "

BBCLASSEXTEND = "native nativesdk"
