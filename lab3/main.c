#include <stdio.h>

int bathmos(int ep[10], int ap[10]);
void avage(int ep[10], int ap[10]);

int main(void) {        

	int epi[10];
	int apo[10];
	int i;

	
	for(i =0;i<10;i++){
		epi[i]=-1;
		apo[i]=-1;
	}
	
	bathmos(epi, apo);
	
//	system("cls");
	
	avage(epi, apo);
	
	
/*	for(i =0;i<10;i++){
		printf("%d\t",apo[i]);
	}
	printf("\n");
	for(i =0;i<10;i++){
		printf("%d\t",epi[i]);
	}	*/
	
	return 0;
}

int bathmos(int ep[10], int ap[10]){
	int ok;
	int ok2;
	int bath;
	int i;
	
//	system("cls");
	
		
	for(i =0;i<10;i++){
		printf("Insert the grade of student no%d: \n", i+1);
		do{	
		
			if(ok2 != 0){
//				system("cls");
				printf("Insert the right grade: \n");
				ok2=0;
			}	
			scanf("%d", &bath);
			if(bath<-2 || bath>10){
				ok2++;	
			} 
		}while(ok2 != 0);
	
		
		if(bath>-1 && bath<5){
			ap[i]= bath;
		}
		if(bath<11 && bath>4){
			ep[i]= bath;
		}
		if(bath == -1){
			break;
		}
	}
	
	return ap, ep;
}

void avage(int ep[10], int ap[10]){
	int i;
	int a=0;
	int b=0;
	int d=0;
	int f=0;
	float avga=0.0;
	float avgb=0.0;
	
	
	for(i=0;i<10;i++){
		if(ep[i]>-1){
			a= a +ep[i];
			d++;
		}
		if(ap[i]>-1){
			b= b+ap[i];
			f++;
		}
	}
	
	avga= (float)a/d;
	avgb= (float)b/f;
	
//	printf("%d\n", d);
//	printf("%d\n", f);
	printf("The average for studnt with pass grade is: %.2f\n", avga);
	printf("The average for studnt with fail grade is: %.2f\n", avgb);
	
	if(f>d){
		
			for(i=0;i<10;i++){
				if(ap[i]==4){
					ap[i]= ap[i]+1;
					f=f-1;
					d++;
				}
				if(d>f){
					break;
				}
			}
				
	}

	a=0;
	b=0;

	for(i=0;i<10;i++){
		if(ep[i]>-1){
			a= a +ep[i];
		}
		if(ap[i]>-1){
			b= b+ap[i];
		}
	}
	
	avga= (float)a/d;
	avgb= (float)b/f;
	
/*	printf("%d\n", d);
	printf("%d\n", f);	*/
	printf("The average new for studnt with pass grade is: %.2f\n", avga);
	printf("The average new for studnt with fail grade is: %.2f\n", avgb);
	
}




























