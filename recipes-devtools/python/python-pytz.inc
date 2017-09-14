SUMMARY = "World timezone definitions, modern and historical"

DESCRIPTION = "\
pytz brings the Olson tz database into Python. This library allows \
accurate and cross platform timezone calculations using Python 2.4 \
or higher. It also solves the issue of ambiguous times at the end \
of daylight saving time, which you can read more about in the Python \
Library Reference (``datetime.tzinfo``). \
Almost all of the Olson timezones are supported. \
"

HOMEPAGE = "http://pythonhosted.org/pytz"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=39ea92752a35cf67d8a885d8e3af3c69"

PYPI_PACKAGE = "pytz"
PYPI_PACKAGE_EXT = "zip"
inherit pypi

SRC_URI[md5sum] = "f89bde8a811c8a1a5bac17eaaa94383c"
SRC_URI[sha256sum] = "f5c056e8f62d45ba8215e5cb8f50dfccb198b4b9fbea8500674f3443e4689589"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
