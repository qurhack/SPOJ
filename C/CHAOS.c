// https://pl.spoj.com/problems/CHAOS/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

uint8_t StrToU8(char* a_cString)
{
    return atoi(a_cString);
}

void U8ToStr(uint8_t a_u8Num, char* a_cBuff)
{
    if(10u > a_u8Num)
    {
        sprintf(a_cBuff, "0%hhu", a_u8Num);
    }
    else
    {
        sprintf(a_cBuff, "%hhu", a_u8Num);
    } 
}

uint8_t IsPalindrome(char* a_cHours, char* a_cMinutes)
{
    uint8_t u8RetVal = 0u;
    uint8_t u8Hours = StrToU8(a_cHours);
    uint8_t u8Minutes = StrToU8(a_cMinutes);
    
    if((0u == u8Hours) && (9u >= u8Minutes)) // eg: 00:01, 00:02
    {
        u8RetVal = 1u;
    }
    else if((0u == u8Hours) && (10u <= u8Minutes)) // eg: 00:11, 00:12 
    {
        if(a_cMinutes[0] == a_cMinutes[1])
        {
            u8RetVal = 1u;
        }
        else
        {
            u8RetVal = 0u;
        }
    }
    else if((9u >= u8Hours)) // eg: 07:37, 07:38
    {
        if((a_cHours[1] == a_cMinutes[1]))
        {
            u8RetVal = 1u;
        }
        else
        {
            u8RetVal = 0u;
        }
    }
    else if((a_cHours[0] == a_cMinutes[1]) && (a_cHours[1] == a_cMinutes[0])) // eg: 12:21, 12:22 
    {
        u8RetVal = 1u;
    }
    else
    {
        u8RetVal = 0u;
    }

    return u8RetVal;
}

void IncreaseHour(char* a_cHours, char* a_cMinutes)
{
    uint8_t u8Hours = StrToU8(a_cHours);
    uint8_t u8Minutes = StrToU8(a_cMinutes);

    if((23u == u8Hours) && (59u == u8Minutes))
    {
        U8ToStr(0u, a_cHours);
        U8ToStr(0u, a_cMinutes);
    }
    else if((23u > u8Hours) && (59u == u8Minutes))
    {
        U8ToStr(++u8Hours, a_cHours);
        U8ToStr(0u, a_cMinutes);
    }
    else
    {
        U8ToStr(++u8Minutes, a_cMinutes);
    }
}

int main()
{
    uint64_t u64Tests = 0ULL;
    scanf("%lu", &u64Tests);
    for(uint64_t u64Test = 0ULL; u64Test < u64Tests; u64Test++)
    {
        char cHours[3]; // HH + \0
        char cMinutes[3]; // MM + \0
        char buffer[6]; // HH:MM + \0
        scanf("%s", buffer);
        sscanf(buffer, "%2s:%2s", cHours, cMinutes);

        do
        {
            IncreaseHour(cHours, cMinutes);
        } while(0 == IsPalindrome(cHours, cMinutes));
        
        printf("%s:%s\n", cHours, cMinutes);
    }
}