#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6],b[6],c[6], i;
    int cnt[3][3];
    for(i = 0 ; i < 3; i++)
        for(int j = 0 ; j < 3;j++)
            cnt[i][j]=0;
    
    for(i = 0 ; i < 6;i++){
        cin>>a[i];
        if(a[i] == 4)
            cnt[0][0]++;
        else if(a[i] == 5)
            cnt[0][1]++;
        else if(a[i] == 6)
            cnt[0][2]++;
    }
    for(i = 0 ; i < 6;i++){
        cin>>b[i];
        if(b[i] == 4)
            cnt[1][0]++;
        else if(b[i] == 5)
            cnt[1][1]++;
        else if(b[i] == 6)
            cnt[1][2]++;
    }
    for(i = 0 ; i < 6;i++){
        cin>>c[i];
        if(c[i] == 4)
            cnt[2][0]++;
        else if(c[i] == 5)
            cnt[2][1]++;
        else if(c[i] == 6)
            cnt[2][2]++;
    }
    double ans = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            if(j == i)continue;
            int k = 3 - i - j;
            ans+=(double)cnt[0][i]/6 * (double)cnt[1][j]/6 * (double)cnt[2][k]/6;
        }

        cout<<setprecision(10)<<ans<<endl;
}