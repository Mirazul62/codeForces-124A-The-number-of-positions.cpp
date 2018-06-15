#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,a,b,ans=0;
   cin>>n>>a>>b;
   if(a+b<n)
    ans=b+1;
   else if(a+b==n)
    ans=b;
   else if(a+b>n)
    ans=n-a;

   cout<<ans;



}
