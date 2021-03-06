SUMMARY = "Simple, libv4l2 based frame grabber"

DESCRIPTION = "A simple, libv4l2-based frames capture library."

HOMEPAGE = "https://gitlab.com/radish/PyV4L2Camera"
LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0;md5=c79ff39f19dfec6d293b95dea7b07891"

DEPENDS += "libv4l"

RDEPENDS_${PN} += "${PYTHON_PN}-typing"

PYPI_PACKAGE = "PyV4L2Camera"
PYPI_PACKAGE_EXT = "tar.gz"
inherit pypi

SRC_URI[md5sum] = "4e91636068119c5cc06830c8d9c1cc86"
SRC_URI[sha256sum] = "5dff80cf3391f9c38ba0803895e9b84e83ba5e53ffe8174b124353f9cf256a65"

CLEANBROKEN = "1"

#BBCLASSEXTEND = "native nativesdk"
