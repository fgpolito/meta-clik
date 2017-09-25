DESCRIPTION = "Rapid Alexa Skills Kit Development for Amazon Echo Devices in Python"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=c4b850cdd72903c20e379f654960c3bd"

SRC_URI[md5sum] = "fbe067944ffd7733671e7839841b01e6"
SRC_URI[sha256sum] = "1db3da771321ed0314bbe601de65b43592eda560da60e5a7097e9aae0491ec1f"

PYPI_PACKAGE = "Flask-Ask"

inherit pypi setuptools

DEPENDS += "${PYTHON_PN}-pip-native"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-flask \
    "
