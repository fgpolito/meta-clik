SUMMARY = "Google API Client Library for Python"
DESCRIPTION = "\
The Google API Client for Python is a client library for accessing the Plus, Moderator, and many other Google APIs.\
"

HOMEPAGE = "http://github.com/google/google-api-python-client/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=94023d14f6b58272fd885e4e3f2f08b3"

PYPI_PACKAGE = "google-api-python-client"
inherit pypi

SRC_URI[md5sum] = "8945067988300d31ac3b11bafadaa791"
SRC_URI[sha256sum] = "95ce394028754ec537e5791e811511fdd5fabe6f1f8879407a8daed71ecb0b4c"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-uritemplate \
    ${PYTHON_PN}-oauth2client \
    ${PYTHON_PN}-httplib2 \
    ${PYTHON_PN}-six \
    "
