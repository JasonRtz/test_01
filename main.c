#include <stdio.h>

void print_greeting(){
	printf("Welcome!");
}

void print_numbers(){
	for(int i = 1; i <= 10; i++){
		printf("%d\n",i*10);
	}
}

int main(void) {
	print_greeting();
  	print_numbers();
  
	return 0;
}
