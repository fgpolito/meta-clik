PYTHONS = "python"

ALEXAPI_REQUIREMENTS = " \
	${PYTHONS}-requests \
	${PYTHONS}-cherrypy \
	${PYTHONS}-pyalsaaudio \
	${PYTHONS}-webrtcvad \
	${PYTHONS}-pyyaml \
	${PYTHONS}-pocketsphinx \
	${PYTHONS}-coloredlogs \
	${PYTHONS}-future \
	"

IMAGE_INSTALL += " \
	alsa-plugins \
	alsa-utils \
	avahi-daemon \
	avahi-dnsconfd \
	connman	\
	wayland \
	ntp \
	${PYTHONS} \
	${ALEXAPI_REQUIREMENTS} \
	"
