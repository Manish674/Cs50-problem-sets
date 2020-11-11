#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int get_index(string s);

int main(void)
{
  //Getting the text from user.
    string text = get_string("Text: ");

    int grade = get_index(text);

    //Validating the grade 
    if(grade < 1) {
      printf("Before grade 1\n");
    }

    else if(grade > 16) {
      printf("Grade 16+\n");
    }

    else {
      printf("Grade %i\n", grade);
    }
}


int get_index(string s)
{
    int letters = 0;
    int words = 0; 
    int sentences = 0; 
    int len = strlen(s);
    
    for(int i = 0; i < len; i++)
    {
        char w = s[i];
        if(isalpha(w)) {
          letters++;
        }

        else if(isspace(w)) {
          words++;
        }

        else if(w == '?' || w == '.' || w == '!'){
          sentences++; 
        }
    }
    words += 1;
    
    // L is the average number of letters per 100 words 
    //S is the average number of sentences per 100 words 
    float L = (letters * 100.00) / words; 
    float S = (sentences * 100.00) / words; 

    float index = round(0.0588 * L - 0.296 * S - 15.8);
    return index;
}
