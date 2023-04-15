// https://pl.spoj.com/problems/CALC2/

#include <stdio.h>

#define REGISTER_SIZE 10

int main()
{
    int arrRegister[REGISTER_SIZE] = {0};
    char cOperation = '\0';
    int iNumA = 0;
    int iNumB = 0;

    while(cOperation = getchar())
    {   
        if(('\n' == cOperation) || (EOF == cOperation))
        {
            break;
        }

        // This is made purely to avoid interpreting enter after scanf as next value for cOperation
        if(2 == scanf("%d %d", &iNumA, &iNumB)) // scanf should return 2 if both arguments were passed correctly
        {
            getchar();
        }
        
        if('z' == cOperation)
        {
           arrRegister[iNumA] = iNumB;
        }
        else if('+' == cOperation)
        {
            printf("%d\n", arrRegister[iNumA] + arrRegister[iNumB]);
        }
        else if('-' == cOperation)
        {
            printf("%d\n", arrRegister[iNumA] - arrRegister[iNumB]);
        }
        else if('*' == cOperation)
        {
            printf("%d\n", arrRegister[iNumA] * arrRegister[iNumB]);
        }
        else if('/' == cOperation)
        {
            printf("%d\n", arrRegister[iNumA] / arrRegister[iNumB]);
        }
        else if('%' == cOperation)
        {
            printf("%d\n", arrRegister[iNumA] % arrRegister[iNumB]);
        }
    }
}