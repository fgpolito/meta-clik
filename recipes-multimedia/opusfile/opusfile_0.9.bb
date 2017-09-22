SUMMARY = "Opusfile support library"
DESCRIPTION = "Opusfile provides application developers with a high-level API for decoding and seeking in .opus files. \
DLLs for the required libraries libogg 1.3.2, libopus 1.1.1 and openssl, are also included in the binary package. \
"

HOMEPAGE = "http://www.opus-codec.org"
SECTION = "libs/multimedia"

LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://COPYING;md5=6ac22b992dde6a891f8949c3e2da8576"

SRC_URI = "https://archive.mozilla.org/pub/opus/opusfile-${PV}.tar.gz"

SRC_URI[md5sum] = "a08a6735476516d60fb226ad9ae191ff"
SRC_URI[sha256sum] = "f75fb500e40b122775ac1a71ad80c4477698842a8fe9da4a1b4a1a9f16e4e979"

DEPENDS = "libogg libopus openssl"

inherit autotools pkgconfig
