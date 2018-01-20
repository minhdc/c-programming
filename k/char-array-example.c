#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int max_line);
void copy(char from[], char to[]);

void main(){
	
	int line_len;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];

	while(line_len = get_line(line,MAXLINE) >0)
		if(line_len >= max){
			copy(line, longest);
			max = line_len;
			printf("current longest line has %d chars",line_len);
		}
	if (max > 0)
		printf("%s",longest);
	return;
}

int get_line(char line[], int max_line){
	int c,i;

	for( i = 0; i < max_line-1 && (c=getchar())!=EOF && c!='\n' ; ++i)
		 line[i] = c;
	if (c=='\n'){
		line[i] = c;
	 	++i;
	}
	line[i] = '\0';
	return i;
}

void copy(char from[], char to[]){
	int i = 0;
	while( (to[i] = from[i]) != '\0')
		++i;
}
