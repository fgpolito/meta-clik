SUMMARY = "Bindings for PortAudio v19, the cross-platform audio input/output stream library."

DESCRIPTION = " \
	PyAudio provides Python bindings for PortAudio, the cross-platform audio I/O library. \
	With PyAudio, you can easily use Python to play and record audio on a variety of platforms, \
	such as GNU/Linux, Microsoft Windows, and Apple Mac OS X / macOS. \
	\
	PyAudio is inspired by: \
	pyPortAudio/fastaudio: Python bindings for PortAudio v18 API. \
	tkSnack: cross-platform sound toolkit for Tcl/Tk and Python. \
	"

HOMEPAGE = "http://people.csail.mit.edu/hubert/pyaudio/"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

DEPENDS += "portaudio-v19"

RDEPENDS_${PN} += ""

PYPI_PACKAGE = "PyAudio"
PYPI_PACKAGE_EXT = "tar.gz"
inherit pypi

SRC_URI[md5sum] = "7e4c88139284033f67b4336c74eda3b8"
SRC_URI[sha256sum] = "93bfde30e0b64e63a46f2fd77e85c41fd51182a4a3413d9edfaf9ffaa26efb74"

CLEANBROKEN = "1"
