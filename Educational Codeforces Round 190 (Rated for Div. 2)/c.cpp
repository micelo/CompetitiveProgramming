#include<bits/stdc++.h>
using namespace std;
// type1 : over 2, type2 : with 1 single card.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long ans = 0;
        int n;
        cin>>n;
        vector<long long> a(n);
        long long max1 = 0, max2 = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            if(a[i] > max1){
                max2 = max1; 
                max1 = a[i]; 
            }
            else if(a[i] > max2){ 
                max2 = a[i]; 
            }
        }
        if(max1 >= 3)
            ans = max(ans,max1);
        if(max1 + max2 >= 3)
            ans = max(ans,max1+max2);
        long long sum = 0;
        long long cnt = 0;
        long long oneCard = 0;
        for(int i = 0 ; i < n ; i++)
            if(a[i] == 1)
                oneCard++;
            else {
                sum+=a[i];
                cnt++;
            }
        
        if(cnt >=1 && sum >=3)
            ans=max(ans,sum);
        
        if(cnt==1){
            long long tmp = max1 / 2; 
            ans = max(ans, sum+ min(oneCard,tmp));
        }
        else if(cnt >= 2){
            long long tmp = 0;
            for(int i = 0 ; i < n;i++)
                if(a[i] >= 2)
                    tmp += a[i] / 2 - 1; // slots over 2
            
            ans = max(ans, sum+min(oneCard , tmp));
        }

        if(ans < 3 ) ans = 0;
        
        cout<<ans<<'\n';

    }
}