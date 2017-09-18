SUMMARY = "Alexa client for all your devices!"

DESCRIPTION = "This is a client for Amazon's Alexa service. \
It is intended and tested to run on a wide range of platforms, \
such as Raspberry Pi, Orange Pi, \
CHIP and ordinary Linux desktops."

HOMEPAGE = "https://github.com/fgpolito/AlexaPi"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1d0e51f67100e3dc1a39b4653653a38c"

ALEXAPI_PYTHON ?= "python"

DEPENDS = "${ALEXAPI_PYTHON}-native"

inherit autotools ${ALEXAPI_PYTHON}-dir

ALEXAPI_REQUIREMENTS = " \
	${ALEXAPI_PYTHON}-requests \
	${ALEXAPI_PYTHON}-cherrypy \
	${ALEXAPI_PYTHON}-pyalsaaudio \
	${ALEXAPI_PYTHON}-webrtcvad \
	${ALEXAPI_PYTHON}-rpigpio \
	${ALEXAPI_PYTHON}-pyyaml \
	${ALEXAPI_PYTHON}-pocketsphinx \
	${ALEXAPI_PYTHON}-coloredlogs \
	${ALEXAPI_PYTHON}-future \
	${ALEXAPI_PYTHON}-python-vlc \
	${ALEXAPI_PYTHON}-importlib \
	${ALEXAPI_PYTHON}-multiprocessing \
	${ALEXAPI_PYTHON}-xml \
	${ALEXAPI_PYTHON}-argparse \
	"
# depend on python packages
RDEPENDS_${PN} = "${ALEXAPI_REQUIREMENTS}" 

SRC_URI= " \
	git://github.com/fgpolito/AlexaPi.git;branch=master \
	file://0001-Fixed-import-name.patch \
	"
SRCREV = "5696ef6fcb2131be81ae69ee69eef20c067afc86"

#explicitly set source dir as we are building from SCM
S = "${WORKDIR}/git"

FILES_${PN} = " \
		${bindir}/AlexaPi \
		${bindir}/AlexaAuth \
		${libdir}/systemd/system/* \
		${PYTHON_SITEPACKAGES_DIR}/alexapi/* \
		${PYTHON_SITEPACKAGES_DIR}/alexapi/device_platforms/* \
		${PYTHON_SITEPACKAGES_DIR}/alexapi/playback_handlers/* \
		${PYTHON_SITEPACKAGES_DIR}/alexapi/triggers/* \
		${sysconfdir}/AlexaPi/* \
		"
do_configure_prepend() {
	autoreconf -i ${S}
}