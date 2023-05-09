// https://pl.spoj.com/problems/PP0602B/
// At the end - add u to nums etc. (coding guidelines), initialize variables to 0

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t u64Tests;
    scanf("%lu", &u64Tests);

    for(uint64_t u64TestCase = 0ULL; u64TestCase < u64Tests; u64TestCase++)
    {
        // Create multi dimensional array based on input.
        uint8_t u8Rows = 0u;
        uint8_t u8Columns = 0u;
        scanf("%hhd %hhd", &u8Rows, &u8Columns);
        uint64_t au64Nums[u8Rows][u8Columns]; // maximum value for such array is reserved by compiler (256x256)

        // Get array values from input.
        for(uint8_t u8Row = 0u; u8Row < u8Rows; u8Row++)
        {
            for(uint8_t u8Column = 0u; u8Column < u8Columns; u8Column++)
            {
                uint64_t u64TmpNum = 0ULL;
                scanf("%lu", &u64TmpNum);
                au64Nums[u8Row][u8Column] = u64TmpNum;
            }
        }

        // Rotate frame to the left

        // Top row
        uint64_t u64LeftCornerValue = au64Nums[0][0];
        uint8_t u8Row = 0u;
        for(uint8_t u8Column = 0u; u8Column < u8Columns-1; u8Column++)
        {
            au64Nums[u8Row][u8Column] = au64Nums[u8Row][u8Column+1];
        }

        // Right column
        uint8_t u8Column = u8Columns-1u;
        for(uint8_t u8Row = 0u; u8Row < u8Rows-1u; u8Row++)
        {
            au64Nums[u8Row][u8Column] = au64Nums[u8Row+1][u8Column];
        }

        // Bottom row
        u8Row = u8Rows-1u;
        for(uint8_t u8Column = u8Columns-1u; u8Column >= 1u; u8Column--)
        {
            au64Nums[u8Row][u8Column] = au64Nums[u8Row][u8Column-1u];
        }

        // Left column
        u8Column = 0u;
        for(uint8_t u8Row = u8Rows-1u; u8Row >= 1u; u8Row--)
        {
            au64Nums[u8Row][u8Column] = au64Nums[u8Row-1u][u8Column];
        }

        // Put back missing base top left corner value to proper place. 
        au64Nums[1][0] = u64LeftCornerValue;

        // Print Result
        for(uint8_t u8Row = 0u; u8Row < u8Rows; u8Row++)
        {
            for(uint8_t u8Column = 0u; u8Column < u8Columns; u8Column++)
            {
                printf("%lu ", au64Nums[u8Row][u8Column]);
            }
            printf("\n");
        }
    }
}