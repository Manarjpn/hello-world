#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j, k;
    do
    {
        height = get_int("Height : ");
    }
    while (height < 1 || height > 8);

    for (i = 0; i < height; i++)
    {
        for (j = i; j < height - 1; j++)
        {
            printf(" ");
            /*For the spaces in left side*/
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
            /*For the left pyramid*/
        }
        for (int g = height; g < height + 2; g++)
        {
            printf(" ");
            /*for the gap*/

        }
        for (int d = height + height - 1; d < 2 * height; d++)
        {
            for (int h = 0; h < i + 1; h++)
            {
                printf("#");
                /*for the right side*/
            }
        }
        printf("\n");
    }
}
