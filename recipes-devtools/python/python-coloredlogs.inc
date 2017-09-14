SUMMARY = "Colored terminal output for Python's logging module"
DESCRIPTION = "\
The coloredlogs package enables colored terminal output for Python’s logging module. \
The ColoredFormatter class inherits from logging. \
Formatter and uses ANSI escape sequences to render your logging messages in color. \
It uses only standard colors so it should work on any UNIX terminal. \
It’s currently tested on Python 2.6, 2.7, 3.4, 3.5, 3.6 and PyPy. \
"
HOMEPAGE = "https://coloredlogs.readthedocs.io/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=d4b9bfd363e871d2be165d0372c0169f"

PYPI_PACKAGE = "coloredlogs"
inherit pypi

SRC_URI[md5sum] = "b0f2630fbc188a956972b24da1e71a67"
SRC_URI[sha256sum] = "894641ed5e8c48e01fa0b1d62b15cd32030c6c16e1dda42f6ce5f966ac558cae"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-humanfriendly \
    "

BBCLASSEXTEND = "native nativesdk"

INSANE_SKIP_${PN} += "installed-vs-shipped"
