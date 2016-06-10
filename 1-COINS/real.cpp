#include<iostream>
#include <map>

using namespace std;
#define lint long long int
map < int, lint > dp; 
 
lint maxrec(lint n)
{
if(n==0)
return 0;
if(dp[n]>0)
{
return dp[n];
}
lint var=maxrec(n/2)+maxrec(n/3)+maxrec(n/4);
dp[n]= max(n,var);
return dp[n];
}
int main()
{
lint n,ans;
 
while(scanf("%lld",&n)>0)
{
ans=maxrec(n);
cout<<ans<<endl;
}
return 0;
} 