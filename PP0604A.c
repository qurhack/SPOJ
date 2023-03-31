//https://pl.spoj.com/problems/PP0604A/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t u8Tests;
    scanf("%hhu", &u8Tests);
    for(uint8_t u8TestCase = 0u; u8TestCase < u8Tests; u8TestCase++)
    {
        uint8_t u8ArraySize;
        scanf("%hhu", &u8ArraySize);
        uint8_t anu8NumsArray[u8ArraySize];
        
        uint16_t u16ArraySum = 0;
        for(uint8_t u8Num = 0u; u8Num < u8ArraySize; u8Num++)
        {
            uint8_t u8TmpNum;
            scanf("%hhu", &u8TmpNum);
            anu8NumsArray[u8Num] = u8TmpNum;
            u16ArraySum += u8TmpNum;
        }
        
        double dArrayAv = (double)u16ArraySum / (double)u8ArraySize;
        double andNumsDiffFromAv[u8ArraySize];
        uint8_t u8Min = 0u;
        for(uint8_t u8Num = 0u; u8Num < u8ArraySize; u8Num++)
        {
            andNumsDiffFromAv[u8Num] = dArrayAv - (double)anu8NumsArray[u8Num];
            if(0 > andNumsDiffFromAv[u8Num])
            {
                andNumsDiffFromAv[u8Num] *= -1;
            }
            if(andNumsDiffFromAv[u8Num] < andNumsDiffFromAv[u8Min])
            {
                u8Min = u8Num;
            }
        }
        
        printf("%hhu\n", anu8NumsArray[u8Min]);
    }

    return 0;
}

