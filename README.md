# tohevc
Converts h264 files to hevc. Uses hardware encoding. 

tohevcbat
Desc:   converts a list of h264 files to hevc encoding using nvenc (gpu encoding). Useful for reducing the size of large video files like certain vr videos that are "ahem" very much safe for work.
Usage:  "tohevcbat bitrate recode_list.txt"

Bitrate should be in ffmpeg format. For example: "1M" means 1 megabit per second and "1000K" means 1000 kilabit per second.
I reccomend using a program like vlc to check the average bitrate, then inputing about half of that value, or less, into tohevcbat.
You can do this in vlc by right clicking on the video then clicking tools>codec>stats. The Bitrate is in the Input/Read category.


The recode_list is the list of files to recode.
You can use extlist, another program I made which easily makes compatible lists of all files within a directory of a certain type, to create it.
extlist can be found here: https://github.com/KaptainBflakes/extlist
If you want to use your own input, like if you just want to make the list in a text editor, end each path with a newline char '\n' ie just hit return after every path or tohevcbat's filereader will miss-store the file paths into memory and the file won't convert.
Should work with linux if you like to read for hours to learn to do nothing of consequence.

Install: Needs an ffmpeg install linked to the system path.
Put the executable into a directory that is included in the PATH system environment variable.
Use on the command line.

tohevcdtsbat
Desc: The same as "tohevcbat" but uses dts audio encoding. Useful for reducing the size of legitimately obtained movies and shows with dts audio. This is best used to convert bluray tv sets.
If you don't use this on something with dts audio, the audio will fuck up and only retain 2, wrong audio tracks, upon recoding.
Usage: The exact same as the other one. The only difference is slightly different audio settings.
