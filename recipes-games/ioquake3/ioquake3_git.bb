SUMMARY = "ioquake3 is a baseline Quake 3 which may be used for further development and baseq3 fun."

DESCRIPTION = "The ioquake3 community effort to continue supporting/developing id's Quake III Arena http://www.ioquake3.org/"

SECTION = "games"
HOMEPAGE = "https://github.com/ioquake/ioq3"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING.txt;md5=87113aa2b484c59a17085b5c3f900ebf"

SRC_URI = "git://github.com/ioquake/ioq3.git;branch=master"

SRCREV = "45de6be4c233891eb70e5592f3287a4af39d6002"

S = "${WORKDIR}/git"

DEPENDS = "libsdl2 curl zlib libjpeg-turbo libogg libopus opusfile"

COPYDIR = "${D}${datadir}/${PN}"
export COPYDIR

COPYBINDIR = "${D}${bindir}"
export COPYBINDIR

DEFAULT_BASEDIR="${datadir}/${PN}"
export DEFAULT_BASEDIR

# do not strip right in 'copyfiles' target. Let bitbake do it.
NO_STRIP = "1"
export NO_STRIP

# do not use internal libs
USE_INTERNAL_LIBS = "0"
export USE_INTERNAL_LIBS

# use standard system headers
USE_LOCAL_HEADERS = "0"
export LOCAL_HEADERS

# do not use openAL
USE_OPENAL = "0"
export USE_OPENAL

#do not build the renderers as external libraries
USE_RENDERER_DLOPEN = "0"
export USE_RENDERER_DLOPEN

ARCH= "${TRANSLATED_TARGET_ARCH}"
export ARCH

inherit pkgconfig

do_install () {
	mkdir -p ${COPYDIR}
	mkdir -p ${COPYBINDIR}
	oe_runmake copyfiles
}
