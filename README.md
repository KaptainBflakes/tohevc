# tohevc
Converts h264 files to hevc. Uses hardware encoding. 

tohevcbat
Desc:   converts a list of h264 files to hevc encoding using nvenc (gpu encoding). Useful for reducing the size of large video files like certain vr videos that are "ahem" very much safe for work.
Usage:  "tohevcbat bitrate recode_list.txt"

Bitrate should be in ffmpeg format. For example: "1M" means 1 megabit per second and "1000K" means 1000 kilabit per second.

The recode_list is the list of files to recode.
You can use extlist, another program I made which makes lists of all files within a directory of a certain type, to create it.
extlist can be found here: https://github.com/KaptainBflakes/extlist
If you want to use your own input, insert only a newline char '\n' in between each path to split them.
Should work with linux if you like to read for hours to learn to do nothing of consequence.

Install: Needs an ffmpeg install.
Put the executable into a directory that is included in the PATH system environment variable.
Use on the command line.
Profit.

tohevcdtsbat
Desc: The same as "tohevcbat" but uses dts audio encoding. Useful for reducing the size of legitimately obtained movies and shows with dts audio.
Usage: The exact same as the other one, retard.
Install: Alex is a stupid ni-
