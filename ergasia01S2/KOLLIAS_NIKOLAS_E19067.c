#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	char username[50];
	char password[50];
	int  confirm; 
	int userpass;
	char pet[50];
	int passok;
	char gostart[5];
	char goend[5];
	char backstart[5];
	char backend[5];
	int timeok;
	int ddate;
	int rdate;
	char name[50];
	char surname[50];
	char gender[10];
	int age;
	char con[10];
	int apo;
	float posoa;
	float posob;
	float posoab;
	long long cardnum;
	long long s;
	int count;
	float amount;
	int dis;
	float total;
	
	do{
		system("cls");
		confirm= 0;
		userpass= 0;
		passok= 0;
		timeok= 0;
		
		do{
			system("cls");
			userpass= 0;
			printf("Enter Your Username: \n");
			scanf("%s", &username);
			
			printf("\nEnter Your Password: \n");
			scanf("%s", &password);
			
			if(strcmp(username ,"user1") == 0){
				if(strcmp(password ,"2020") == 0){
					userpass++;
				}
			}
			if(strcmp(username ,"u") == 0){
				if(strcmp(password ,"2020c") == 0){
					userpass++;
				}
			}
			
		}while(userpass == 0);
		
		system("cls");
		
		do{
			printf("Enter 'yes' Or 'no' if you have a Pet with you : \n");
			scanf("%s", &pet);
			if(strcmp(pet ,"yes") == 0)
			break;
			if(strcmp(pet ,"no") == 0)
			break;
			system("cls");
		}while(1);
		
		
		do{
			system("cls");
			passok= 0;
			
			printf("Please Enter a VALID starting and ending destination:\n");
			scanf("%s", &gostart);
			printf("to\n");
			scanf("%s", &goend);
		
			printf("\nPlease Enter a VALID starting and ending RUTERING destination:\n");
			scanf("%s", &backstart);
			printf("to\n");
			scanf("%s", &backend);
			
			
			if(strcmp(gostart ,"A") == 0){
			//	printf("1"); 	for testing
				if(strcmp(goend ,"L") == 0){
				//	printf("2");
					if((strcmp(backstart ,"L") == 0) && (strcmp(backend ,"A") == 0)){
						passok++;
					//	printf("3");
					}
				}
				if(strcmp(goend ,"P") == 0){
					if((strcmp(backstart ,"P") == 0) && (strcmp(backend ,"A") == 0)){
						passok++;
					}
				}
				if(strcmp(goend ,"V") == 0){
					if((strcmp(backstart ,"V") == 0) && (strcmp(backend ,"A") == 0)){
						passok++;
					}
				}
			}
			
			if(strcmp(gostart ,"L") == 0){
				if(strcmp(goend ,"A") == 0){
					if((strcmp(backstart ,"A") == 0) && (strcmp(backend ,"L") == 0)){
						passok++;
					}
				}
			}
			if(strcmp(gostart ,"V") == 0){
				if(strcmp(goend ,"A") == 0){
					if((strcmp(backstart ,"A") == 0) && (strcmp(backend ,"V") == 0)){
						passok++;
					}
				}
			}
			if(strcmp(gostart ,"P") == 0){
				if(strcmp(goend ,"A") == 0){
					if((strcmp(backstart ,"A") == 0) && (strcmp(backend ,"P") == 0)){
						passok++;
					}
				}
			}
			
		}while(passok == 0);
		
		system("cls");
		
		do{
			system("cls");
			timeok= 0;
			
			printf("Enter the departur date (1-30)\n");
			scanf("%d", &ddate);
			
			printf("Enter the return date (2-31)\n");
			scanf("%d", &rdate);
			
			if(ddate >=1 && ddate <=30){
				if(rdate>1 && rdate <32){
					if(ddate < rdate){
						timeok++;
					}
				}
			}
		
		}while(timeok == 0);
		
		system("cls");
		
		printf("Now Enter your Name\n");
		scanf("%s", &name);
		
		printf("Now Enter your Surname\n");
		scanf("%s", &surname);
		
		printf("Now Enter your Age\n");
		scanf("%d", &age);
		
		do{
			printf("Now Enter your Gender(ONLY male and female!!)\n");
			scanf("%s", &gender);
			if(strcmp(gender ,"male") == 0)
			break;
			if(strcmp(gender ,"female") == 0) 
			break;
			system("cls");
		}while(1);
	
		system("cls");
		
		printf("Name: %s, Surname: %s, Gender: %s, Age: %d\n", name,surname,gender,age);
		printf("\nDepatrur: %s, Arrival: %s, Return: %s\n", gostart,goend,gostart);
		printf("Pet: %s", pet);
		
		printf("\n\nAre the credentials correct? (If yes enter 'yes' or cancel the procces)\n");
		scanf("%s", &con);
		
		if(strcmp(con ,"yes") == 0){
			confirm++;
		} 
		
	}while(confirm == 0);
	
	system("cls");
	
	if(strcmp(pet ,"yes") == 0){
		do{
			printf("How many Baggages will you have (Max = 4)\n");
			scanf("%d", &apo);
			posoa = apo*10 + 20;
			if(apo <5 && apo >0)
			break;
			system("cls");
		}while(1);
	}
	else{
		do{
			printf("How many Baggages will you have (Max = 5)\n");
			scanf("%d", &apo);
			posoa = apo*10;	
			if(apo <6 && apo >0)
			break;
			system("cls");
		}while(1);
	}
		
	system("cls");
		
	if(age >= 18){
		if(strcmp(gostart ,"A") == 0){
			if(strcmp(goend ,"L") == 0){
				posob= 18 + 19;
			}
			if(strcmp(goend ,"P") == 0){
				posob= 25.45 + 26.45;
			}
			if(strcmp(goend ,"V") == 0){
				posob= 20 + 21;
			}
		}
			
		if(strcmp(gostart ,"L") == 0){
			posob= 18 + 19;
		}
		if(strcmp(gostart ,"V") == 0){
			posob= 25.45 + 26.45;
		}
		if(strcmp(gostart ,"P") == 0){
			posob= 20 + 21;
		}
	}
	
	if(age < 18){
		if(strcmp(gostart ,"A") == 0){
			if(strcmp(goend ,"L") == 0){
				posob= 13.50 + 14.50;
			}
			if(strcmp(goend ,"P") == 0){
				posob= 20 + 21;
			}
			if(strcmp(goend ,"V") == 0){
				posob= 15.50 + 16.50;
			}
		}
			
		if(strcmp(gostart ,"L") == 0){
			posob= 13.50 + 14.50;
		}
		if(strcmp(gostart ,"V") == 0){
			posob= 20 + 21;
		}
		if(strcmp(gostart ,"P") == 0){
			posob= 15.50 + 16.50;
		}
	}
	
	posoab= posoa + posob;
	printf("The amount is %.2f $\n\n", posoab);  // Asafia sthn Askisi Afou tha emfanizete to poso edo giati na to ziatei na to madepsi meta ??
	
//	system("cls");
	
	printf("Enter Your Card Number:\n");
	
	do{
		count = 0;
		scanf("%lld", &cardnum);
		s = cardnum;
		
		while(s !=0){
			s = s/10;
			count++;
		}
		if(count == 16)
		break;
		system("cls");
		printf("Please Enter Your CORRECT Card Number:\n");
	}while(1);
	
	system("cls");
	
	printf("Enter the amount you think you have to pay:\n");
	scanf("%f", &amount);
	
	if(amount == posoab){
		total = posoab - (5*posoab)/100;
		dis = 5;
	}
	if(amount != posoab)
	{
		total = posoab;
		dis= 0;
	}
	
	system("cls");
	
	printf("Reservation completed! Here is your ticket:\n");
	printf("************************************************************************************************************************\n");
	printf("		Name: %s	Surename: %s	Age: %d	Gender: %s\n", name,surname,age,gender);
	printf("\n		Departur Date: %d/12/2020\n", ddate);
	printf("\n		From: %s	To: %s	No. of Baggages: %d	Pet: %s\n", gostart,goend,apo,pet);
	printf("\n		Return Date: %d/12/2020\n", rdate);
	printf("\n		From: %s	To: %s	No. of Baggages: %d	Pet: %s\n", goend,gostart,apo,pet);
	printf("\n		Discount: %d%%\n", dis);
	printf("\n		Total amount: %.2f  euro\n", total);
	printf("************************************************************************************************************************");

	return 0;
}
