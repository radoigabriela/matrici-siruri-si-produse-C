#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100], sp=0, kp=0, sn=0, kn=0;
    float med_poz;
    float med_neg;
    int n, i;
    printf("Introduceti nr de elem: ");
    scanf("%d", &n);
    for(i=0; i<n ; i++)
    {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
        if(v[i]>0)
        {
            sp+=v[i];
            kp++;
        }
        else if (v[i]<0)
        {
            sn+=v[i];
            kn++;
        }

    }
    if(kp>0)
    {
        med_poz= (float)sp/kp;
        printf("Media aritmetica a numerelor pozitive este: %f\n", med_poz);
    }
    else if(kp==0)
            printf("Nu sunt numere pozitive\n");
    if(kn>0)
    {
        med_neg= (float)sn/kn;
        printf("Media aritmetica a numerelor negative este: %f\n", med_neg);
    }
    else if(kn==0)
            printf("Nu sunt numere negative\n");

    return 0;

    }
















