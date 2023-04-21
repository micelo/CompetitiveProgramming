#include<iostream>
#include<algorithm>
#include<string>
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,l,i;
	cin>>n;
	while(n--){
		cin>>l;
		string r[l];
	REP(i,0,l){
		cin>>r[i];
	}	
	sort(r,r+l);
	REP(i,0,l){
		cout<<r[i]<<"\n";
	}
		
	}
	return 0;
} 
