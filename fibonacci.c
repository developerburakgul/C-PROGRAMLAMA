#include <stdio.h>
int fibonacci(int number);
int main(){
    for (size_t i = 1; i < 11; i++)
    {
        printf("%d \n",fibonacci(i));  
    }
    return 0 ;
}

int fibonacci(int number){// fibonacci serisi
    if (number<1)
    {
        printf("1 veya 1 den büyük bir sayı giriniz \n");
    }
    
   while (number==1 ||number==2)
   {
       return 1;
   }
   int sonuc=fibonacci(number-1)+fibonacci(number-2);
}