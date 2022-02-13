#include <stdio.h>
//verilen bir sayıya kadar olan tam sayıların toplamını özyineli fonksiyonla bulunuz.

int  ardisiksayilarintoplami2(int n);



int main(){
    int n ;
    printf("hangi sayıya kadar olan sayıların toplamını görmek istersiniz ? \n");
    scanf("%d",&n);
    printf("%d sayısına kadar olan sayıların toplamı %d dir \n",n,ardisiksayilarintoplami2(n));
    






    return 0 ;
}


int  ardisiksayilarintoplami2(int n){//ardışıksayıları toplayan recursive fonkisyon

    if (n==0)
    {
        return 0;
    }

     return (ardisiksayilarintoplami2(n-1)+n);

}






















/* recursive fonksiyon olmadan çözümü
int ardisiksayilarintoplami1(int n){// n*(n+1)/2 formülünün kodlaması yani ardışk sayıların toplamı
    int n ,sonuc=0 ;
    


    for (size_t i = 0; i <=n; i++)
    {
        sonuc=sonuc+i;
    }
    return sonuc;
    
}*/