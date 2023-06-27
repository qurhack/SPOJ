// https://pl.spoj.com/problems/XIWTPZA/
// Compile hint: use -lm flag to link math lib (e.g. gcc XIWTPZA.c -o XIWTPZA -lm)

#include <stdio.h>
#include <stdint.h>
#include <math.h>

void SwapSides(uint16_t* a_u16N1, uint16_t* a_u16N2)
{
    uint16_t u16Tmp = *a_u16N1;
    *a_u16N1 = *a_u16N2;
    *a_u16N2 = u16Tmp;
}

int main()
{
    uint64_t u64TestCases = 0ULL;
    scanf("%lu", &u64TestCases);

    uint16_t u16A1 = 0u;
    uint16_t u16B1 = 0u;

    uint16_t u16A2 = 0u;
    uint16_t u16B2 = 0u;

    for(uint64_t u64TestCase = 0ULL; u64TestCase < u64TestCases; u64TestCase++)
    {
        scanf("%hu %hu %hu %hu", &u16A1, &u16B1, &u16A2, &u16B2);
        if(u16B1 > u16A1)
        {
            SwapSides(&u16B1, &u16A1);
        }
        if(u16B2 > u16A2)
        {
            SwapSides(&u16B2, &u16A2);
        }

        if((u16A1 > u16A2) && (u16B1 > u16B2))
        {
            printf("TAK\n");
        }
        else if((u16A1 <= u16A2) && (u16B1 <= u16B2))
        {
            printf("NIE\n");
        }
        else
        {
            double dDiagonal1 = sqrt(pow(u16A1, 2) + pow(u16B1, 2));
            double dDiagonal2 = sqrt(pow(u16A2, 2) + pow(u16B2, 2));
            if(dDiagonal1 <= dDiagonal2)
            {
                printf("NIE\n");
            }
            else
            {
                double dOffsetA = 0.5 * u16A1 - sqrt(pow(0.5 * dDiagonal2, 2) - pow(0.5 * u16B1, 2));
                double dOffsetB = 0.5 * u16B1 - sqrt(pow(0.5 * dDiagonal2, 2) - pow(0.5 * u16A1, 2));
                double dOffestLen = sqrt(pow(dOffsetA, 2) + pow(dOffsetB, 2));

                if(dOffestLen > u16B2)
                {
                    printf("TAK\n");
                }
                else
                {
                    printf("NIE\n");
                }
            }
        }
    }
}