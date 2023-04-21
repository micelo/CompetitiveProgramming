#include<bits/stdc++.h>
using namespace std;
 int fact(int n){
 if(n == 1)return 1;
 return n * fact(n-1);
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
deque<int> a,b;
int k,temp;
cin >> k;
for(int i=0;i<k;i++){
    cin >> temp;
    a.push_back(temp);}
cin >> temp;
k = n - k;
 for(int i=0;i<k;i++){
   cin >> temp;
   b.push_back(temp);
}
int cnt=0;
for(int i=0;i<fact(n);i++){
  if(a.empty()){cout<<cnt<<" "<<"2";return 0;}
  if(b.empty()){cout<<cnt<<" "<<"1";return 0;}
  cnt++;
  int x=a.front(),y=b.front();
  a.pop_front(),b.pop_front();
  if(x > y)a.push_back(y),a.push_back(x);
  else b.push_back(x),b.push_back(y);
 
}
cout<<-1;
}
