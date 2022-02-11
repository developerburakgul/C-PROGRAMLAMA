#include <stdio.h>
#include <stdlib.h>

void mukemmelSayiBulma(  int kacaKadar);

int main(){

    printf("kaça kadar olan mükemmel sayıları görmek istersiniz : ");
     int sayi;
    scanf("%lld",&sayi);
    mukemmelSayiBulma(sayi);
    






    return 0 ;
}

void mukemmelSayiBulma( int kacaKadar){
    
     int number=2;
     int carpanlariToplami;


    for (number; number < kacaKadar; number++)
    {   
         int carpanlariToplami=0;
        for ( int i = 1; i < number; i++)
        {
            if (number%i==0) 
            {
                carpanlariToplami+=i;
            }
            
        }
        if (carpanlariToplami==number) 
        {
            printf("%d bir mükemmel sayıdır \n",carpanlariToplami);
        }
        
        
    }
    
    
    
    






}