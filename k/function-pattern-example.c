/*
**
*   write a program to print each lien of its input that contains a particular
    "pattern" or string of chars.    (similar to "grep" program in UNIX) 
*
*
*/


#include <stdio.h>

#define MAXLINE 1000
#define PATTERN "ould"

int get_line(char line[], int max);
int strindex(char src[], char keyword[]);

char pattern[] = PATTERN;

void main(){
    char line[MAXLINE];
    int found = 0;
    
    while(get_line(line,MAXLINE) > 0){
        if(strindex(line,pattern) >= 0){
            printf("%s",line);
            found++;
        }
    }
    printf("\n\n found = %d", found);
}

//get line into line[], return len()
int get_line(char line[], int max){
    int c,i = 0;
    
    while(--max > 0 && (c=getchar()) != EOF && c!= '\n')
        line[i++] = c;
    if(c=='\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}

//return indexof(keyword) in source, -1 if none
int strindex(char src[], char keyword[]){
    int i,j,k;
    
    for(i = 0 ; src[i] != '\0' ; i++){
        for(j=i, k=0 ; keyword[k]!='\0' && src[j]==keyword[k] ; j++, k++)
            ;
        if (k > 0 && keyword[k] == '\0')
            return i;
    }
    return -1;
}
