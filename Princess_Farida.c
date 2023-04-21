#include<stdio.h>
int main(){long long t,a,o=1;scanf("%Ld",&t);for(long long i=0;i<t;i++){scanf("%Ld",&a);long long g[a+1];for(long long j=1;j<=a;j++)scanf("%Ld",&g[j]);long long dp[a+1];dp[0]=0;dp[1]=g[1];for(long long h=2;h<=a;h++){if(dp[h-1] > dp[h-2]+g[h])dp[h]=dp[h-1];else dp[h]=dp[h-2]+g[h];}printf("Case %Ld: %Ld\n",o,dp[a]);o++;}  }//main 
