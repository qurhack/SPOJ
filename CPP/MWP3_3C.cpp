// https://pl.spoj.com/problems/MWP3_3C/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t u8TotalTests{0u};
    scanf("%hhu", &u8TotalTests);
    for(uint8_t u8Test{0u}; u8Test < u8TotalTests; u8Test++)
    {
        uint64_t u64TotalLines{0UL};
        scanf("%lu", &u64TotalLines);
        uint64_t u64NimSum{0UL};
        bool bNimStarted = false;

        for(uint64_t u64CurrentLine{0UL}; u64CurrentLine < u64TotalLines; u64CurrentLine++)
        {
            uint64_t u64LineChars{0UL};
            scanf("%lu", &u64LineChars);
            if(false == bNimStarted)
            {
                u64NimSum = u64LineChars;
                bNimStarted = true;
                continue;
            }
            u64NimSum ^= u64LineChars;
        }
        if((0UL != u64NimSum) || (1UL == u64TotalLines))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
}