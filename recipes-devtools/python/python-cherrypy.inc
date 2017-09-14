SUMMARY = "Object-Oriented HTTP framework"
DESCRIPTION = "\
CherryPy allows developers to build web applications \
in much the same way they would build any other \
object-oriented Python program. \
This results in smaller source code developed in less time. \
"
HOMEPAGE = "http://cherrypy.org"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7c3ce8ced2013f1e06ade270c344f4f8"

PYPI_PACKAGE = "CherryPy"
inherit pypi

SRC_URI[md5sum] = "3caf903447ed39057466256fa9c69554"
SRC_URI[sha256sum] = "5671f88c8dd8aecaac650761d18f74a2789b88a9337eb7433abe92a5e0be6780"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-portend \
    ${PYTHON_PN}-cheroot \
    "

BBCLASSEXTEND = "native nativesdk"
