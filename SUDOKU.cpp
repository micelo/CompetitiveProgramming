#include<bits/stdc++.h>
using namespace std;
int b[9][9];
bool col[9][10],rows[9][10],square[9][10],because,solution=false;
int n;
int find_square(int x,int y){return (x<=2 && y<=2)?0:(x<=2 && y<=5)?1:(x<=2 && y>=6)?2:(x>=3 && x<=5 && y<=2)?3:(x>=3 && x<=5 && y<=5)?4:(x>=3&&x<=5&&y>=6)?5:(x>=6&&y<=2)?6:(x>=6&&y<=5)?7:(x>=6&&y>=6)?8:0;}
void search(int x,int y){ ///x==rows and y==columns
if(solution==true){return;}
if(b[x][y]!=0){
if(y+1==9 && x+1==9){solution=true;return;}else{if(x+1!=9 && y+1==9)search(x+1,0);else{search(x,y+1);}}
}
else{
because=false;
for(int i=9;i>0;i--){
if(col[y][i] || rows[x][i] ||square[find_square(x,y)][i]){continue;}
else{
because=true;col[y][i]=rows[x][i]=square[find_square(x,y)][i]=1;b[x][y]=i;
if(y+1==9 && x+1==9){solution=true;return;}else{if(x+1!=9 && y+1==9)search(x+1,0);else{search(x,y+1);}}
if(!solution){
col[y][i]=rows[x][i]=square[find_square(x,y)][i]=0;b[x][y]=0;}
}
 
}
}
}///end of search_function.
void re_set(){
   for(int i=0;i<9;i++){
     for(int j=0;j<10;j++){col[i][j]=rows[i][j]=square[i][j]=0;}
}
 
 
}
int main(){
///freopen("input.txt","r",stdin);
///freopen("output.txt","w",stdout);
ios::sync_with_stdio(0);
cin.tie(0);
cin>>n;
while(n--){
re_set();
solution=false;
because=false;
for(int i=0;i<9;i++){ //rows
for(int j=0;j<9;j++){      //columns
cin>>b[i][j];
col[j][b[i][j]]=rows[i][b[i][j]]=square[find_square(i,j)][b[i][j]]=1;
}
}
 search(0,0);
///int wtf=true;
///for(int i=0;i<9;i++){for(int j=0;j<9;j++){if(b[i][j]==0){wtf=false;break;}}}
if(solution==true){
  for(int i=0;i<9;i++){ 
for(int j=0;j<9;j++){cout<<b[i][j]<<" ";}cout<<"\n";}
        }
 else cout<<"No solution"<<"\n";
 }
return 0;
} 
