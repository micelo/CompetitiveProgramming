#include<iostream>
#define mod 1000000007
using namespace std;
typedef long long ll;
ll dp[10000003];
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t,n;
	cin >> t;
	//for(ll i=0;i<mod;i++)dp[i]=-1;
	dp[0] = dp[1] = 1;
	dp[2] = dp[3] = 0;
	for(ll i=4;i<10000003;i++){
	 	dp[i]=(dp[i]%mod + (i+1)*dp[i-1]%mod + mod)%mod;
	 	dp[i]=(dp[i]%mod - (i-2)*dp[i-2]%mod + mod)%mod;
	 	dp[i]=(dp[i]%mod - (i-5)*dp[i-3]%mod + mod)%mod;
	 	dp[i]=(dp[i]%mod + (i-3)*dp[i-4]%mod + mod)%mod;
	 }
	while(t--){
		cin >> n;
		cout << dp[n] << endl;
	}
} 
