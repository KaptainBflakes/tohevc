# tohevc
Converts h264 files to hevc. Uses hardware encoding. 

tohevcbat
Desc:   converts a list of h264 files to hevc encoding using nvenc (gpu encoding). Useful for reducing the size of large video files like vr videos.
Usage:  "tohevcbat quality recode_list (/crf)"

"quality", by default, is ffmpeg format bitrates. For example: "1M" means 1 megabit per second and "1000K" means 1000 kilabit per second.
I recommend using a program like vlc to check the average bitrate, then dividing that average by how much smaller you want your end files to be  and inputing that into tohevcbat.
You can do this in vlc by right clicking on the video then clicking tools>codec>stats. The Bitrate is in the Input/Read category.
If you append "/crf" it will use a constant rate factor to determine bitrate. this is just an integer. 0 is lossless/highests bitrate, 100 is deep fried meme.


The recode_list is the list of files to recode.
You can use extlist, another program I made, which easily makes compatible lists of all files within a directory of a certain type, to create it.
extlist can be found here: https://github.com/KaptainBflakes/extlist
If you want to use your own input, like if you just want to make the list in a text editor, end each path with a newline char '\n' ie just hit return after every path or tohevcbat's filereader will miss-store the file paths into memory and the file won't convert.
Should work with linux if you like to read for hours to learn to do nothing of consequence.

Install: Needs an ffmpeg install linked to the system path.
Put the executable into a directory that is included in the PATH system environment variable.
Use on the command line.

tohevcdtsbat
Desc: The same as "tohevcbat" but uses dts audio encoding. Useful for reducing the size of legitimately obtained movies and shows with dts audio. This is best used to convert bluray tv sets.
If you don't use this on something with dts audio, the audio will fuck up and only retain 2, wrong audio tracks, upon recoding.
Usage: The exact same as the other one. The only difference is slightly different default audio settings.
