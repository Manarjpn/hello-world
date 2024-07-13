#include <cs50.h>
#include <stdio.h>
#include <math.h>

int longueur(long value);

int main(void)
{
    int last_digit;
    int m, sum = 0;
    long number;

    do
    {
        number = get_long("Number: ");//Ask the user to insert a number
    }
    while (number < 0);  
    long card_number = number;

    card_number = number / 10;//starting with the number's second-to-last digit 

    while (card_number > 0)
    {
        last_digit = card_number % 10;
        m = last_digit * 2; //Multiply every other digit by 2
        sum += (m % 10) + (m / 10); //Add those product's digit together
        card_number = card_number / 100; //Decrementing by 2    
    }

    card_number = number;

    while (card_number > 0)
    {
        last_digit = card_number % 10;//Starting with the last digit 
        sum += last_digit; //Add the sum of the digits
        card_number = card_number / 100; //Decrementing by 2
    }

    if (sum % 10 == 0) //If the total's last digit is 0, the number is valid
    {
        int test0, test, test2, test3;
        test0 = number / pow(10, 14);
        test = number / pow(10, 13);
        test2 = number / pow(10, 15);
        test3 = number / pow(10, 12);
        
        if (longueur(number) == 16) 
        {
            //For VISA
            if (test2 == 4)
            {
                printf("VISA\n");
            }
            //For MASTERCARD
            else if (test0 == 51 || test0 == 52 || test0 == 53 || test0 == 54 || test0 == 55)
            {
                printf("MASTERCARD\n");            
            }
            else
            {
                printf("INVALID\n");
            }    
        }
        else if ((longueur(number) == 13) && (test3 == 4))
        {
            printf("VISA\n");
        }
        
        else if (longueur(number) == 15 && ((test == 34) || (test == 37))) 
        {
            printf("AMEX\n");
        }     
        else
        {
            printf("INVALID\n");
        }    
    }  
    else 
    {
        printf("INVALID\n");//If the total's last digit isn't 0 
    }
}

int longueur(long value)
{
    int re = 0;
    if (value < 0)
    {
        re++;
        value = -1 * value;
    }
    while (value != 0)
    {
        re++;
        value = value / 10;
    }
    return re; 
} 
