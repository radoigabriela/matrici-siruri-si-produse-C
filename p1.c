#include <stdio.h>
#include <stdlib.h>

int  nr_linii()
{
    int n;
    printf("Introduceti nr de linii: ");
    scanf("%d", &n);
    return n;
}


int nr_coloane()
{
    int m;
    printf("Introduceti nr de coloane: ");
    scanf("%d", &m);
    return m;
}

int nr_nenule()
{
    int k;
    printf("Introduceti nr de elemente nenule: ");
    scanf("%d", &k);
    return k;
}

void citire(int a[][10], int n, int m)
{
    int i, j;
    for(i=0; i<n ; i++)
    for(j=0; j<m ; j++){
        printf("a[%d][%d]=", i, j);
        scanf("%d", &a[i][j]);
        }
}

void afisare(int k, int a[][10], int n, int m)
{
     int i, j;
     for(i=0; i<n ; i++){
         int cont=0;
     for(j=0; j<m; j++)
         if(a[i][j]==0)
         cont++;
    if(m-cont>=k)
       for(j=0; j<m ; j++)
       printf("%d  ", a[i][j]);
       printf("\n");
       }
}


int main()
{
    int a[10][10], n, m, k;
    n=nr_linii();
    m=nr_coloane();
    k=nr_nenule();
    citire(a, n, m);
    afisare(k, a, n, m);
    return 0;
}
