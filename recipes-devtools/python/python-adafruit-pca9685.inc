SUMMARY = "Python code to use the PCA9685 PWM servo/LED controller with a Raspberry Pi or BeagleBone Black."

HOMEPAGE = "https://github.com/adafruit/Adafruit_Python_PCA9685/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://PKG-INFO;md5=baea7c6ea8524fd513eb9452026e47c4"

PYPI_PACKAGE = "Adafruit_PCA9685"
inherit pypi

SRC_URI[md5sum] = "34a9c2bc0e2e7a58d0d005d5d5ac42a2"
SRC_URI[sha256sum] = "24d632c912a23f44416369555f3f39f2509975b89d37955f125bc009040a1dfd"

CLEANBROKEN = "1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-adafruit-gpio \
    "

BBCLASSEXTEND = "native nativesdk"
