#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    string s;
    while(n--){
        cin >> s;
        if(s[0] == '+' || s[s.size()-1] == '+')
            ans++;
        else
            ans--;
    }
    cout<<ans<<'\n';
    
}