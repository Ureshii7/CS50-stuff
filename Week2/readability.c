// Libs used.
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Input.
    string input = get_string("Input: ");

    // Input Length and Initial Values.
    int n = strlen(input);
    int letters = 0;
    int sentence = 0;
    int words = 0;

    // Words, Letters & Sentence Calculation.
    for (int i = 0; i < n; i++)
    {
        char x = input[i];
        if (isalpha(x) != 0)
        {
            letters++;
        }

        if (x == ' ')
        {
            words++;
        }

        if (x == '.' || x == '!' || x == '?')
        {
            sentence++;
        }
    }

    // Extra.
    words = words + 1;

    // Grade Calculation.
    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentence / (float) words) * 100;
    int index = round((0.0588 * L) - (0.296 * S) - 15.8);

    // Output Criterias.
    if (index > 16)
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

    return 0;
}
