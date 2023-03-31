//https://pl.spoj.com/problems/PTWPZ073/

#include <stdio.h>
#include <stdint.h>

void letterToNumber(char* cLetter);

int main()
{
   uint8_t u8TotalTests;
   scanf("%hhu", &u8TotalTests);
   for(uint8_t u8TestsIterator = 0u; u8TestsIterator < u8TotalTests; u8TestsIterator++)
    {
        char sLetters[20] = {0}; // 20 is maximum size of the letters input
        scanf("%20s",&sLetters[0]); // get only 20 letters 
        for(uint8_t u8LetterIterator = 0u; u8LetterIterator < 20u; u8LetterIterator++)
        {
            if(0 == sLetters[u8LetterIterator])
            {
                break;
            }
            letterToNumber(&sLetters[u8LetterIterator]);
        }
        printf("\n");
    }

    return 0;
}

void letterToNumber(char* cLetter)
{
    if((65u <= *cLetter) && (67u >= *cLetter))
    {
        printf("2");
    }
    else if((68u <= *cLetter) && (70u >= *cLetter))
    {
        printf("3");
    }
    else if((71u <= *cLetter) && (73u >= *cLetter))
    {
        printf("4");
    }
    else if((74u <= *cLetter) && (76u >= *cLetter))
    {
        printf("5");
    }
    else if((77u <= *cLetter) && (79u >= *cLetter))
    {
        printf("6");
    }
    else if((80u <= *cLetter) && (83u >= *cLetter))
    {
        printf("7");
    }
    else if((84u <= *cLetter) && (86u >= *cLetter))
    {
        printf("8");
    }
    else if((87u <= *cLetter) && (90u >= *cLetter))
    {
        printf("9");
    }
}