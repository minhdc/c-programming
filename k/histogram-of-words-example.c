#include <stdio.h>

/*
 * This program print a histogram of the lengths of words in its input
 * 
 * */

void main(){
	int c_count = 0;
	int index = 0;
	char c;
	int w_count = 0;

	//horizontal bars	
	while( c =getchar() != EOF){
		if (( c != ' ') && (c!='\t') &&(c!='\n'))
			c_count++;
		else 
			if (c_count != 0)							
				for( index = 0 ; index < c_count ; ++index)
					printf("=");
				printf("\n");
				c_count = 0;						
	}

	//vertical bars
}
