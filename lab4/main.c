#include <stdio.h>
#include <math.h>

void tetr(int x);

int main(void) {
	
	int x;
	
	do{
		printf("Vale arithmo\n");
		scanf("%d", x);
	}while(x<-1);
	
	tetr(x);
	
	return 0;
}

void tetr(x){
	int x;
	x = x^2;
	printf("%d", x);
	
}
