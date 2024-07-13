#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int quarters = 25, dimes = 10, nickels = 5, pennies = 1;
    int coins = 0;
    int cents;
    float dollars;

    do 
    {
        dollars = get_float("Change owed: ");  //ask the user to write a number
        cents = round(dollars * 100);  //Convert dollars into cents
    }
    while (dollars < 0);
    while (cents >= 25)
    {
        cents -= 25;//take off 25 everytime until the end
        coins++;
    }

    while (cents >= 10)
    {
        cents -= 10;//take off 10 everytime until the end
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;//take off 5 everytime until the end
        coins++;
    }

    while (cents >= 1)
    {
        cents -= 1;//take off 1 everytume until the end
        coins++;
    }

    printf("%i\n", coins);
}
