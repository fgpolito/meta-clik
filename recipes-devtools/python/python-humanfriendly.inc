SUMMARY = "Human friendly output for text interfaces using Python"

DESCRIPTION = "\
The functions and classes in the humanfriendly package can be used to make text interfaces more user friendly. Some example features: \
- Parsing and formatting numbers, file sizes, pathnames and timespans in simple, human friendly formats. \
- Easy to use timers for long running operations, with human friendly formatting of the resulting timespans. \
- Prompting the user to select a choice from a list of options by typing the option’s number or a unique substring of the option. \
- Terminal interaction including text styling (ANSI escape sequences), user friendly rendering of usage messages and querying the terminal for its size. \
"

HOMEPAGE = "https://humanfriendly.readthedocs.io/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=d4b9bfd363e871d2be165d0372c0169f"

PYPI_PACKAGE = "humanfriendly"
inherit pypi

SRC_URI[md5sum] = "15f3373ca9b99d1a15f301a5c45f88db"
SRC_URI[sha256sum] = "f1ebb406d37478228b92543c12c27c9a827782d8d241260b3a06512c7f7c3a5e"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
