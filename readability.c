#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Declaring prototypes
int cal_grade(string message);
void grade_check(int grade);

int main(void)
{
    // Taking user input of string
    string message = get_string("Text: ");

    // Calling fuctions
    int grade = cal_grade(message);
    grade_check(grade);
}

// Calculating grade
int cal_grade(string message)
{
    // Initiallizing L for Avg Letter,W for words, S for Avg Sentences and n for string lenght
    int letter = 0;
    int word = 1;
    int sentence = 0;
    int n = strlen(message);

    // Calculating Average letter in message
    for (int i = 0; i < n; i++)
    {
        // Checking each character is letter
        if (message[i] >= 65 && message[i] <= 122)
        {
            if (isalpha(message[i]))
            {
                letter++;
            }
        }

        // Checking for spaces to calculate words
        else if (message[i] == ' ')
        {
            word++;
        }

        // Checking for period, exclamation mark, and question mark to identify sentences
        else if (message[i] == '.' || message[i] == '!' || message[i] == '?')
        {
            sentence++;
        }
    }

    // Implementing Coleman-Liau Index
    float index = 0.0;
    float L = 100.0 * letter / word;
    float S = 100.0 * sentence / word;

    index = round(0.0588 * L - 0.296 * S - 15.8);

    return index;
}

// Checking grade
void grade_check(int grade)
{
    // checking grade level
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
