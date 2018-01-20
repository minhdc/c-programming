#include <stdio.h>

void main(){
	int c_count = 0;
	int index = 0;
	int w_count = 0;
	char c;
	
	while( c = getchar() != EOF){
		if( (c == ' ') || (c == '\n') || (c == '\t') ){
			if (c_count != 0)
				for( index = 0 ; index < c_count ; ++index)
					printf("=");
				printf("\n");
				c_count = 0;
		}
		else
			c_count++;			
			printf("%d",c);
	}
}
