#include <stdio.h>




int fact(int);
int kombinasyon(int,int);



int main(){

    int x;
    
    printf("faktöriyelini hesaplamak istediğiniz sayıyı giriniz \n");
    scanf("%d",&x);
    printf(" %d sayısının faktöriyeli %d dir \n",x,fact(x));


    int number1;
    int number2;

    printf("kombinasyonunu  hesaplamak istediğiniz sayıyları giriniz \n");
    scanf("%d %d",&number1,&number2);

    printf("%d sonucumuzdur",kombinasyon(number1,number2));



    return 0 ;
}

int fact(int x) {// faktöriyel hesaplama fonksiyonu
    int sonuc=1;

    for (size_t i = 1; i <= x; i++)
    {
        sonuc=sonuc*i;
    }

    return sonuc;
    
}

int kombinasyon(int number1,int number2){// kombinasyon hesaplama fonksiyonu
    return ((fact(number1))/(fact(number2)*fact(number1-number2)));
}