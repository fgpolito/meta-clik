# Base this image on rpi-basic-image
include recipes-core/images/rpi-basic-image.bb

require common.inc

IMAGES_INSTALL +=" \
		iw \
		"
