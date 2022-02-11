#include <stdio.h>
int kactanekarevar(int n);
int main(){

    int n ;

    printf("kaça kaçlık kare içinde kare sayısını öğrenmek istersiniz \n");
    scanf("%d",&n);
    printf("%d^%d lik karenin içinde %d tane kare vardır \n",n,n,kactanekarevar(n));






    return 0 ;
}



int kactanekarevar(int n){//n^2 tipindeki karenin içinde kaç adet kare vardır sorusunun cevabının algoritması

    if (n==1)
    {
        return 1;
    }

    int sonuc=kactanekarevar(n-1)+ (n*n);
    




}