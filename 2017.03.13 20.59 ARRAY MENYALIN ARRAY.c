/*
nama    : M Fadli Zein
Nobp    : 1601081035
Kelas   : TK1B
Np      : Array Dasar
*/

#include"stdio.h"
void main()
{
    int A[100],B[100];
    int i,n;
    printf("Masukan Ukuran : ");scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Masukan Nilai A Ke-%d : ",i+1); scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        B[i]=A[i];
    }
    printf("\nHasil Nilai B\n\n");
    for(i=0; i<n; i++)
    {
        printf("Nilai B Ke-%d : %d\n",i+1,B[i]);
    }
}
