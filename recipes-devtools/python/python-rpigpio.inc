SUMMARY = "A module to control Raspberry Pi GPIO channels"
DESCRIPTION = "\
This package provides a class to control the GPIO on a Raspberry Pi. \
\
Note that this module is unsuitable for real-time or timing critical applications. \
This is because you can not predict when Python will be busy garbage collecting. \
It also runs under the Linux kernel which is not suitable for real time applications - it is multitasking O/S and another process may be given priority over the CPU, causing jitter in your program. \
If you are after true real-time performance and predictability, buy yourself an Arduino http://www.arduino.cc ! \
\
Note that the current release does not support SPI, I2C, hardware PWM or serial functionality on the RPi yet. \
This is planned for the near future - watch this space! One-wire functionality is also planned. \
\
Although hardware PWM is not available yet, software PWM is available to use on all channels. \
"
HOMEPAGE = "http://sourceforge.net/projects/raspberry-gpio-python/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENCE.txt;md5=9b95630a648966b142f1a0dcea001cb7"

PYPI_PACKAGE = "RPi.GPIO"
inherit pypi

SRC_URI[md5sum] = "e4abe1cfb5eacebe53078032256eb837"
SRC_URI[sha256sum] = "a5fc0eb5e401963b6c0a03650da6b42c4005f02d962b81241d96c98d0a578516"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
