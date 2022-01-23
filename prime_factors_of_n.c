#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    int factorialArray[num];

    for(int i = 0; i < num; i++)
    {
        factorialArray[i] = 0;
    }

    for(int i = 2; i <= num; i++)
    {
        int j = 2;
        int num = i;

        while(num != 1)
        {
            if(num % j == 0)
            {
                while(num % j == 0)
                {
                    factorialArray[j - 1] += 1;
                    num = num / j;
                }
            }
            j++;
        }
    }

    for(int i = 1; i < num; i++)
    {
        if(factorialArray[i] > 0)
        {
            printf("(%d, %d) ", i+1, factorialArray[i]);
        }
    }
}
