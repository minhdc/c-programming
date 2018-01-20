#include <stdio.h>
#include <string.h>

void get_occurence_pos(char s[], char sample);
void print_char_arr(char input[]);
void main(){
    char s[] = "hello and fvckyou";
    
    get_occurence_pos(s,'o');
    print_char_arr(s);
}

void get_occurence_pos(char s[], char sample	){
    int i = 0;
    for(i=0 ; i<strlen(s) ; ++i){
        if(sample == s[i]){
            printf("%d\t",i);
            s[i] = ' ';
        }
    }
}

void squeeze(char s1[], char s2[]){
    int i,j = 0;
    
}

void print_char_arr(char input[]){
    int i = 0;
    for(i = 0 ; i < strlen(input) ; ++i){
        printf("%c",input[i]);
    }
}
