// https://pl.spoj.com/problems/WSEGA/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t u64TestCases = 0ULL; 
    scanf("%lu", &u64TestCases);

    uint16_t u16Segments = 0u;
    uint32_t u32LegsInSegment = 0UL;

    for(uint64_t u64TestCase = 0ULL; u64TestCase < u64TestCases; u64TestCase++)
    {
        uint64_t u64DaysLived = 0ULL;

        scanf("%hu", &u16Segments);
        for(uint16_t u16Segment = 0u; u16Segment < u16Segments; u16Segment++)
        {
            scanf("%u", &u32LegsInSegment);
            u64DaysLived += u32LegsInSegment;
        }

        if((0ULL == u64DaysLived) && (1u == u16Segments))
        {
            printf("0\n");
        }
        else
        {
            u64DaysLived = u64DaysLived + u16Segments - 1ULL;
            printf("%lu\n", u64DaysLived);
        }
    }
}
