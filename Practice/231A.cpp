#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    int tmp1,tmp2,tmp3;
    while(n--){
        cin >> tmp1 >> tmp2 >> tmp3;
        if(tmp1 + tmp2 + tmp3 >= 2)
            ans++;
    }
    cout<<ans<<'\n';
    
}