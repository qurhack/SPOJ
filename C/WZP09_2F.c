// https://pl.spoj.com/problems/WZP09_2F/

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <stdint.h>

#define MAX_INPUT 1000

int main()
{
    size_t cBuffSize = MAX_INPUT + 1; // +1 to include '\0' char
    char* cBuff = (char*)malloc(cBuffSize*sizeof(char));
    memset(cBuff, '\0', cBuffSize*sizeof(char));
    
    while(getline(&cBuff, &cBuffSize, stdin))
    {
        if('0' == cBuff[0])
        {
            break;
        }
        
        uint64_t u64Sum = 0ULL;
        uint16_t u16Iter = 0U;
        while('\n' != cBuff[u16Iter])
        {
            u64Sum += cBuff[u16Iter] - '0'; // Convert ASCII char to real int
            u16Iter++;
        }
        
        u16Iter--; // To keep iterator on the last input character which is not \0

        // Conditions for num to be completely divisible by 15:
        // 1. It have to be completely divisible by 3 => sum of its digits have to be completely divisible by 3
        // 2. It have to be completelydivisible by 5 => last digit of num should be 0 or 5
        if((0 == u64Sum % 3) && (('5' == cBuff[u16Iter]) || ('0' == cBuff[u16Iter]))) 
        {
            printf("TAK\n");
        }
        else
        {
            printf("NIE\n");
        }
    }

    free(cBuff);
}