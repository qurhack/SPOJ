// https://pl.spoj.com/problems/KC005/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

uint8_t isNumber(char* a_sStr)
{
    // Returns 1 if all characters in passed string are digits, return 0 otherwise.
    uint8_t u8RetVal = 1U;
    for(uint8_t u8CharIter = 0U; u8CharIter < strlen(a_sStr); u8CharIter++)
    {
        if(0 == isdigit(a_sStr[u8CharIter]))
        {
            u8RetVal = 0U;
            break;
        }
    }

    return u8RetVal;
}

typedef struct 
{
    char cName[11];
    char cSurname[21];
    char cYear[5];
    char cMonth[3];
    char cDay[3];
    // +1 char in each input for null-terminator char.
} sFormData;

int main()
{
    char* cFormBuff = NULL;
    size_t stFormBuffSize = 71;
    cFormBuff = (char*)calloc(stFormBuffSize, sizeof(char));

    while(-1 != getline(&cFormBuff, &stFormBuffSize, stdin))
    {
        sFormData sForm;
        sscanf(cFormBuff, "Imie: %10[^;]; Nazwisko: %20[^;]; Data ur.: %4s-%2s-%2s",
        sForm.cName, sForm.cSurname, sForm.cYear, sForm.cMonth, sForm.cDay);
        
        uint8_t u8ReturnCode = 3U;

        // Check if 0 should be printed        
        uint8_t u8CharIterator = 0U;
        if(0 == isupper(sForm.cName[u8CharIterator]))
        {
            u8ReturnCode = 0U;
        }
        else
        {
            u8CharIterator++;
            while('\0' != sForm.cName[u8CharIterator])
            {
                if(0 == islower(sForm.cName[u8CharIterator])) 
                {
                    u8ReturnCode = 0U;
                    break;
                }
                u8CharIterator++;
            }
        }
        
        // Check if 1 should be printed
        u8CharIterator = 0U;
        if(3U == u8ReturnCode)
        {
            if(0 == isupper(sForm.cSurname[u8CharIterator]))
            {
                u8ReturnCode = 1U;
            }
            else
            {
                u8CharIterator++;
                while('\0' != sForm.cSurname[u8CharIterator])
                {
                    if(0 == islower(sForm.cSurname[u8CharIterator]))
                    {
                        u8ReturnCode = 1U;
                        break;
                    }
                    u8CharIterator++;
                }
            }
        }

        // Check if 2 should be printed
        if(3U == u8ReturnCode)
        { 
           if((0U == isNumber(sForm.cYear)) || (0U == isNumber(sForm.cMonth)) || (0U == isNumber(sForm.cDay)))
           {
                u8ReturnCode = 2U;
           }
           else
           {
                int iYear = atoi(sForm.cYear);
                int iMonth = atoi(sForm.cMonth);
                int iDay = atoi(sForm.cDay);

                if((1900 > iYear) || (2000 < iYear))
                {
                    u8ReturnCode = 2U;
                }
                else if((1 > iMonth) || (12 < iMonth))
                {
                    u8ReturnCode = 2U;
                }
                else if((1 > iDay) || (31 < iDay))
                {
                    u8ReturnCode = 2U;
                }
           }
        }
        
        printf("%hhu\n", u8ReturnCode);

        memset(cFormBuff, 0, stFormBuffSize); // reset cFormBuff
    }

    free(cFormBuff);

    return 0;
}