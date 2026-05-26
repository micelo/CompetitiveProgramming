#include<bits/stdc++.h>
using namespace std;

long long ans;
long long a;
long long d1,d2;

void dfs(long long num, int l){
    if(l == 0){
        ans = min(ans,llabs(a-num));
        return;}
    
    dfs(num*10 + d1, l - 1);
    dfs(num*10 + d2, l - 1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> a >> n;
        cin >> d1 >> d2;
        string s = to_string(a);
        ans = LLONG_MAX;
        for(int length = max(1, s.size() - 1); length <= s.size() + 1; i++){
            dfs(0,length);
        }

        cout<<ans<<"\n";

        

        
    }
}