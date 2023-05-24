#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Mert Eren Keküç   210229005   Yazýlým Mühendisliði 2.sýnýf

void hanoi(int, char, char, char);

int main()
{

    int number;
    double moves_number;

    printf("Enter the number of discs : ");
    scanf("%d",&number);

    clock_t begin=clock();     //gecen zamani bulmak icin(baslangic)

    printf("\nNumber of discs \t  Time\t\t Number of moves");

    for(int i=1;i<=number;i++)
        {
        hanoi(i, 'A', 'B', 'C');
        moves_number = pow(2.00,i)-1;

        printf("\n");

        clock_t end=clock();     //gecen zamani bulmak icin(bitis)
        printf("\t%d\t|\t%lf\t|\t%.0f",i,(double)(end-begin)/CLOCKS_PER_SEC,moves_number);
        }
    return 0;
}

void hanoi(int number, char firstrod, char twicerod, char thirdrod)
{
    if (number > 0)
    {
    hanoi(number - 1, firstrod, thirdrod, twicerod);     // diski nerden nereye taþýyoruz bulmak icin
    //printf("\n%d. disc %c -> %c", number, firstrod, twicerod);     //iþlem adimlarini yazdirma kýsmý
    hanoi(number - 1, thirdrod, twicerod, firstrod);
    return;
    }
}
