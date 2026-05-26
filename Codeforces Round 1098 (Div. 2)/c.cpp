#include<bits/stdc++.h>
using namespace std;

long long ans;
long long a;
long long d1,d2;

void dfs(long long num){
    ans = min(ans,llabs(a-num));

    if(num > 1e18) return;
    dfs(num*10 + d1);
    dfs(num*10 + d2);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> a >> n;
        cin >> d1 >> d2;
        
        string s = to_string(a);
        int l = s.size();
        vector<long long> combs;
        if(l > 1) combs.push_back(stoll(string(l-1,'0' + d2)));
        else if(d1 == 0 ) combs.push_back(0);

        if(d1 > 0)
            cands.push_back(stoll(string(l+1,'0' + d1)));
        else cands.push_back(stoll(string(1,'0' + d2) + string(l,'0')));

        string prefix = "";
        
    }
}