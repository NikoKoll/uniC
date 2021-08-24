#include <stdio.h>

struct eip
{
    char name[20];
    char surname[20];
    int code;
    float mon;
};


int main(void) {
    int i;
    float all=0;

    struct eip x[3];

    for(i=0;i<3;i++){
        printf("\nDose onoma: ");
        scanf("%s", &x[i].name);
        printf("\nDose eponimo: ");
        scanf("%s", &x[i].surname);
        printf("\nDose code: ");
        scanf("%d", &x[i].code);
        printf("\nDose Lefta: ");
        scanf("%f", &x[i].mon);
/*        printf("Eipalilos %d \n", i+1);
        printf("\nOnoma %s\n", x[i].name);
        printf("\nEponimo %s\n", x[i].surname);
        printf("\nKwdikos %d\n", x[i].code);
        printf("\nMania %.2f\n", x[i].mon); */
        if(x[i].mon>10000){
            printf("\nO %s %s exei &.2f lefta\n", x[i].name, x[i].surname, x[i].mon);
        }
        all=all+x[i].mon;
    }
    printf("Ola ta lefta einai: %.2f", all);
}