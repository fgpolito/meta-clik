# Base this image on core-image-minimal and qemu-arm support 
include recipes-core/images/core-image-minimal.bb

# Include openjre8 in image
IMAGE_INSTALL += " \
	openjre-8 \
	"
