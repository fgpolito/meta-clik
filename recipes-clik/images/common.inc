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
	${PYTHONS}-python-vlc \
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
