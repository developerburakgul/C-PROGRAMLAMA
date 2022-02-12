#include <stdio.h>

/**
 *  bize bir sayı dizisi ve k sayısı veriliyor
 *  bu dizideki herhangi iki elemanın toplamı k ye eşit olup olmadığını bulan bir program yazınız
 *   BONUS : diziyi bir kere gezerek yapabilirmisiniz ?
 */

int main(){

    int dizi[4]={5,5,3,7};

    int k = 10;

    for (size_t i = 0; i < 4; i++) 
    {
        for (size_t j = i+1; j < 4; j++)
        {
            if (i==j) 
            {
                continue;
            }
            if (dizi[i]+dizi[j]==k)
            {
                printf("dizinin %d . ile %d . elemanlarının toplamı %d dir \n",i+1,j+1,k);
            }
            


            
            
            
        }
        
    }
    




    return 0;
}