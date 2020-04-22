#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask player for height    
    int height = get_int("Height: ");
    // Check that height is less than 1 or greater than 8
    while (height < 1 || height > 8) 
    {
        height = get_int("Height: ");
    }
    // build Pyramid
    for (int i = 1; i <= height; i++)
    {
        // loop adding spaces
        for (int w = height-i; w > 0 ; w--)
        {
            printf(" ");
        }
        // loop adding hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        // add new line after each iteration
        printf("\n");
    }       
}
