#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc,  string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./ceaser key");
        return 1;
    }

    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("Usage: ./ceaser key");
        return 1;
    }
    string plaintext = get_string("Plaintext: ");
    int len = strlen(plaintext);
    printf("ciphertext: ");


    for(int i = 0; i < len; i++)
    {
        if (isalpha(plainchar))
        {
            if (islower(plainchar))
            {
                int x = (int)plainchar - 97;
                int y = (x + key)%26;
                int z = (y + 97);
                printf("%c", z);
            }

            else if(isupper(plainchar))
            {
                int a = (int)plainchar - 65;
                int b = (a + key)%26;
                int c = (b + 65);
                printf("%c", c);
            }
        }
        else
        {
            printf("%c", plainchar);
        }
    }
    printf("\n");
}


