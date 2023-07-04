// https://pl.spoj.com/problems/KC010/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    size_t siBuffSize = 500;
    char* cBuff = (char*)malloc(siBuffSize*sizeof(char));
    memset(cBuff, '\0', siBuffSize*sizeof(char));

    char* cPart = NULL; 

    uint32_t u32Nums = 0UL;
    uint32_t u32Words = 0UL;

    while(EOF != getline(&cBuff, &siBuffSize, stdin))
    {
        cPart = strtok(cBuff, " ");
        while(NULL != cPart)
        {
            if((0 == atoi(cPart)) && ('0' != *cPart))
            {
                u32Words++;
            }
            else
            {
                u32Nums++;
            }
            cPart = strtok(NULL, " ");
        }

        printf("%u %u\n", u32Nums, u32Words);

        u32Nums = 0UL;
        u32Words = 0UL;
        memset(cBuff, '\0', siBuffSize*sizeof(char));
    }

    free(cBuff);

    return 0;
}