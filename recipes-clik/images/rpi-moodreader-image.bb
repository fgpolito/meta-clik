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
	"
