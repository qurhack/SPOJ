// https://pl.spoj.com/problems/DOUGHNUT/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t u8Tests = 0;
    scanf("%hhd", &u8Tests);
    for(uint8_t u8TestCase = 0; u8TestCase < u8Tests; u8TestCase++)
    {
        uint8_t u8Cats = 0;
        uint8_t u8HarryCapacity = 0;
        uint8_t u8DonutWeight = 0;
        
        scanf("%hhd %hhd %hhd", &u8Cats, &u8HarryCapacity, &u8DonutWeight);
        if((u8DonutWeight * u8Cats) <= u8HarryCapacity)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}