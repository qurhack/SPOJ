// https://pl.spoj.com/problems/KC008/

#include <stdio.h>

int main()
{
    long long llTotalSum = 0LL;
    long long llPartialSum = 0LL;
    long long llNum = 0LL;
    
    while(EOF != scanf("%lld", &llNum))
    {
        llPartialSum += llNum;
        while(0LL != llNum)
        {
            scanf("%lld", &llNum);
            llPartialSum += llNum;
        }
        printf("%lld\n", llPartialSum); // Print Partial Sum
        llTotalSum += llPartialSum;
        llPartialSum = 0;
    }

    printf("%lld\n", llTotalSum); // Print Total Sum
}


