#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--){
        long long t,a,b;
        cin>>t>>a>>b;
        long long g3 = t/3;
        long long rem = t%3;
        long long ans = g3 * min(b,3*a);
        if(rem > 0)
            ans+= min(b, rem*a);
        
        cout<<ans<<'\n';
    }
}