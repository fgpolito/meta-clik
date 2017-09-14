SUMMARY = "Highly-optimized, pure-python HTTP server"
DESCRIPTION = "\
Cheroot is the high-performance, pure-Python HTTP server used by CherryPy. \
"
HOMEPAGE = "https://github.com/cherrypy/cheroot"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7c3ce8ced2013f1e06ade270c344f4f8"

PYPI_PACKAGE = "cheroot"
inherit pypi

SRC_URI[md5sum] = "b4cba234ec42ae9cdc182abb8be06855"
SRC_URI[sha256sum] = "5c0531fd732700b1fb3e6e7079dc3aefbdf29e9136925633d93f009cb87d70a3"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    "

BBCLASSEXTEND = "native nativesdk"
