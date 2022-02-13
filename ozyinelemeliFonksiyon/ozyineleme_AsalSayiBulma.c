#include <stdio.h>
// int asalSayiBul(int number1);
int asalSayiBulma(int number1);

int main()
{
    int sayi;
    printf("asallığını test etmek istediğiniz sayıyı giriniz : ");
    scanf("%d", &sayi);

    if (asalSayiBulma(sayi) == 1)
    {
        printf("%d bir asal sayidir.", sayi);
    }
    else
    {
        printf("%d asal sayi değildir.", sayi);
    }

    return 0;
}

// int asalSayiBul(int number1){
//     static int number2 = 2;

//     while (number2 <= (number1 / 2))
//     {

//         if (number1 % number2 == 0)
//         {
//             return 0;
//         }
//         number2++;
//     }
//     if (number1 == 2 || number1 == 3)
//     {
//         return 1;
//     }

//     return 1;
// }

int asalSayiBulma(int number1)
{

    static int sayac = 2;
    if (number1 <= 1)
    {
        return 0;
    }
    else if (sayac <= (number1 / 2))
    {
        if (number1 % sayac == 0)
        {
            return 0;
        }
        sayac++;
        asalSayiBulma(number1);
    }
    else
    {
        return 1;
    }
}