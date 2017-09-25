# Common packages required by AlexaPi and system in general

inherit extrausers

IMAGE_INSTALL += " \
	alsa-plugins \
	alsa-utils \
	avahi-daemon \
	avahi-dnsconfd \
	wayland \
	sox \
	ntp \
	screen \
	connman \
	connman-client \
	alexapi \
	libdrm \
	vlc \
	mesa \
	systemd-extra-utils \
	connman-wait-online \
	python-flask \
	python-flask-ask \
	python-aniso8601 \
	libssl \
	libcrypto \
	"

# Create alexapi user & group

ALEXAPI_USERNAME 	= "alexapi"
ALEXAPI_GROUP 		= "alexapi"

ALEXAPI_EXTRA_GROUPS	= "audio"

EXTRA_USERS_PARAMS = " \
		groupadd ${ALEXAPI_GROUP}; \
		useradd -g ${ALEXAPI_GROUP} -G ${ALEXAPI_EXTRA_GROUPS} \
		${ALEXAPI_USERNAME}; \
		"
