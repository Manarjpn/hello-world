#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    
    int index, count_letters, count_words, count_sentence;
    string text;
    count_letters = 0;
    count_words = 1;
    count_sentence = 0;

    text = get_string("Text: ");//Ask the user to insert a text
    
    for (int i = 0; i < strlen(text); i++)
    {
        
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            count_letters++; //To count letters in each word
        }
        
        if (text[i] == ' ')
        {
            count_words++; //To count each word in each sentences
        }
        
        if ((text[i] == '.') || (text[i] == '?') || (text[i] == '!')) //To count each sentences in the text
        {
            count_sentence++;
        }
        
    }
    
    float L, S;
    L = (count_letters * 100) / (float)count_words; //Average number of letters per 100 words in the text
    S = (count_sentence * 100) / (float)count_words; //Average number of sentences per 100 words in the text
    
    index = round(0.0588 * L - 0.296 * S - 15.8);
    
    if (index >= 16)
    {
        printf("Grade 16+\n");   
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
