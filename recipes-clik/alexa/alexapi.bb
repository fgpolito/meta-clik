SUMMARY = "Alexa client for all your devices!"

DESCRIPTION = "This is a client for Amazon's Alexa service. \
It is intended and tested to run on a wide range of platforms, \
such as Raspberry Pi, Orange Pi, \
CHIP and ordinary Linux desktops."

HOMEPAGE = "https://github.com/alexa-pi/AlexaPi"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1d0e51f67100e3dc1a39b4653653a38c"

ALEXAPI_PYTHON ?= "python"

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
	"
# depend on python packages
RDEPENDS_${PN} = "${ALEXAPI_REQUIREMENTS}" 

SRC_URI="git://github.com/alexa-pi/AlexaPi.git;branch=master"
SRCREV = "ae8c2ed84ff9aed5f51946fb5d2e51d3736c8db0"
