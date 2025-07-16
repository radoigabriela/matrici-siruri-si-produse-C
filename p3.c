#include <stdio.h>
#include <stdlib.h>

int nr (){
int n;
    do{
printf("Introduceti pe n: ");
scanf("%d", &n);
} while (n<2 || n>100);
return n;
}


float fct_for(int n){
float p=1;
int i;
for(i=2; i<=n; i++)
    p=p*(1-1/(float)(i*i));
return p;
}

float fct_while(int n){
    float p=1;
    int i=2;
    while (i<=n)
           {
           p=p*(1-1/(float)(i*i));
           i++;
           }
     return p;
}

float fct_dowhile(int n){
     float p=1;
     int i=2;
     do{
        p=p*(1-1/(float)(i*i));
        i++;
     }while(i<=n);
     return p;

}


int main()
{
    int n;
    n=nr();
    printf("Suma for= %f\n", fct_for(n));
    printf("Suma while= %f\n", fct_while(n));
    printf("Suma do while= %f\n", fct_dowhile(n));
    return 0;
}
