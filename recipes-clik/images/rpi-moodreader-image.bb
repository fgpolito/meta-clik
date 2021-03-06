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
	${LINUX_FIRMWARES} \
	opencv \
	python3-opencv \
	python3-pyv4l2camera \
	libgles2 \
	libegl \
	libgl \
	libv4l \
	media-ctl \
	userland \
	python3-pip \
	python3-picamera \
	python3-typing \
	python3-spidev \
	python3-pyaudio \
	python3-modules \
	python3-google-api-python-client \
	python3-adaptfilt \
	nano \
	minicom \
	curl \
	boost \
	python3-rpigpio \
	python3-requests \
	python3-cherrypy \
	python3-adafruit-pca9685 \
	python3-cognitive-face \
	python3-urllib3 \
	python3-numpy \
	apache2 \
	${PHPS} \
	mosquitto \
	git \
	"

PHPS = " \
	php \
	php-fpm \
	php-phar \
	php-cgi \
	php-fpm-apache2 \
	php-cli \
	php-pear \
	"

LINUX_FIRMWARES = "\
	linux-firmware-bcm4329 \
	linux-firmware-bcm4330 \
	linux-firmware-bcm43340 \
	linux-firmware-bcm4334 \
	linux-firmware-bcm43362 \
	linux-firmware-bcm4339 \
	linux-firmware-bcm43430 \
	linux-firmware-bcm4354 \
	"
