/*
    exercise 3.2
*/

#include <stdio.h>
#include <string.h>

void count_something();
void escape(char s[], char t[]);

int
main (int argc, char *argv[])
{
    char s[] = "hello\tand\nfvck you  again   bitch.";
    char t[strlen(s)];
    int i = 0;
        
    escape(s,t);
    for(i = 0 ; i < strlen(t) ; i++)
        printf("%c",t[i]);
    
    return 0;
}

void
escape(char s[], char t[])
{
    int i, j;
    i = 0;
    j = 0;
    while( s[i] != '.'){
        switch(s[i]){
            case '\n':
                t[j] = '\\';
                j++;
                t[j] = 'n';
                break;
            case '\t':
                t[j] = '\\';
                j++;
                t[j] = 't';
                break;
            default:
                t[j] = s[i];              
                break;                
        }
        i++;
        j++;
    }
}

void 
count_something()
{
    int c, i , nwhite, nother, ndigit[10];
    
    nwhite = nother = 0;
    
    for( i = 0; i < 10; i++)
        ndigit[i] = 0;
        
    while( (c=getchar()) != EOF && (c != ':')){
        switch(c){
            case '0': case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9': 
                ndigit[c - '0']++;
                break;
            case ' ':
            case '\n':
            case '\t':
                nwhite++;
                break;
            default:
                nother++;
                break;
        }
    }
    printf("digits = ");
    for( i = 0 ; i < 10 ; i++)
        printf(" %d ",ndigit[i]);        
    printf(", white sapce = %d, other = %d \n", nwhite, nother);    
}
