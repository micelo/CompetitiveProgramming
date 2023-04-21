#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
string k;
cin >> k;
string ans="";
for(size_t i=0;i<2*n;i+=2){
   bool can[4] = {true,true,true,true};
   can[k[i]-'A'] = false;
   can[k[i+1]-'A'] = false;
   char can1='a',can2='a';
   for(int j=0;j<4;j++)
      if(can[j]){if(can1!='a')can2='A'+j;else can1='A'+j;}
     // cout<<can1<<"  BLYAt"<<endl;
   if(i-1 && ans[i-1] != can1)
   ans+=can1,ans+=can2;
   else ans+=can2,ans+=can1;
}
cout<<ans;
 
 
} 
