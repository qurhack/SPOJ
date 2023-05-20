// https://pl.spoj.com/problems/RODZ_TRO/

#include <stdio.h>
#include <iostream>
#include <stdint.h>

#define TRIANGLE_SIDES 3

int main()
{
    uint16_t u16TriangleSideArr[TRIANGLE_SIDES];

    while(std::cin >> u16TriangleSideArr[0] >> u16TriangleSideArr[1] >> u16TriangleSideArr[2])
    {
        // Sort triangle sides array in descending order
        for(uint8_t u8ArrIter{TRIANGLE_SIDES-1}; u8ArrIter > 0; u8ArrIter--)
        {
            if(u16TriangleSideArr[u8ArrIter] > u16TriangleSideArr[u8ArrIter-1])
            {
                uint16_t u16Tmp = u16TriangleSideArr[u8ArrIter-1];
                u16TriangleSideArr[u8ArrIter-1] = u16TriangleSideArr[u8ArrIter];
                u16TriangleSideArr[u8ArrIter] = u16Tmp;
                u8ArrIter = TRIANGLE_SIDES;
            }
        }

        // Check if such triangle exists
        if(u16TriangleSideArr[0] >= (u16TriangleSideArr[1] + u16TriangleSideArr[2]))
        {
            printf("brak\n");
        }
        // Check if such triangle is rectangular
        else if((u16TriangleSideArr[0]*u16TriangleSideArr[0]) == ((u16TriangleSideArr[1]*u16TriangleSideArr[1])+(u16TriangleSideArr[2]*u16TriangleSideArr[2])))
        {
            printf("prostokatny\n");
        }
        // Check if such triangle is obtuse
        else if((u16TriangleSideArr[0]*u16TriangleSideArr[0]) > ((u16TriangleSideArr[1]*u16TriangleSideArr[1])+(u16TriangleSideArr[2]*u16TriangleSideArr[2])))
        {
            printf("rozwartokatny\n");
        }
        else
        {
            printf("ostrokatny\n");
        } 
    }
}