#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's your name?\n"); //Ask to the user name//
    printf("hello, %s\n", answer);
}
