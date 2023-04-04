// https://pl.spoj.com/problems/PTCLTZ/

#include <stdio.h>
#include <stdint.h>

int main()
{

    uint16_t u8NumberOfTests; 
    scanf("%hu", &u8NumberOfTests);

    for(uint16_t u8TestCase = 0u; u8TestCase < u8NumberOfTests; u8TestCase++)
    {
        uint64_t s; 
        scanf("%lu", &s);

        uint64_t n = 0u;
        while(1u != s)
        {
            if(s % 2ULL == 0ULL)
            {
                s = s / 2ULL; 
            }
            else
            {
                s = 3ULL * s + 1ULL;
            }
            n++;
        }
        printf("%lu\n", n);
    }

    return 0;
}