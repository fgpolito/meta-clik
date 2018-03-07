SUMMARY = "Adaptive filtering module for Python"

DESCRIPTION = "\
Adaptfilt is an adaptive filtering module for Python. It includes simple, procedural implementations of the following filtering algorithms: \
\
Least-mean-squares (LMS) - including traditional and leaky filtering \
Normalized least-mean-squares (NLMS) - including traditional and leaky filtering with recursively updated input energy \
Affine projection (AP) - including traditional and leaky filtering \
"

HOMEPAGE = "https://github.com/Wramberg/adaptfilt"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=b12df1292595b31fcad305ef54824f71"

PYPI_PACKAGE = "adaptfilt"
inherit pypi

SRC_URI[md5sum] = "d6ff2b129d00a4d4caab63b147a75f7b"
SRC_URI[sha256sum] = "4d339d09f2efcd48d22adef14582c36df40859e44f92b5d3a4bd5999d2f05657"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-numpy \
    "
