# CS50_Week-2_-Readability

Calculate readability from Harvard CS50. 

The following code implements a program that calculates the approximate grade level needed to comprehend some text. The program prints output “Grade X” where “X” is the grade level computed, rounded to the nearest integer. If the grade level is 16 or higher (equivalent to or greater than a senior undergraduate reading level), the program outputs “Grade 16+” instead of giving the exact index number. If the grade level is less than 1, the program outputs “Before Grade 1”.

The readability test uses Coleman-Liau index to grade calculate. The formula is

index = 0.0588 * L - 0.296 * S - 15.8

where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.
