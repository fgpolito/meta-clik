SUMMARY = "Clean single-source support for Python 3 and 2"

DESCRIPTION = "\
future is the missing compatibility layer between Python 2 and Python 3. \
It allows you to use a single, clean Python 3.x-compatible codebase to support both Python 2 and Python 3 with minimal overhead. \
"

HOMEPAGE = "https://python-future.org/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=3f457538b297bd0ef86564b8ac216ad7"

RDEPENDS_${PN} += "${PYTHON_PN}-2to3"

PYPI_PACKAGE = "future"
inherit pypi

SRC_URI[md5sum] = "3e8e88a2bda48d54b1da7634d04760d7"
SRC_URI[sha256sum] = "e39ced1ab767b5936646cedba8bcce582398233d6a627067d4c6a454c90cfedb"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
