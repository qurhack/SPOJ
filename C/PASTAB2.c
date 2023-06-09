 // https://pl.spoj.com/problems/PASTAB2/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint16_t u16Nums = 0u;
    scanf("%hu", &u16Nums);

    long int* liArr = calloc(u16Nums, sizeof(long int));

    for(uint16_t u16IterNums = 0u; u16IterNums < u16Nums; u16IterNums++)
    {
        scanf("%ld", &liArr[u16IterNums]); 
    }

    char cComparator = '\0'; 
    long int liX = 0;
    scanf(" %c%ld", &cComparator, &liX);

    if('>' == cComparator)
    {
        for(uint16_t u16IterNums = 0u; u16IterNums < u16Nums; u16IterNums++)
        {
            if(liArr[u16IterNums] > liX)
            {
                printf("%ld\n", liArr[u16IterNums]);
            } 
        }
    }
    else
    {
        for(uint16_t u16IterNums = 0u; u16IterNums < u16Nums; u16IterNums++)
        {
            if(liArr[u16IterNums] < liX)
            {
                printf("%ld\n", liArr[u16IterNums]);
            } 
        }
    }
    
    free(liArr);

    return 0;
}

