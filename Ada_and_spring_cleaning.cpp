#include<bits/stdc++.h>
using namespace std;
const int p = 31;
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t,N,K;
string s;
cin >> t;
for(;t>0;t--){
cin >> N >> K;
cin >> s;
vector<long long> p_pow(s.length());
p_pow[0] = 1;
for(size_t i = 1;i < s.length();i++){
    p_pow[i] = p_pow[i-1] * p;
}
 
vector<long long> h(s.length());
for(size_t i=0;i < s.length();i++){
    h[i] = (s[i] - 'a' + 1) * p_pow[i];
    if(i) h[i] +=h[i-1];
}
int result = 0;
vector<long long> ans(N-K+1);
for(int i=0;i < N-K+1;i++){
    long long temp = h[i+K-1];
    if(i) temp -=h[i-1];
    temp *=p_pow[N-i-1];
    ans[i] = temp;
}
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    result+=(int)ans.size();
    cout << result << '\n';
}
 
 
}
 
