# Base this image on rpi-basic-image
include recipes-core/images/rpi-basic-image.bb

IMAGE_INSTALL += " \
        alsa-plugins \
        alsa-utils \
        avahi-daemon \
        avahi-dnsconfd \
        sox \
        ntp \
        screen \
        connman \
        connman-client \
        systemd-extra-utils \
        connman-wait-online \
        i2c-tools \
	linux-firmware \
	opencv \
	python3-opencv \
	python3-pyv4l2camera \
	libgles2 \
	libegl \
	libgl \
	libv4l \
	media-ctl \
	userland \
	python3-picamera \
	"

RPI_EXTRA_MODULES=" \
	kernel-module-bcm203x \
	kernel-module-bcm2835-gpiomem \
	kernel-module-bcm2835-smi \ 
	kernel-module-bcm2835-smi-dev \
	kernel-module-bcm2835-smi-nand \
	kernel-module-bcm2835-v4l2 \
	kernel-module-bcm3510 \
	kernel-module-bcma \
	kernel-module-btbcm \
	kernel-module-can-bcm \
	kernel-module-i2c-bcm2708 \
	kernel-module-i2c-bcm2835 \
	kernel-module-pwm-bcm2835 \
	kernel-module-snd-bcm2835 \
	kernel-module-snd-soc-bcm2835-i2s \
	kernel-module-spi-bcm2835 \
	kernel-module-spi-bcm2835aux \
	"
