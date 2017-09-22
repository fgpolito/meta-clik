#for clik lab hackathon, mp3 and wave encoder/decoder are required.

PACKAGECONFIG_append = " wavpack id3tag lame mad"

DEPENDS += "libtool"
