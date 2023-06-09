 // https://pl.spoj.com/problems/PTWPZ083/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER_SIZE 99
#define ASCII_ZERO 48

int main()
{
    uint8_t u8TestCases = 0u;
    scanf("%hhu ",&u8TestCases); // space after %hhu ignores '\n' and doesn't add it to the buffer

    for(uint8_t u8TestCase = 0; u8TestCase < u8TestCases; u8TestCase++)
    {
        uint8_t buff[BUFFER_SIZE] = {'\0'};
        uint8_t u8CalculationChar = 0u;
        while((buff[u8CalculationChar] = getchar()) && ('\n' != buff[u8CalculationChar]))
        {
            u8CalculationChar++;
        }

        uint8_t u8BufferIterator = 0u;
        int iSolution = buff[u8BufferIterator]-ASCII_ZERO;
        while(u8BufferIterator < u8CalculationChar)
        {
            if(45u == buff[u8BufferIterator])
            {
                iSolution -= (int)(buff[++u8BufferIterator]-ASCII_ZERO);
            }
            else if(43u == buff[u8BufferIterator])
            {
                iSolution += (int)(buff[++u8BufferIterator]-ASCII_ZERO);
            }
            else
            {
                u8BufferIterator++;
            }
        }
        printf("%d\n", iSolution);
    }

    return 0;
}

