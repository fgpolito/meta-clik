SUMMARY = "Pure python (i.e. no native extensions) access to Linux IO including I2C and SPI. Drop in replacement for smbus and spidev modules."

HOMEPAGE = "https://github.com/adafruit/Adafruit_Python_PureIO/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://PKG-INFO;md5=751e7ad80b4739464d33cdaa83adc8b3"

PYPI_PACKAGE = "Adafruit_PureIO"
inherit pypi

SRC_URI[md5sum] = "5b3276059eb55d6c37429a8413a92029"
SRC_URI[sha256sum] = "09d18650e62b72f07619af8efe421a991b15c55cfe7e17bb03f51b71a4e4954d"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
