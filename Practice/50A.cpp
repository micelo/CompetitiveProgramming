#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b;
        int tmp;
        int bsize = n*(n-1)/2;
        for(int i = 0 ; i < bsize; i++){
            cin >> tmp;
            b.push_back(tmp);
        }
        sort(b.begin(), b.end());
        int s = n-1;
        for(int i = 0 ; i < bsize; i+=s,s--){
            cout<<b[i]<<' ';
        }
        cout<<"1000000000"<<'\n';

    }
}