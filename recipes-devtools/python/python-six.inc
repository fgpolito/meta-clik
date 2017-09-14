SUMMARY = "Python 2 and 3 compatibility utilities"

DESCRIPTION = "\
Six is a Python 2 and 3 compatibility library. \
It provides utility functions for smoothing over the differences between the Python versions with the goal of writing Python code that is compatible on both Python versions.\
See the documentation for more information on what is provided. \
Six supports every Python version since 2.6. \
It is contained in only one Python file, so it can be easily copied into your project. \
(The copyright and license notice must be retained.) \
Online documentation is at https://pythonhosted.org/six/. \
Bugs can be reported to https://github.com/benjaminp/six. \
The code can also be found there. \
For questions about six or porting in general, \
email the python-porting mailing list: https://mail.python.org/mailman/listinfo/python-porting \
"

HOMEPAGE = "http://pypi.python.org/pypi/six/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6f00d4a50713fa859858dd9abaa35b21"

PYPI_PACKAGE = "six"
inherit pypi

SRC_URI[md5sum] = "34eed507548117b2ab523ab14b2f8b55"
SRC_URI[sha256sum] = "105f8d68616f8248e24bf0e9372ef04d3cc10104f1980f54d57b2ce73a5ad56a"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
