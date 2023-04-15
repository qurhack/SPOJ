// https://pl.spoj.com/problems/EUCGAME/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t u8Tests;
    scanf("%hhu",&u8Tests);
    for(uint8_t u8TestCase = 0u; u8TestCase < u8Tests; u8TestCase++)
    {
        uint32_t u32TokensA;
        uint32_t u32TokensB;
        scanf("%u %u", &u32TokensA, &u32TokensB);

        while((u32TokensA != u32TokensB) && ((u32TokensA != 0UL) || (u32TokensB != 0UL)))
        {
            if(u32TokensA > u32TokensB)
            {
                u32TokensA = u32TokensA - u32TokensB;
            }
            else if(u32TokensA < u32TokensB)
            {
                u32TokensB = u32TokensB - u32TokensA;
            }
        }
        printf("%d\n", u32TokensA+u32TokensB);
    }
    return 0;
}