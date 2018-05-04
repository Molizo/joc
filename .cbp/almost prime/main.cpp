#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int sieve[10001];
int prime[10001],primeCount = 0;

void Sieve()
{int lim,i;
    sieve[0]=1;
    sieve[1]=1;
    sieve[2]=0;

    for(int i=4;i<10001;i=i+2)
        sieve[i]=1;
    lim=(int)sqrt(double(10001));

    for(i=3;i<lim;i++)
    {
        if(sieve[i] == 0)
        {
            for(int j=i+i;j<=i*i;j+=i)
                sieve[j]=1;
            sieve[i]=0;
        }
    }
}

void convertSieve()
{
    for(int i=0;i<10001;i++)
    {
        if(sieve[i] == 0)
        {
            prime[primeCount] = i;
            primeCount++;
        }
    }
}

int main()
{int n;
    Sieve();
    convertSieve();
    cin>>n;
    int input[n];
    for(int i=0;i<=n;i++)
        cin>>input[i];
    for(int i=0;i<primeCount;i++)
    {
        for(int j=i;j<primeCount;j++)
        {
            cout<<prime[]
        }
    }
    return 0;
}
