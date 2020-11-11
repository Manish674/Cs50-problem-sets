#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int height;

    do 
    {
        height = get_int("Height: ");
    }
    while(height < 0 | height > 9);

    //Printing spaces.
    for(int r = 0; r < height; r++)
    {
        for(int s = 0; s < height - r - 1; s++)
        {
            printf(" ");
        }

        //Printing the left pyramid.
        for(int c = 0; c <= r; c++)
        {
            printf("#");
        }

        //printing two spaces between left and right pyramid.
        printf("  ");

        //printing the final pyramid.
        for(int i = 0; i <= r; i++)
        {
            printf("#");
        }

        //printing newline.
        printf("\n");
    }
}