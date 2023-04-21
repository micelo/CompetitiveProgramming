#include <cstdio>
#include <iostream>
#include <cmath>
#include <map>
using namespace std;
 map<int,long long> dp;
 long long solve(int x){
     if(dp[x]!=0){
		return dp[x];
 	}
 	if(x==0 || x==1 || x==2 || x==3){return x;}
 	dp[x]=solve(x/2)+solve(x/3)+solve(x/4);
        if(x > dp[x]){return dp[x]=x;}
        else return dp[x];
 }
int main() {
dp[0]=0;
dp[1]=1;
dp[2]=2;
dp[3]=3;
long long n;
while(scanf("%lld",&n)!=EOF){
	printf("%lld\n",solve(n));
}
	return 0;
} 
