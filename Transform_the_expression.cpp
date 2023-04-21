#include<iostream>
#include<string>
#include<stack>
using namespace std;
 int pres(char a){
   return (a == '+' || a == '-') ? 1 : (a == '*' || a == '/') ? 2 : 3;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
stack<char> p;
int t;
string ans;
cin >> t;
for(int j=0;j<t;j++){
 ans="";
 string s;
 cin >> s;
 for(size_t i=0;i<s.size();i++){
     if(s[i] >= 'a' && s[i] <= 'z')ans+=s[i];
     else if(s[i] == '(')p.push('(');
     else if(s[i] == ')'){
       while(!p.empty() && p.top() != '('){
         ans+=p.top();
         p.pop();
       }
       p.pop();
      }
     else{
       while(!p.empty() && pres(s[i]) <= pres(p.top()) && p.top() != '('){
         ans+=p.top();
         p.pop();
     }
     p.push(s[i]); 
    }
   }
 while(!p.empty()){
  ans+=p.top();
  p.pop();
  }
 cout << ans <<'\n';
 }
} 
