SUMMARY = "Python interface to CMU Sphinxbase and Pocketsphinx libraries"
HOMEPAGE = "https://github.com/bambocher/pocketsphinx-python"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=826ebda787eb48e78aec2624f9faba72"
DEPENDS = "pulseaudio swig-native"

RDEPENDS_${PN} += "libpulse"

PYPI_PACKAGE = "pocketsphinx"
inherit pypi

SRC_URI[md5sum] = "e8401e131f7a193ea49ad77aa6c846e3"
SRC_URI[sha256sum] = "ac125aadefc85ab78706a4d18ae66c3dcf89eb9e2a0cbd88c7a6086df420346d"

BBCLASSEXTEND = "native nativesdk"
