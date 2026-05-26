#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a;
        cin>>a;
        int w[a];
        int cnt0 = 0, cnt1=0,cnt2=0;
        for(int i = 0 ; i < a;i++){
            cin>>w[i];
            if(w[i] == 0)
                cnt0++;
            else if(w[i] == 1)
                cnt1++;
            else
                cnt2++;
            
        }
        // zeros - plus , 1s + 2s = 3 so take minimum cnt1 and cnt2 and it becomes how many 3s make from 1 and 2, and then the left 2s or 1s we divide by 3
        int tmp = abs(cnt1-cnt2);
        tmp /=3;
        cout<< cnt0 + min(cnt1,cnt2) + tmp<<endl;
        
    }
}