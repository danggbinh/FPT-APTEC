#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

void Q1();
void Q2();

int main()
{
    system("cls");

    int option = 0;
    do
    {
        printf("\n***** PRACTICAL EXAMINATION LBEP *****\n");
        printf("1.R1 \n");
        printf("2.R2 \n");
        printf("3.R3 \n");

        printf("Input option [1-3]:");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            Q1();
            break;
        case 2:
            Q2();
            break;
        case 3:
            exit(0);
        default:
            printf("WRONG OPTION!!");
            break;
        }
    } while (1);
}

void Q1()
{
    int k, i,count=0;
    printf("\nEnter the k integer number: ");
    scanf("%d", &k);
    printf("Divisor of %d are:", k);
    for (i = 1; i <= k; i++)
    {
        if ((k % i) == 0)
        {
            printf(" %d ",i);
            if(i%2==0){
                count+=1;
            }
        }
    }
    printf("\nNumber of even divisors : %d \n ", count);
    fflush(stdin);
}

struct cannedmilk
{
    char label[30];
    int weight, price;
};

void Q2()
{
    int n;
    while (1 == 1)
    {
        printf("Enter the number of canned milk : ");
        scanf("%d", &n);
        if (n >= 1 && n <= n + 1)
        {
            break;
        }
    }

    // khai bao bien mang ds[] chua n-hop sua mong muon
    struct cannedmilk ds[n];

    // vong lap nhap du lieu cho hop sua
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf(" Input for canned milk %d: \n", i + 1);
        printf(" Label: ");
        gets(ds[i].label);
        printf(" Weight: ");
        scanf("%d", &ds[i].weight);
        printf(" Price: ");
        scanf("%d", &ds[i].price);
    }

    // in ra danh sach cac hop sua
    printf("\nList of canned milk: \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Label: %s \nWeight: %d\nPrice:%d\n\n", ds[i].label, ds[i].weight, ds[i].price);
    }
    // cac hop sua co khoi luong tu >100 den <400
    printf("\nThe canned milk have weight >100 and <400 :\n\n");
    for (int i = 0; i < n; i++)
    {
        if (ds[i].weight >= 100 && ds[i].weight <= 400)
        {
            printf("Label: %s\nWeight: %d\nPrice:%d\n\n", ds[i].label, ds[i].weight, ds[i].price);
        }
    }
}
