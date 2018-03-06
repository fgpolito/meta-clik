SUMMARY = "A comprehensive HTTP client library."
DESCRIPTION = "\
A comprehensive HTTP client library, httplib2 supports many features left out of other HTTP libraries. \
"

HOMEPAGE = "https://github.com/httplib2/httplib2"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PYPI_PACKAGE = "httplib2"
inherit pypi

SRC_URI[md5sum] = "709c305e1b00e9c0af49ee816429569c"
SRC_URI[sha256sum] = "e404d3b7bd86c1bc931906098e7c1305d6a3a6dcef141b8bb1059903abb3ceeb"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    "
