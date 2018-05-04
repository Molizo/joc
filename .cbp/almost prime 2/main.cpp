#include <iostream>

using namespace std;

int main()
{int n,x,prim,cnt;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>n;
        prim = 3;
        cnt = 0;
        if(n % 2 == 0)
        {
            while(n % 2 == 0)
            {
                n = n / 2;
                cnt++;
            }
        }
        while(n != 1)
        {
            if(n % prim == 0)
            {
                while(n % prim == 0)
                {
                    n = n / prim;
                    cnt++;
                }
            }
            prim = prim + 2;
        }
        if(cnt == 2)
            cout<<" Yes ";
        else
            cout<<" No ";
    }
    return 0;
}
