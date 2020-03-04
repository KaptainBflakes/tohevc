# tohevc
Converts h264 files to hevc. Uses hardware encoding. 

tohevcbat
Desc:   converts a list of h264 files to hevc encoding using nvenc (gpu encoding).
Usage:  "tohevcbat bitrate recode_list.txt"

Bitrate should be in ffmpeg format. For example: "1M" means 1 megabit per second and "1000K" means 1000 kilabit per second.

The recode_list is the list of files to recode.
You can use extlist, another program I made which makes lists of all files within a directory of a certain type, to create it.
extlist can be found here: https://github.com/KaptainBflakes/extlist
If you want to use your own input, insert only a newline char '\n' in between each path to split them.
Should work with linux if you like to read for hours to learn to do nothing of consequence.
