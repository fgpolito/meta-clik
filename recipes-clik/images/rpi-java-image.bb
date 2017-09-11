# Base this image on rpi-basic-image
include recipes-core/images/rpi-basic-image.bb

# Include openjre8 in image
IMAGE_INSTALL += " \
	openjre-8 \
	"
