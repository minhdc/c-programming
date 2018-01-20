#include <stdio.h>
#include <sys/ioctl.h>

#define MAXLINE 1000

void main(){
	int len_of_line;
	char* line;
	int index;
	int terminal_index;
	int sequence;
	int current;
	struct winsize terminal_length;
	ioctl(0,TIOCGWINSZ,&terminal_length);
	
	len_of_line = getline(line,MAXLINE,stdin);
	sequence = len_of_line / terminal_length.ws_col;

	if(len_of_line < terminal_length.ws_col)
		printf("ur dick isn't long enough...");
		return;

	while(sequence > 0){
		for(terminal_index = 0 ; terminal_index < terminal_length.ws_col ; ++terminal_index){
			printf("%c",line[terminal_index + index]);
		}
		printf("\n");
		--sequence;
		if(sequence > 0)
			index += terminal_length.ws_col;
	}
	
	for(index; index < len_of_line ; ++index)
		printf("%c",line[index]);

	
}
