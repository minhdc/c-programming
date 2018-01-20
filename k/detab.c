#include <stdio.h>



void main(){
	int c = 0;
	int len_of_tab = sizeof('\t');
	int index = 0;

	while((c = getchar()) != EOF){
		if( c == '\t' ){
			for(index = 0 ; index < len_of_tab ; ++index)
				printf("-");	
		}
		else
			printf("%c",c);
	}	

}

