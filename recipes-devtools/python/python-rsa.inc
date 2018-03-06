SUMMARY = "Pure-Python RSA implementation"
DESCRIPTION = "\
Python-RSA is a pure-Python RSA implementation. It supports \
encryption and decryption, signing and verifying signatures, and key \
generation according to PKCS#1 version 1.5. It can be used as a Python \
library as well as on the commandline. The code was mostly written by \
Sybren A. Stüvel. \
"

HOMEPAGE = "https://stuvel.eu/rsa"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c403f6882d4f97a9cd927df987d55634"

PYPI_PACKAGE = "rsa"
inherit pypi

SRC_URI[md5sum] = "b315f47882c24030ee6b5aad628cccdb"
SRC_URI[sha256sum] = "25df4e10c263fb88b5ace923dd84bf9aa7f5019687b5e55382ffcdb8bede9db5"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    "
