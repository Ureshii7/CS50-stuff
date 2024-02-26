#include <cs50.h>
#include <stdio.h>

void print_spaces(int spaces);
void print_hashes(int hashes);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        print_spaces(height - i); // The spaces.
        print_hashes(i);          // Left hand hashes.
        printf("  ");             // Middle spaces.
        print_hashes(i);          // Right hand hashes.
        printf("\n");
    }

    return 0;
}

void print_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}

void print_hashes(int hashes)
{
    for (int i = 0; i < hashes; i++)
    {
        printf("#");
    }
}
