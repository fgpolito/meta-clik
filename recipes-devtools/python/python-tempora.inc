SUMMARY = "Objects and routines pertaining to date and time (tempora)"

DESCRIPTION = "\
Objects and routines pertaining to date and time (tempora). \
Modules include: \
- tempora (top level package module) contains miscellaneous utilities and constants. \
- timing contains routines for measuring and profiling. \
- schedule contains an event scheduler. \
"

HOMEPAGE = "https://github.com/jaraco/tempora"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://README.rst;md5=4d61d04a1ee82d9b950a6fdeaa335c2a"

PYPI_PACKAGE = "tempora"
inherit pypi

SRC_URI[md5sum] = "8d97279cea5c3aab74d09b54083b2299"
SRC_URI[sha256sum] = "9ea980c63be54f83d2a466fccc6eeef96a409f74c5034764fb328b0d43247e96"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-pytz \
    "

BBCLASSEXTEND = "native nativesdk"
