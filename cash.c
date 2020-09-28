#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    int coins = 0;
    //Prompt user for input
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);

    //Converting dollars to cents
    dollars *= 100;
    int change = round(dollars);
    int quarters = 0;
    int nickels = 0;
    int dimes = 0;
    int pennies = 0;

    while (change > 0)
    {
        //Calculating quarters
        if (change >= 25)
        {
            coins += change / 25;
            quarters = change / 25;
            change = change % 25;
        }
        //Calculating dimes
        else if (change >= 10)
        {
            coins += change / 10;
            dimes = change / 10;
            change = change % 10;
        }
        //Calculating nickels
        else if (change >= 5)
        {
            coins += change / 5;
            nickels = change / 5;
            change = change % 5;
        }
        //Calculating pennies
        else
        {
            coins += change;
            pennies = change;
            change = 0;
        }
    }
    printf("%i\n", coins);
    //printf("Quarters: %i\n", quarters);
    //printf("Nickels: %i\n", nickels);
    //printf("Dimes: %i\n", dimes);
    //printf("Pennies: %i\n", pennies);
}