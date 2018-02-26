DESCRIPTION = "A pure Python interface for the Raspberry Pi camera module."
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=a5f6282f39d52726bdc1e51d5c4b95c9"

FILESEXTRAPATHS_prepend := "${THISDIR}/python-picamera:"

SRC_URI += "file://0001-Remove-stupid-checks.patch"

SRC_URI[md5sum] = "47e815b0f21bba2a91ab3c4cd36c6f90"
SRC_URI[sha256sum] = "890815aa01e4d855a6a95dd3ad0953b872a6b954982106407df0c5a31a163e50"

PYPI_PACKAGE = "picamera"

inherit pypi setuptools3

DEPENDS +=	" \
		virtual/libgles2 \
		virtual/egl \
		"

RDEPENDS_${PN} += ""
