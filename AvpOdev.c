#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> //standart sapma hesaplamak icin math kutuphanesi kullanilir
#include <time.h> //rastgele sayi uretmek icin time fonksiyonu kullanilir

void Sinif_Derecelendirme(int Ortalama, double T_skoru[], double HBN[], int N)
{
    if (Ortalama > 80 && Ortalama <= 100)
    {
        printf("Sinifin duzeyi : USTUN BASARI \n");
        for (int i = 0; i < N; i++)
        {

            if (T_skoru[i] >= 67)
            {
                printf("%.3d.Ogrencinin HBN : %.2lf, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 62 && T_skoru[i] <= 66.99)
            {
                printf("%.3d.Ogrencinin HBN : %.2lf,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 57 && T_skoru[i] <= 61.99)
            {
                printf("%.3d.Ogrencinin HBN : %.2lf,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 52 && T_skoru[i] <= 56.99)
            {
                printf("%.3d.Ogrencinin HBN : %.2lf,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 47 && T_skoru[i] <= 51.99)
            {
                printf("%.3d.Ogrencinin HBN : %.2lf,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 42 && T_skoru[i] <= 46.99)
            {
                printf("%.3d.Ogrencinin HBN : %.2lf,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 37 && T_skoru[i] <= 41.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2lf,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 32 && T_skoru[i] <= 36.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2lf,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else
            {
                printf("%.3d.Ogrenci'nin HBN : %.2lf, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
    else if (Ortalama > 70 && Ortalama <= 80)
    {
        printf("Sinifin duzeyi : MUKEMMEL\n");
        for (int i = 0; i < N; i++)
        {
            if (T_skoru[i] >= 69)
            {
                printf("%.3d.Ogrenci'nin HBN : %d, T Skoru : %.2f , Harf Notu: %s\n", i + 1, T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 64 && T_skoru[i] <= 68.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 59 && T_skoru[i] <= 63.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 54 && T_skoru[i] <= 58.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 49 && T_skoru[i] <= 53.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 44 && T_skoru[i] <= 48.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 39 && T_skoru[i] <= 43.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 34 && T_skoru[i] <= 38.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else if (T_skoru[i] < 34)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
    else if (Ortalama > 62.5 && Ortalama <= 70)
    {
        printf("Sinifin duzeyi : COK IYI\n");
        for (int i = 0; i < N; i++)
        {
            if (T_skoru[i] >= 71)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 66 && T_skoru[i] <= 70.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 61 && T_skoru[i] <= 65.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 56 && T_skoru[i] <= 60.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 51 && T_skoru[i] <= 55.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 46 && T_skoru[i] <= 50.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 41 && T_skoru[i] <= 45.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 36 && T_skoru[i] <= 40.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else if (T_skoru[i] < 36)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
    else if (Ortalama > 57.5 && Ortalama <= 62.5)
    {
        printf("Sinifin duzeyi : IYI\n");
        for (int i = 0; i < N; i++)
        {
            if (T_skoru[i] >= 73)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 68 && T_skoru[i] <= 72.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 63 && T_skoru[i] <= 67.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 58 && T_skoru[i] <= 62.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 53 && T_skoru[i] <= 57.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 48 && T_skoru[i] <= 52.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 43 && T_skoru[i] <= 47.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 38 && T_skoru[i] <= 42.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else if (T_skoru[i] < 38)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
    else if (Ortalama > 52.5 && Ortalama <= 57.5)
    {
        printf("Sinifin duzeyi : ORTANIN USTU\n");
        for (int i = 0; i < N; i++)
        {
            if (T_skoru[i] >= 75)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 70 && T_skoru[i] <= 74.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 65 && T_skoru[i] <= 69.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 60 && T_skoru[i] <= 64.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 55 && T_skoru[i] <= 59.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 50 && T_skoru[i] <= 54.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 45 && T_skoru[i] <= 49.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 40 && T_skoru[i] <= 44.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else if (T_skoru[i] < 40)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
    else if (Ortalama > 47.5 && Ortalama <= 52.5)
    {
        printf("Sinifin duzeyi : ORTA\n");
        for (int i = 0; i < N; i++)
        {
            if (T_skoru[i] >= 77)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 72 && T_skoru[i] <= 76.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 67 && T_skoru[i] <= 71.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 62 && T_skoru[i] <= 66.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 57 && T_skoru[i] <= 61.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 52 && T_skoru[i] <= 56.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 47 && T_skoru[i] <= 51.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 42 && T_skoru[i] <= 46.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else if (T_skoru[i] < 42)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
    else if (Ortalama > 42.5 && Ortalama <= 47.5)
    {
        printf("Sinifin duzeyi : ZAYIF\n");
        for (int i = 0; i < N; i++)
        {
            if (T_skoru[i] >= 79)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 74 && T_skoru[i] <= 78.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 69 && T_skoru[i] <= 73.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 64 && T_skoru[i] <= 68.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 59 && T_skoru[i] <= 63.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 54 && T_skoru[i] <= 58.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 49 && T_skoru[i] <= 53.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 44 && T_skoru[i] <= 48.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else if (T_skoru[i] < 44)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
    else if (Ortalama <= 42.5)
    {
        printf("Sinifin duzeyi : KOTU\n");
        for (int i = 0; i < N; i++)
        {
            if (T_skoru[i] >= 81)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f, T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "AA");
            }
            else if (T_skoru[i] >= 76 && T_skoru[i] <= 80.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BA");
            }
            else if (T_skoru[i] >= 71 && T_skoru[i] <= 75.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "BB");
            }
            else if (T_skoru[i] >= 66 && T_skoru[i] <= 70.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CB");
            }
            else if (T_skoru[i] >= 61 && T_skoru[i] <= 65.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "CC");
            }
            else if (T_skoru[i] >= 56 && T_skoru[i] <= 60.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DC");
            }
            else if (T_skoru[i] >= 51 && T_skoru[i] <= 55.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "DD");
            }
            else if (T_skoru[i] >= 46 && T_skoru[i] <= 50.99)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FD");
            }
            else if (T_skoru[i] < 46)
            {
                printf("%.3d.Ogrenci'nin HBN : %.2f,T Skoru : %.2f , Harf Notu: %s\n", i + 1, HBN[i], T_skoru[i], "FF");
            }
        }
    }
}

double standart_sapma_hesapla(double HBN[], int N, double ortalama)
{
    int i;
    double toplam = 0;
    for (i = 0; i < N; i++)
    {
        toplam += pow(HBN[i] - ortalama, 2);
    }
    return sqrt(toplam / N); // standart sapma hesaplanir
}

void ogrencileri_puanla(char ogrenci_cevaplari[][100], char cevap_anahtari[], double HBN[], int N, int S)
{
    int i, j;
    int dogru = 0;
    int yanlis = 0;
    double puan = 0;
    for (i = 0; i < N; i++)
    {
        puan = 0;   // her ogrenci icin puan sifirlanir
        dogru = 0;  // her ogrenci icin dogru sayisi sifirlanir
        yanlis = 0; // her ogrenci icin yanlis sayisi sifirlanir

        for (j = 0; j < S; j++)
        {
            if (ogrenci_cevaplari[i][j] == cevap_anahtari[j])
            {
                dogru++;
            }
            else if (ogrenci_cevaplari[i][j] == 'X')
            {
            }
            else
            {
                yanlis++;
            }
        }

        puan = (dogru - (yanlis * 0.25)) * (100 / S); // puan hesaplanir
        if (puan < 0)
        {
            HBN[i] = 0; // puan negatifse 0 atanir
        }
        else
        {
            HBN[i] = puan; // puan pozitifse kendisi atanir
        }
    }
}

void T_skoru_hesapla(double ortalama, double HBN[], int N, double std, double T_skoru[])
{

    int i;
    for (i = 0; i < N; i++)
    {
        T_skoru[i] = (((HBN[i] - ortalama) / std) * 10) + 60; // T skoru hesaplanir
    }
}

double sinif_ortalamasi_hesapla(double HBN[], int N)
{
    int i;
    double toplam = 0;
    for (i = 0; i < N; i++)
    {
        toplam += HBN[i]; // toplam degeri hesaplanir
    }
    return toplam / N; // ortalama degeri hesaplanir
}

void cevap_olustur(char dogru_cevap, float dogru_oran, float bos_oran, int ogrenci_sayisi, char dizi[])
{
    dizi[ogrenci_sayisi]; // dizi olusturulur

    for (int i = 0; i < (int)(ogrenci_sayisi * dogru_oran); i++)
    {
        dizi[i] = dogru_cevap; // dogru cevaplar diziye atanir
    }

    for (int i = (int)(ogrenci_sayisi * dogru_oran); i < (int)(ogrenci_sayisi * (dogru_oran + bos_oran)); i++)
    {
        dizi[i] = 'X'; // bos cevaplar diziye atanir
    }

    for (int i = (int)(ogrenci_sayisi * (dogru_oran + bos_oran)); i < ogrenci_sayisi; i++)
    {

        char temp = dogru_cevap;    // yanlis cevaplar diziye atanir
        while (temp == dogru_cevap) // yanlis cevap dogru cevaba esit olmadigi surece dongu devam eder
        {
            temp = rand() % 5 + 65; // yanlis cevaplar A,B,C,D,E arasindan rastgele secilir
        }
        dizi[i] = temp; // yanlis cevaplar diziye atanir
    }

    int j;
    char tmp;
    for (size_t i = 0; i < ogrenci_sayisi; i++) // dizideki elemanlar karistirilir
    {
        j = rand() % ogrenci_sayisi; // j degeri rastgele secilir
        tmp = dizi[i];               // tmp degeri dizi[i] degerine esitlenir
        dizi[i] = dizi[j];           // dizi[i] degeri dizi[j] degerine esitlenir
        dizi[j] = tmp;               // dizi[j] degeri tmp degerine esitlenir
    }
}

void cevap_anahtari_uret(char cevap_anahtari[], int S)
{
    int i;
    srand(time(NULL)); // rastgele sayi uretmek icin srand fonksiyonu kullanilir
    for (i = 0; i < S; i++)
    {
        cevap_anahtari[i] = rand() % 5 + 65; // cevap anahtari A,B,C,D,E arasindan rastgele secilir
    }
    cevap_anahtari[i] = '\0'; // cevap anahtari sonuna null karakteri eklenir
}

void cevap_anahtari_yazdir(char cevap_anahtari[], int S)
{
    int i;
    printf("Cevap Anahtari: ");
    for (i = 0; i < S; i++)
    {
        printf("%d.Soru : %c | ", i + 1, cevap_anahtari[i]); // cevap anahtari ekrana yazdirilir
    }
    printf("\n");
}

void sinavi_uygula(char ogrenci_cevaplari[][100], char cevap_anahtari[], int N, int S, double B, double D)
{
    int i, j;
    char temp[N]; // ogrenci cevaplari icin gecici dizi olusturulur

    for (int i = 0; i < S; i++) // soru sayisi kadar dongu calisir
    {
        cevap_olustur(cevap_anahtari[i], D, B, N, temp); // cevap olusturulur
        for (int j = 0; j < N; j++)                      // ogrenci sayisi kadar dongu calisir
        {
            ogrenci_cevaplari[j][i] = temp[j]; // ogrenci cevaplari gecici diziden alinir
        }
    }
}

void ogrenci_cevabini_yazdir(char ogrenci_cevaplari[][100], int ogrenci_ID, int S)
{
    int i;
    for (i = 0; i < S; i++) // soru sayisi kadar dongu calisir
    {
        printf("%d.Soru : %c |", i + 1, ogrenci_cevaplari[ogrenci_ID][i]); // ogrenci cevaplari ekrana yazdirilir
    }
    printf("\n");
}

int main()
{

    int N;                            // ogrenci sayisi
    int S;                            // soru sayisi
    double B;                         // bos birakma ihtiimali
    double D;                         // dogru cevaplama  ihtiimali
    float Sinif_Ortalama;             // sinif ortalamasi
    float Standart_Sapma;             // standart sapma
    char cevap_anahtari[100];         // cevap anahtari
    char ogrenci_cevaplari[100][100]; // ogrenci cevaplari
    double HBN[100];                  // her bir ogrencinin puanlari
    double T_skoru[100];              // her bir ogrencinin T skorlari
    while (1)
    {
        printf("Ogrenci sayisi giriniz (maksimim 100 degeri olmali): "); // ogrenci sayisi girilmesi
        scanf("%d", &N);
        if (N <= 0 || N > 100)
        {
            printf("Lutfen 0-100 arasinda bir deger giriniz.\n"); // ogrenci sayisi 0-100 arasinda olmali
        }
        else
        {
            break;
        }
    }
    while (1)
    {
        printf("Soru sayisi giriniz (maksimim 100 degeri olmali): "); // soru sayisi girilmesi
        scanf("%d", &S);
        if (S <= 0 || S > 100)
        {
            printf("Lutfen 0-100 arasinda bir deger giriniz.\n"); // soru sayisi 0-100 arasinda olmali
        }
        else
        {
            break;
        }
    }
    while (1)
    {
        while (1)
        {
            printf("Bos birakma ihtimalini giriniz (0 - 1 arasinda olmali): "); // bos birakma ihtimali girilmesi
            scanf("%lf", &B);
            if (B < 0 || B > 1)
            {
                printf("Lutfen 0-1 arasinda bir deger giriniz.\n"); // bos birakma ihtimali 0-1 arasinda olmali
            }
            else
            {
                break;
            }
        }
        while (1)
        {
            printf("Dogru cevaplama ihtimalini giriniz (0 - 1 arasinda olmali): "); // dogru cevaplama ihtimali girilmesi
            scanf("%lf", &D);
            if (D < 0 || D > 1)
            {
                printf("Lutfen 0-1 arasinda bir deger giriniz.\n"); // dogru cevaplama ihtimali 0-1 arasinda olmali
            }
            else
            {
                break;
            }
        }
        if (B + D > 1)
        {
            printf("Lutfen bos birakma ve dogru cevaplama ihtimali toplami 1'den kucuk olmali.\n"); // bos birakma ve dogru cevaplama ihtimali toplami 1'den kucuk olmali
        }
        else
        {
            break;
        }
    }
    cevap_anahtari_uret(cevap_anahtari, S);                       // cevap anahtari uretilmesi
    cevap_anahtari_yazdir(cevap_anahtari, S);                     // cevap anahtari yazdirilmasi
    sinavi_uygula(ogrenci_cevaplari, cevap_anahtari, N, S, B, D); // sinavi uygulama

    for (int i = 0; i < N; i++)
    {
        printf("%.3d. ogrencinin cevaplari:\n", i + 1);
        ogrenci_cevabini_yazdir(ogrenci_cevaplari, i, S); // ogrenci cevaplari yazdirilmasi
    }
    ogrencileri_puanla(ogrenci_cevaplari, cevap_anahtari, HBN, N, S); // ogrencilerin puanlanmasi
    Sinif_Ortalama = sinif_ortalamasi_hesapla(HBN, N);                // sinif ortalamasi hesaplanmasi
    printf("Sinif Ortalamasi: %.2lf\n", Sinif_Ortalama);              // sinif ortalamasi yazdirilmasi
    Standart_Sapma = standart_sapma_hesapla(HBN, N, Sinif_Ortalama);  // standart sapma hesaplanmasi
    printf("Standart Sapma: %.2lf\n", Standart_Sapma);                // standart sapma yazdirilmasi
    T_skoru_hesapla(Sinif_Ortalama, HBN, N, Standart_Sapma, T_skoru); // T skoru hesaplanmasi
    Sinif_Derecelendirme(Sinif_Ortalama, T_skoru, HBN, N);            // sinif derecelendirilmesi

    return 0;
}