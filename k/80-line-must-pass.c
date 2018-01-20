#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int max_line);
void copy(char to[], char from[]);


int main(){
	int len;
	int max = 80;
	char line[MAXLINE];
	int index = 0;
	while ((len = get_line(line,MAXLINE)) > 0)
		if (len > max){
			for(index = 0 ; index < len ; ++index)
				printf("%c",line[index]);
			printf("\n");
		}
	return 0;
}


int get_line(char s[], int lim){
	int c,i;
	i = 0;
	for(i=0 ; i<lim-1 && (c=getchar()) != EOF && c!='\n' && c != '0' ; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i = 0;
	while((to[i] == from[i]) != '\0')
		++i;
}
