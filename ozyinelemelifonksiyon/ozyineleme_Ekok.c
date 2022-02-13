#include <stdio.h>

// girilen 2 sayının ekokunu bulunuz recursive fonksiyon kullanarak
int ekok(int n1 ,int n2);

int main(){

    int n1,n2;
    printf("ekokunu bulmak istediğiniz 2 sayıyı giriniz : \n");
    scanf("%d %d ",&n1,&n2);
    printf("%d ile %d nin ekoku %d dir ",n1,n2,ekok(n1,n2));
    





    return 0 ;

}

int ekok(int n1 ,int n2){
    

    static int sayac=1;
    if (sayac%n1==0 && sayac%n2==0)
    {
        return sayac;
    }

    sayac++;
    ekok(n1,n2);

    return sayac;
    




}