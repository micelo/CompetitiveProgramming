#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int score;
    int tmp = 0;
    while(n--){
        cin >> score;
        k--;
        if(k == 0){
            tmp = score;
        }
        if(score >= tmp && score != 0)
            ans++;

    }
    cout<<ans<<'\n';
    
}