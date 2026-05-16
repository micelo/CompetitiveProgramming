#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a[7];
        for(int i = 0 ; i < 7;i++)
            cin>>a[i];
        sort(a, a+7);
        int sum = 0;
        for(int i = 0 ; i < 6; i++)
            sum-=a[i];
        sum+=a[6];

        cout<<sum<<endl;
    }
}