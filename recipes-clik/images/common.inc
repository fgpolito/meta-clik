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
	alexapi \
	"

# Create alexapi user & group

ALEXAPI_USERNAME 	= "alexapi"
ALEXAPI_GROUP 		= "alexapi"

EXTRA_USERS_PARAMS = " \
		groupadd ${ALEXAPI_GROUP}; \
		useradd -g ${ALEXAPI_GROUP} ${ALEXAPI_USERNAME}; \
		"
