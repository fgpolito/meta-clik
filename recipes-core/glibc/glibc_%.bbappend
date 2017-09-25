FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI += 	" \
		file://0001-Export-libc_pthread_atfork-in-static-mode.patch \
		file://0001-Export-the-symbol-pthread_atfork.patch \
		"
