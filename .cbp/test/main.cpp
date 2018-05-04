#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int sieve[1001];

int Sieve()
{int lim,i;
    sieve[0]=0;
    sieve[1]=0;
    sieve[2]=0;

    for(int i=4;i<1001;i=i+2)
        sieve[i]=1;
    lim=(int)sqrt(double(1001));

    for(i=3;i<lim;i++)
    {
        if(sieve[i] == 0)
        {
            for(int j=i+i;j<=1000;j+=i)
                sieve[j]=1;
            sieve[i]=0;
        }
    }
}

int main()
{int n,v[1001];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v,v+n);g
    for(int i=0;i<n;i++)
    {
        int sum=0;
        while(v[i])
        {
            sum=sum+v[i]%10;
            v[i]=v[i]/10;
        }
        sum = v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i] >=10 && sieve[i] == 1)
            cout<<v[i];
    }
    return 0;
}
