#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string s = argv[1];
    if (argc != 2)
    {
        printf("Usage : ./caesar key\n"); //if the use provides no command-line arguments, or two or more
        return 1;
    }


    for (int i = 0; i < strlen(s); i++)
    {
        if (((argv[1][i] >= 'a') && (argv[1][i] <= 'z')) || ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z')))
        {
            printf("Usage: ./caesar key \n"); //if any of the characters of the command-line argument is not a decimal digit
            return 1;
        }
    }
    printf("Success\n%i\n", atoi(argv[1])); //if the user provides exactly one command-line argument

    int key = atoi(argv[1]); //Converting string into a number
    string plaintext = get_string("plaintext: "); //Prompt the use for a string of plaintext
    printf("ciphertext: ");
    string ciphertext = plaintext;

    for (int j = 0; j < strlen(plaintext); j++)
    {
        if ((plaintext[j] >= 'a') && (plaintext[j] <= 'z'))
        {
            ciphertext[j] = (plaintext[j] - 'a' + key) % 26 + 'a'; 
        }
        else if ((plaintext[j] >= 'A') && (plaintext[j] <= 'Z'))
        {
            ciphertext[j] = (plaintext[j] - 'A' + key) % 26 + 'A';
        }
    }
    printf("%s\n", ciphertext);
     
    return 0;
}
