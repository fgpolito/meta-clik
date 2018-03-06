SUMMARY = "OAuth 2.0 client library"
DESCRIPTION = "\
oauth2client is a client library for OAuth 2.0. \
"

HOMEPAGE = "http://github.com/google/oauth2client/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=94023d14f6b58272fd885e4e3f2f08b3"

PYPI_PACKAGE = "oauth2client"
inherit pypi

SRC_URI[md5sum] = "bc30976cd1e859cd6199264a50c5ba72"
SRC_URI[sha256sum] = "bd3062c06f8b10c6ef7a890b22c2740e5f87d61b6e1f4b1c90d069cdfc9dadb5"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-rsa \
    ${PYTHON_PN}-pyasn1-modules \
    ${PYTHON_PN}-pyasn1 \
    ${PYTHON_PN}-httplib2 \
    "
