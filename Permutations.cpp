#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[13][99];
 void init(){
  for(int i=0;i<13;i++)
    for(int j=0;j<99;j++)
       dp[i][j]=-1;
  }
 ll solve2(ll n,ll k){
  if(n == 0)return 0;
  if(k == 0)return 1;
  if(dp[n][k] != -1)return dp[n][k]; 
  ll ADRIAN = 0;
  for(ll i=0;i<=k&&i<n;i++)
      ADRIAN += solve2(n-1,k-i);
  return (dp[n][k]=ADRIAN);
 }
 
 int main(){
 ll n,k,t;
 cin >> t;
 while(t--){
 init();
 cin >> n >> k;
 cout<<solve2(n,k)<<'\n';
  }
 }
