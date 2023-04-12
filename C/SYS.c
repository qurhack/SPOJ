// https://pl.spoj.com/problems/SYS/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define U32_BYTE_SIZE 8
#define HEX_ELEMENTS 16

void transformAndPrintNum(bool a_bIsSysHex, uint32_t a_u32Num);

int main()
{
    uint16_t u16TestCases;
    scanf("%hu", &u16TestCases);

    for(uint16_t u16TestCase = 0u; u16TestCase < u16TestCases; u16TestCase++)
    {
        uint32_t u32Num;
        scanf("%u", &u32Num);
        transformAndPrintNum(true, u32Num);
        printf(" ");
        transformAndPrintNum(false, u32Num);
        printf("\n");
    }

    return 0;
}

void transformAndPrintNum(bool a_bIsSysHex, uint32_t a_u32Num)
{
    char arrSymbols[HEX_ELEMENTS] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    uint8_t u8TransformSys;
    if(true == a_bIsSysHex)
    {
        u8TransformSys = 16u;
    }
    else
    {
        u8TransformSys = 11u;
    }

    char arrTransformedParts[U32_BYTE_SIZE] = {0}; // Initialize array with Null values
    uint8_t u8TransformedPartIterator = (uint8_t)U32_BYTE_SIZE-1u; // -1u to fit in array size

    while(a_u32Num > 0UL)
    {
        uint8_t u8TransformedPart = (uint8_t)(a_u32Num % u8TransformSys); 
        arrTransformedParts[u8TransformedPartIterator] = arrSymbols[u8TransformedPart];
        u8TransformedPartIterator--;
        a_u32Num = a_u32Num / (uint32_t)(u8TransformSys);
    }

    // u8TransformedPartIterator+1u in order to start iterating from youngest element in the table avoding all Null values
    for(uint8_t u8TransformedPartsArrIterator = u8TransformedPartIterator+1u; u8TransformedPartsArrIterator < U32_BYTE_SIZE; u8TransformedPartsArrIterator++)
    {
        printf("%c", arrTransformedParts[u8TransformedPartsArrIterator]);
    }
}