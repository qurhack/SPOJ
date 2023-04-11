// https://pl.spoj.com/problems/SKARBFI/

#include <stdio.h>
#include <stdint.h> 

typedef enum
{
    North,
    South,
    West,
    East
} eDirections;

#define WELL_X 0
#define WELL_Y 0

void printNS(int32_t a_i32Steps);
void printWE(int32_t a_i32Steps);

int main()
{
    uint8_t u8Tests;
    scanf("%hhu", &u8Tests);
    for(uint8_t u8TestCase = 0u; u8TestCase < u8Tests; u8TestCase++)
    {
        uint32_t u32Hints;
        scanf("%u", &u32Hints);

        int32_t i32TreasureX = 0;
        int32_t i32TreasureY = 0;
        
        for(uint32_t u32Hint = 0UL; u32Hint < u32Hints; u32Hint++)
        {
            uint16_t u16Direction;
            uint16_t u16Steps;
            scanf("%hu %hu", &u16Direction, &u16Steps); // Take two inputs in one scanf

            if(North == u16Direction)
            {
                i32TreasureY = i32TreasureY + u16Steps;
            }
            else if(South == u16Direction)
            {
                i32TreasureY = i32TreasureY - u16Steps;
            }
            else if(West == u16Direction)
            {
                i32TreasureX = i32TreasureX - u16Steps;
            }
            else if(East == u16Direction)
            {
                i32TreasureX = i32TreasureX + u16Steps;
            }
        }

        // printf("Treasure X: %d, Treasure Y: %d\n", i32TreasureX, i32TreasureY); // DEBUG
        
        if((WELL_X == i32TreasureX) && (WELL_Y == i32TreasureY)) // Well position is (0,0)
        {
            printf("studnia\n");
        }
        else if(WELL_X == i32TreasureX)
        {
            printNS(i32TreasureY);
        }
        else if(WELL_Y == i32TreasureY)
        {
            printWE(i32TreasureX);
        }
        else
        {
            printNS(i32TreasureY);
            printWE(i32TreasureX);
        }
    }

    return 0;
}

void printNS(int32_t a_i32Steps)
{
    if(0 < a_i32Steps)
    {
        printf("%d %d\n", North, a_i32Steps);
    }
    else
    {
        a_i32Steps = a_i32Steps * -1; // turn a_i32Steps to absolute value
        printf("%d %d\n", South, a_i32Steps);
    }
}
void printWE(int32_t a_i32Steps)
{
    if(0 < a_i32Steps)
    {
        printf("%d %d\n", East, a_i32Steps);
    }
    else
    {
        a_i32Steps = a_i32Steps * -1; // turn a_i32Steps to absolute value
        printf("%d %d\n", West, a_i32Steps);
    }
}