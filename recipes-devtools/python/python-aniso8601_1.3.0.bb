DESCRIPTION = "A library for parsing ISO 8601 strings."
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=361867d99f201115bf8f7b2044aba60f"

SRC_URI[md5sum] = "d3c987293e4b5acf2004edf48cd19e9f"
SRC_URI[sha256sum] = "c3b5246f5601b6ae5671911bc4ee5b3e3fe94752e8afab5ce074d8b1232952f1"

PYPI_PACKAGE = "aniso8601"

inherit pypi setuptools

DEPENDS += ""

RDEPENDS_${PN} += "${PYTHON_PN}-dateutil"
