#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, j, height;
    j = 0;
    do
    {
        height = get_int("Height: ");
        //Ask the user to input
    }
    while (height < 1 || height > 8);
    //The programm will be executed only if the input is between 1 and 8
    for (i = 0; i < height; i++)
    {
        for (j = i; j < height - 1; j++)
        {
            printf(" ");
            //printing spaces to make a reverse pyramid
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
            //pyramid going to the left
        }
        printf("\n");
    }
}
