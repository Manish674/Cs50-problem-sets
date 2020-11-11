#include <stdio.h>
#include <cs50.h>
#include <math.h>

/* dollars are
    25
    10
    5
    1
*/
int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owned: ");
    } 
    while (dollars < 0);

    int cents = round(dollars * 100);

    int coins = 0;

    while(cents >= 25)
    {
        cents = cents - 25;
        coins += 1;
    }
    
    while(cents >= 10)
    {
        cents -= 10;
        coins += 1;
    }
    
    while(cents >= 5)
    {
        cents -= 5;
        coins += 1;
    }
    
    while(cents >= 1)
    {
        cents -= 1;
        coins += 1;;
    }

    printf("Coins used: %i\n", coins);
}