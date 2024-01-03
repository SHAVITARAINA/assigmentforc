#include <stdio.h>
int isJumpingNumber(int num) 
{
    int prevDigit = -1;
    while (num > 0) 
    {
        int currentDigit = num % 10;
        if (prevDigit != -1 && abs(prevDigit - currentDigit) != 1) 
        {
            return 0; 
        }
        prevDigit = currentDigit;
        num /= 10;
    }
    return 1; 
}

int main() 
{
    printf("Largest three-digit jumping numbers:\n");

    for (int i = 999; i >= 100; i--)
    {
        if (isJumpingNumber(i)) 
        {
            printf("%d\n", i);
            break; 
        }
    }

    return 0;
}
