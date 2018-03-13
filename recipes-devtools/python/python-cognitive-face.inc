SUMMARY = "Python SDK for the Cognitive Face API"

DESCRIPTION = "\
This repo contains the Python SDK for the Microsoft Face API, an offering within [Microsoft Cognitive Services](https://azure.microsoft.com/en-us/services/cognitive-services/) formerly known as Project Oxford. \
"
HOMEPAGE = "https://github.com/Microsoft/Cognitive-Face-Python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7150be27617cddba21950ca61de4da8f"

PYPI_PACKAGE = "cognitive_face"
inherit pypi

SRC_URI[md5sum] = "bc0c548f4fa346ec49a8415886bdbd0b"
SRC_URI[sha256sum] = "be37590a3701125e04351aa09a93b6f43c113ef24fab4b7fa61511f4e900fda8"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "${PYTHON_PN}-requests"
