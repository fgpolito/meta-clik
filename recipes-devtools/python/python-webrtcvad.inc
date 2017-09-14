SUMMARY = "Python interface to the Google WebRTC Voice Activity Detector (VAD)"

DESCRIPTION = "\
This is a python interface to the WebRTC Voice Activity Detector (VAD). It is compatible with Python 2 and Python 3. \
A VAD classifies a piece of audio data as being voiced or unvoiced. It can be useful for telephony and speech recognition. \
The VAD that Google developed for the WebRTC project is reportedly one of the best available, being fast, modern and free. \
"

HOMEPAGE = "https://github.com/wiseman/py-webrtcvad"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=425b45e5a79ac786f2f8e977a3beaad4"

PYPI_PACKAGE = "webrtcvad"
inherit pypi

SRC_URI[md5sum] = "213d2848aeebbbd22485d4ad630b5fdb"
SRC_URI[sha256sum] = "f1bed2fb25b63fb7b1a55d64090c993c9c9167b28485ae0bcdd81cf6ede96aea"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
