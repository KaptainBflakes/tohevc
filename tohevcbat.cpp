#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char** argv){
	//arg 1 is bitrate arg 2 is worklist. Worklist is separated by line returns.
	//Always include an ending newline or it will miss the last file.
	//Note this only works well with stereo audio. DTS based audio is going to require a rewrite in order to work.
	
	//loading worklist into mem(string vector)
	fstream f; f.open(argv[2]);
	vector<string> worklist;
	if(f.good()){//loads worklist file to memory
		char c;string out="";
		while(f.get(c)){
			if(c=='\n'){worklist.push_back(out);out="";}
			else{out+=c;}
		}
	}
	
	//mainwork
	for(int i=0;i<worklist.size();i++){
		//output path renaming
		string temp="";
		//find insertion point. Should be the same as the start of the extension
		int insrtn_indx;for(int c=worklist[i].size()-1;c>=0;c--){if(worklist[i][c]=='.'){insrtn_indx=c;break;}}
		for(int c=0;c<worklist[i].size();c++){
			if(c==insrtn_indx){
				temp+="_hevc";
			}
			temp+=worklist[i][c];
		}
		string cmd="ffmpeg -c:v h264_cuvid -i ";	cmd+=worklist[i];//input path
		cmd+=" -c:v hevc_nvenc -b:v ";				cmd+=argv[1];//bitrate
		cmd+=" ";									cmd+=temp;//output path
		system(&cmd[0]);//start recoding the file
	}
	return 0;
}