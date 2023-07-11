// https://pl.spoj.com/problems/PROGC02/

#include <stdio.h>
#include <stdint.h>

#define MAX_INPUT 1001
#define CHARS_NUM 256

int main()
{
    uint16_t a_u16Ascii[CHARS_NUM] = {0U};
    int iInput;
    while(EOF != (iInput = getchar()))
    {
        a_u16Ascii[iInput]++;
    }

    for(uint16_t u16AsciiIter = 0U; u16AsciiIter < CHARS_NUM; u16AsciiIter++)
    {
        if(0 != a_u16Ascii[u16AsciiIter])
        {
            printf("%d %d\n", u16AsciiIter, a_u16Ascii[u16AsciiIter]);
        }
    }
    
    return 0;
}