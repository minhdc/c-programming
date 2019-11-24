#include <stdio.h>
#include <string.h>

	char track_list[][80] = {
		"I left my heart in Harvard med school",
		"Newark, Newark - a wonderful town",
		"Dancing with a Dork",
		"From here to maternity",
		"The girl from IwoJima"
	};


void find_track(char what_to_search[]){
	int i;
	for ( i = 0 ; i < 5 ; i++){
		if(strstr(track_list,what_to_search)){
			printf("found... at %i",i);
		}
	}

}

int main(int argc, char** argv){
	/*
	if(argc < 2){
		puts("please specify something to search...");
		puts("usage: ./track_list_seeker <track_name>");
		return 0;
	}*/
	
	char track_name[80];
//	fgets(track_name,80,stdin);
	scanf("%79s",&track_name);
	find_track(track_name);

	return 0;
	
}
