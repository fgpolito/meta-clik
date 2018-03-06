SUMMARY = "URI templates"
DESCRIPTION = "\
Simple python library to deal with URI Templates.\
"

HOMEPAGE = "https://uritemplate.readthedocs.org/"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE.BSD;md5=d51d83fdbd6608d10a71666840ef5d15"

PYPI_PACKAGE = "uritemplate"
inherit pypi

SRC_URI[md5sum] = "1ec31e0d8a2eec72357b2cef4bce5945"
SRC_URI[sha256sum] = "c02643cebe23fc8adb5e6becffe201185bf06c40bda5c0b4028a93f1527d011d"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    "
