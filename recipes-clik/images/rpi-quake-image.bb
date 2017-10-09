# Base this image on rpi-basic-image
include recipes-core/images/rpi-basic-image.bb

IMAGE_INSTALL += " \
		iw \
		linux-firmware \
		alsa-plugins \
		alsa-utils \
		avahi-daemon \
		avahi-dnsconfd \
		ntp \
		screen \
		connman \
		connman-client \
		connman-wait-online \
		weston \
		wayland \
		ioquake3 \
		systemd-extra-utils \
		libgl \
		egl \
		libgles2 \
		"
