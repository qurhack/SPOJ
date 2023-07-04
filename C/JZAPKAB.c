// https://pl.spoj.com/problems/JZAPKAB/

#include <stdio.h>
#include <stdint.h>

#define MAP_SIZE 23
#define BUFF_SIZE 26 // 25 + \0

char acLetters[MAP_SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'v', 'x', 'y', 'z'};
int aiNums[MAP_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500};

uint16_t CharToNum(char a_cChar)
{
    for(uint8_t u8Iter = 0u; u8Iter < MAP_SIZE; u8Iter++)
    {
        if(acLetters[u8Iter] == a_cChar)
        {
            return aiNums[u8Iter];
        }
    }
}

int main()
{
    char cBuff[BUFF_SIZE] = {'\0'}; 
    size_t cBuffSize = 26;
    scanf("%s", cBuff);
    
    uint8_t u8cBuffIterator = 0u;
    uint16_t u16Sum = 0u;
    while('\0' != cBuff[u8cBuffIterator])
    {
        u16Sum += CharToNum(cBuff[u8cBuffIterator]);
        u8cBuffIterator++;
    }
    printf("%hu\n", u16Sum);

    return 0;
}