#include <iostream>
using namespace std;
int main() {
 int t;
cin>>t;
 while(t--){
 int a,b;
cin>>a>>b;
int B=a+b;
 if (B<3){
cout<<1<<endl;
 }
 else if(B>=3 && B<=10){
   cout<<2<<endl;
 }
 else if(B>=11 && B<=60){
cout<<3<<endl;
 }
else{
cout<<4<<endl;
 }
 }
return 0;
}
