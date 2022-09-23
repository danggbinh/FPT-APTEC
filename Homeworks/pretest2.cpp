#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Q1();
void Q2();

int main()
{
    system("cls");

    int option = 0;
    do
    {
        printf("\n***** WELCOME PRETEST 4 *****\n");
        printf("1. Question 1\n");
        printf("2. Question 2\n");
        printf("3. Quit program\n");

        printf("input option [1-3]:");
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
{int x, i;
     printf("\nInput an integer: ");
     scanf("%d", &x);
     printf("All the divisor of %d are: ", x);
     for (i = 1; i <= x; i++)
     {
          if ((x % i) == 0)
          {
               if ((i % 2) == 1)
               {
                    printf("\n%d", i);
               }
          }
     }
}


void Q2()
{
}