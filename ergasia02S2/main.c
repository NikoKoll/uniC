#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void register1();
void login1(char password[100][50]);
char passwordtransfer(char password[100][50], int total[]);
void modify(int total[]);
char pass(int total[], char password[][50]);
void search(int total[]);
void sort(int total[]);
void view(int total[]);

int totalusers=0;
int ii;
int i;
int f;
int count;
int help1[100], help2[100], help3[100];
char *user[100][6];
char username[100][50];

int main(void){

    char rl[10];
    char password[100][50];
    char answer[20];
    char cho[10];
    int total[100];
    int g;

    for(i=0;i<100;i++){
    	total[i]=-1;
	}

    do{
    	
    	system("cls");	
		
		do{
    		g=0;
    		
        	printf("Register or Login:\n");
       		scanf("%s", &rl);

       		if(strcmp(rl, "Register")==0){
           		register1();
        		total[totalusers] =f;
      			passwordtransfer(password, total);
      			totalusers++;
      	  	}

     	    if(strcmp(rl, "Login")==0){
          	  login1(password);
          	  ii = count;
          	  g++;
        	}
		
		}while(g==0);

         do{
        	
        //	system("cls");

            printf("You Have The Following Options:\nModify, Pass, View, Search, Sort or Exit\n");
        	scanf("%s" , &cho);
			
            if(strcmp(cho, "Modify")==0){
				
                modify(total);

            }
            if(strcmp(cho, "Pass")==0){

				pass(total, password);

            }
            if(strcmp(cho, "View")==0){
				
                view(total);

            }
            if(strcmp(cho, "Search")==0){
				
                search(total);
        	}
        	if(strcmp(cho, "Sort")==0){
				
                sort(total);
        	}

        }while(1);	

    }while(1);

    return 0;
}

void register1(){
    char name[100][50];
    char surname[100][50];
    char age[100][10];
    char totalLam[100][10];
    char totalPat[100][10];
    char totalVol[100][10];
    int b;
//    int help1, help2, help3;
    
    system("cls");

    printf("\n\nEnter your Name:\t");
    scanf("%s", name[totalusers]);
    user[totalusers][0]=name[totalusers];

    do{
        b=0;
        printf("\n\nEnter your Surname:\t");
        scanf("%s", surname[totalusers]);
        for(i=0;i<100;i++){
            if(i!= totalusers){
                if(strcmp(surname[i], surname[totalusers])==0){
                    b++;
                }
            }
        }
    }while(b!=0);
    user[totalusers][1]=surname[totalusers];

    printf("\n\nEnter your Age:\t");
    scanf("%s", age[totalusers]);
    user[totalusers][2]=age[totalusers];

    printf("\n\nEnter your Total Lamia trips:\t");
    scanf("%s", totalLam[totalusers]);
    user[totalusers][3]=totalLam[totalusers];

    printf("\n\nEnter your Total Patra trips:\t");
    scanf("%s", totalPat[totalusers]);
    user[totalusers][4]=totalPat[totalusers];

    printf("\n\nEnter your Total Volos trips:\t");
    scanf("%s", totalVol[totalusers]);
    user[totalusers][5]=totalVol[totalusers];

    help1[totalusers]= atoi(totalLam[totalusers]);
    help2[totalusers]= atoi(totalPat[totalusers]);
    help3[totalusers]= atoi(totalVol[totalusers]);
    f = help1[totalusers]+help2[totalusers]+help3[totalusers];


}

char passwordtransfer(char password[100][50], int total[]){
    int b=0;
    int n=total[totalusers];
    int j=0;
    int hlp[10];
    int g, x; 
    char *ogg ;
    
   	ogg = user[totalusers][1];
    i=0;
    while(*ogg != '\0'){
    	username[totalusers][i]=*ogg;
    	password[totalusers][i] =*ogg;
        ogg++;
    	i++;
	}

    while (n != 0) { 
  
        b = n % 10;  
         
  		hlp[j] = b ;

  		j++;
 		
        n = n / 10; 
    }
	
	x=j;
	j=j-1;
	while(j >-1 ){
    	password[totalusers][i] =hlp[j]+'0';
    	i++;
    	j=j-1;
	}
	
	password[totalusers][i]='\0';
	
	return password;
}

void login1(char password[100][50]){
    char usernameh[50];
    char passwordh[50];
    int b=0;
    int a=0;

    do{

        system("cls");

        printf("\nEnter your Username:\t");
        scanf("%s", &usernameh);
		b=0;
        printf("\n\nEnter your Password:\t");
        scanf("%s", &passwordh);
    
        for(count=0;count<100;count++){
            if(strcmp(usernameh, username[count])==0){
                if(strcmp(passwordh, password[count])==0){
					break;
                }
                else{
            		b++;
				}
            }
            else{
            	b++;
			}

        }   

    }while(b>99);
   
    
}

void modify(int total[]){
	int ch;
	char name[50];
    char surname[50];
    char age[10];
    char totalLam[10];
    char totalPat[10];
    char totalVol[10];
    char *og0;
    char *og;
    char *og2;
    char *og3;
    char *og4;
    char *og5;

    printf("Your Personal Info is:\n");
	printf("[0]Name:\t %s \n", user[ii][0]);
	printf("[1]Surame:\t %s \n", user[ii][1]);
	printf("[2]Age:\t %s \n", user[ii][2]);
    printf("[3]Total Lamia trips:\t %s \n", user[ii][3]);
	printf("[4]Total Patra trips:\t %s \n", user[ii][4]);
    printf("[5]Total Volos trips:\t %s \n", user[ii][5]);	
    
    printf("Enter the Num you want to Modify :  \n");
	scanf("%d", &ch);
	system("cls");
	
	if(ch==0){
		printf("Enter the new Name:\t %s \n");
		scanf("%s", &name);
		og0 = user[ii][0];
   		i=0;
    	while(name[i] != '\0'){
    		*og0=name[i];
        	og0++;
    		i++;
		}
		*og0='\0';
	}
	if(ch==1){
		printf("Enter the new Surname:\t %s \n");
		scanf("%s", &surname);
		og = user[ii][1];
   		i=0;
    	while(surname[i] != '\0'){
    		*og=surname[i];
        	og++;
    		i++;
		}
		*og='\0';
	}
	if(ch==2){
		printf("Enter the new Age:\t %s \n");
		scanf("%s", &age);
		og2 = user[ii][2];
   		i=0;
    	while(age[i] != '\0'){
    		*og2=age[i];
        	og2++;
    		i++;
		}
		*og2='\0';
	}
	if(ch==3){
		printf("Enter the new Total Lamia trips:\t %s \n");
		scanf("%s", &totalLam);
		og3 = user[ii][3];
   		i=0;
    	while(totalLam[i] != '\0'){
    		*og3=totalLam[i];
        	og3++;
    		i++;
		}
		*og3='\0';
		help1[ii] = atoi(totalLam);
    	total[ii] = help1[ii]+help2[ii]+help3[ii];
	}
	if(ch==4){
		printf("Enter the new Total Patra trips:\t %s \n");
		scanf("%s", &totalPat);
		og4 = user[ii][4];
   		i=0;
    	while(totalPat[i] != '\0'){
    		*og4=totalPat[i];
        	og4++;
    		i++;
		}
		*og4='\0';
		help2[ii]= atoi(totalPat[i]);
    	total[ii] = help1[ii]+help2[ii]+help3[ii];
	}
	if(ch==5){
		printf("Enter the new Total Volos trips:\t %s \n");
		scanf("%s", &totalVol);
		og5 = user[ii][5];
   		i=0;
    	while(totalVol[i] != '\0'){
    		*og5=totalVol[i];
        	og5++;
    		i++;
		}
		*og5='\0';
    	help3[ii]= atoi(totalVol[i]);
    	total[ii] = help1[ii]+help2[ii]+help3[ii];
	}
	
}

char pass(int total[], char password[][50]){
	int t=0;
	int j=0;
	int f=5;
	int h;
	int b;
	int n;
	
	if(total[ii]>20){
		do{
			//printf("ok");
			int hlp[10];
			int k;
            char hpass[10];
			char *ogg ;
    		k = 2 + rand() %4;
   			ogg = user[ii][k];
    		i=0;
    		while(*ogg != '\0'){
    			hpass[i]=*ogg;
        		ogg++;
    			i++;
			}
			hpass[i]='\0';
			h = atoi(hpass);
			if(h>=t){
				h--;
				j=0;
				char *og;
				og = user[ii][k];
				n=h;
				while (n != 0) { 
				
	  				b = n % 10;  
       
  					hlp[j] = b ;
  					
	  				j++;
 		
    			    n = n / 10; 
    			}
    			j=j-1;
				while(j >-1 ){
    				*og =hlp[j]+'0';
    				og++;
    				j=j-1;
				}
				*og='\0';
			}
			f--;
			printf("%s\n", user[ii][k]);
		}while(f>0);
		
	}
}

void view(int total[]){
	char *g;
	
	for(i=0;i<totalusers;i++){
		g=user[ii][0];
		if(*g == 'NULL'){
			break;
		}
		printf("Users (%d) Personal Info is:\n", i+1);
		printf("Users (%d) Name:\t %s \n", i+1, user[i][0]);
		printf("Users (%d) Surame:\t %s \n", i+1, user[i][1]);
		printf("Users (%d) Age:\t %s \n", i+1, user[i][2]);
    	printf("Users (%d) Total trips:\t %d \n", i+1, total[i]);
	}
	printf("Total Users:\t %d \n", totalusers);
}

void search(int total[]){
	int ans;
	int h=0;
	
	printf("Enter the number of total trips you want to search:\t");
	scanf("%d", &ans);
	
	for(i=0;i<totalusers;i++){
		if(total[i]!=-1){
			if(total[i]==ans){
			printf("\nThe user with the trips you enter is User %d\n", i+1);
			printf("Users (%d) Name:\t %s \n", i+1, user[i][0]);
			printf("Users (%d) Surame:\t %s \n", i+1, user[i][1]);
			printf("Users (%d) Total trips:\t %d \n", i+1, total[i]);
			h++;
			}
		}
	}
	
	if(h==0){
	//	system("cls");
		printf("No Users found\n");
	}
}

void sort(int total[]){
	int isort[100];
	int j=0;
	
	for(i=0;i<totalusers;i++){
		isort[i]=i;
	}	
	
	for(i=0;i<totalusers-1;i++){
		for(j=0;j<totalusers-i-1;j++){
			if(total[j]<total[j+1]){
				isort[j]= i+1;
				isort[j+1]= i;
			}
		}
	}
	
	for(i=0;i<totalusers;i++){
		printf("Users (%d) Name:\t %s \n", isort[i]+1, user[isort[i]][0]);
		printf("Users (%d) Surame:\t %s \n", isort[i]+1, user[isort[i]][1]);
		printf("Users (%d) Total trips:\t %d \n", isort[i]+1, total[isort[i]]);
	}
	
}
