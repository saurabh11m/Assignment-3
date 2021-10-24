#include <stdio.h>
#define ull unsigned long long int
  /*void SieveOfEratosthenes(ull n)
{
    
    ull prime[n + 1];
    for(ull i=0;i<=n;i++)
    prime[i]=1;
    for (ull p = 2; p * p <= n; p++)
    {
       
        if (prime[p] == 1)
        {

            for (ull i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
 
    printf("print all prime no less than n: \n");
    for (ull p = 2; p <= n; p++)
        if (prime[p])
        printf("%llu ",p);
           
}
 */

int main()
{
    ull n ;
    scanf("%llu",&n);
    ull prime[n + 1];
    for(ull i=0;i<=n;i++)
    prime[i]=1;
    for (ull p = 2; p * p <= n; p++)
    {
       
        if (prime[p] == 1)
        {

            for (ull i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
 
    printf("print all prime no less than n: \n");
    for (ull p = 2; p <= n; p++)
        if (prime[p])
        printf("%llu ",p);
           
    //SieveOfEratosthenes(n);
    return 0;
}