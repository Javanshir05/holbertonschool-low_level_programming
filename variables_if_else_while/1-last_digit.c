#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - 
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    printf("%d", n);
    
    if (n % 10 > 5)
    {
        printf("Last digit of" + n + "is greater than 5");
    }
    else if (n % 10 == 0)
    {
        printf("Last digit of" + n + "is 0");
    }
    else if (n % 10 < 6 && n != 0)
    {
        printf("Last digit of" + n + "is less than 6 and not 0");
    }
    
    return (0);
}