#include <stdio.h>


void main(){
	int num_of_tab = 0;
	int num_of_space = 0;
	int spaces = 0;

	while(getchar() != '\n'){
		++spaces;
	}

	num_of_tab = spaces / 4;
	num_of_space = spaces % 4;

	printf("%d %d",num_of_tab,num_of_space);

}
