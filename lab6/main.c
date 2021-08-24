#include <stdio.h>
#include <math.h>

float apo(int a[2][3]);
float epi(int a[2][3]);
int i;
int j;
int h;

int main(void){

    int bath[2][3];

    float ave[2];

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Valte ton Vathmo tou %dou Mathiti gia to %do Mathima:\n", i+1, j+1);
            scanf("%d", &*(*(bath+i)+j));
        }
    }
    system("cls");

    for(i=0;i<2;i++){
        h=0;
        if(bath[i][0]>4 && bath[i][1]>4 && bath[i][2]>4){
            h=i;
           ave[i]=epi(bath);
        }
        else{
            h=i;
          ave[i]=apo(bath);
        }
    }

 //   system("cls");

    for(i=0;i<2;i++){
        printf("\nO mesos oros tou %dou Mathiti einai:\t%f", i+1, ave[i]);
        for(j=0;j<3;j++){
            printf("\nO Vathmos tou %dou Mathiti gia to %do Mathima einai :\t", i+1, j+1);
            printf("%d\n", bath[i][j]);
        }
    } 

    return 0;
}

float epi(int a[2][3]){
    int temp;
    int temp2;
    int teliko;

        for( int j = 0; j < 3 ; j++){
            if (a[h][j] > a[h][j+1]){
                temp = a[h][j];
                a[h][j] = a[h][j+1];
                a[h][j+1] = temp;
            }
        }

       temp2=0;
        for(j=0;j<3;j++){
            temp2 = a[h][j] + temp2;
            printf("%d\n", a[h][j]);
        }

    teliko= (float)(temp2/3);

    

    return teliko;
}

float apo(int a[2][3]){
    int temp;
    int temp2;
    int teliko;

        for( int j = 0; j < 3 ; j++){
            if (a[h][j] > a[h][j+1]){
                temp = a[i][j];
                a[h][j] = a[h][j+1];
                a[h][j+1] = temp;
            }
        }

       temp2=0;
        for(j=0;j<3;j++){
            temp2 = a[h][j] + temp2;
            printf("%d\n", a[h][j]);
        }

    teliko= (float)(temp2/3);

    return teliko;
}