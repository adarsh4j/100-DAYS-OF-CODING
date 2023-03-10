#include <iostream>

using namespace std;

int main() {

 int t;

cin>>t;

 while(t--){

 int m,h;

cin>>m>>h;

int BMI=m/(h*h);

 if (BMI<=18){

cout<<1<<endl;

 }

 else if(BMI>18&&BMI<=24){

cout<<2<<endl;

 }

 else if(BMI>24&&BMI<=29){

cout<<3<<endl;

 }

else{

cout<<4<<endl;

 }

 }

return 0;

}

