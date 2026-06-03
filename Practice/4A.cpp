#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n & 1 || n == 2 || n == 1)
        cout<<"NO"<<'\n';
    else
        cout<<"YES"<<'\n';
}