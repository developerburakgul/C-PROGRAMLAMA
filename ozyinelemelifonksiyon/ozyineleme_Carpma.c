#include <stdio.h>

// 2 sayının çarpımını recursive fonksiyon ile bulunuz 
int carpma(int n1,int n2);
int main(){
    
    printf("çarpmak istediğiniz iki sayıyı giriniz \n");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    printf("%d ile %d nin çarpımı %d dir \n",n1,n2,carpma(n1,n2));








    return 0 ;

}



int carpma(int n1,int n2){


if (n1==0||n2==0 )
{
    return  0 ;
}else if (n1>0 && n2>0)// pozitif sayıların çarpımı
{
    
    return (  carpma(n1,(n2-1))+(n1*1));
}else if ((n1<0 && n2>0))// negatif sayıların çarpımı 1.sayı negatif 2.sayı pozitif
{
    return (((n1+1)*n2) - n2);
}else if ((n1>0 && n2<0))// negatif sayıların çarpımı 1.sayı pozitif 2.sayı negatif
{
    return (((n1)*(n2+1) - n1));
}else if (n1<0 && n2<0) // iki sayı da negatif olursa
{
    return (((n1)*(n2+1) - n1));
}




}