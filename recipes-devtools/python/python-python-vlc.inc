SUMMARY = "VLC bindings for python."

DESCRIPTION = "\
This module provides ctypes-based bindings for the native libvlc API (see http://wiki.videolan.org/LibVLC) of the VLC video player. \
It is automatically generated from the include files if they are available. \
"

HOMEPAGE = "http://wiki.videolan.org/PythonBinding"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"

RDEPENDS_${PN} = "libvlc"

PYPI_PACKAGE = "python-vlc"
inherit pypi

SRC_URI[md5sum] = "72238ce66326529a3f7f32c5283b39f6"
SRC_URI[sha256sum] = "9727819d0051bfc21a17bf355f917a503be6bafdaa7c414d6bf81acc7081081d"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
