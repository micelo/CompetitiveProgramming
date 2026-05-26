#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >>s;
        int cnt4 = 0 , cnt2 = 0;
        for(char c:s)
            if(c == '4')
                cnt4++;
            else if(c=='2')
                cnt2++;
        // all 4, 1 3 = 4 , 2 also
        
        int ans = cnt2;
        int cnt13 = 0;
        for(char c: s){
            if(c == '4')continue;
        
            if(c=='1' || c =='3')
                cnt13++;
            else if(c=='2')
                cnt2--;
            
            ans = min(ans,cnt13 + cnt2);
        }
        cout<<ans+cnt4<<'\n';

    }
}