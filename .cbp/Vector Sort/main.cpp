#include <iostream>
#include <algorithm>
using namespace std;
int main()
{int v[10];
for(int i=0;i<10;i++)   cin>>v[i];
sort(v,v+10);
for(int i=0;i<10;i++)   cout<<v[i]<<" ";
return 0;}

