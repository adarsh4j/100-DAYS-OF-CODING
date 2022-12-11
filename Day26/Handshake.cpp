#include<iostream>

using namespace std;

int main()

{

     int n,i,a=0;

     cout<<"Enter the number of people in room: "<<endl;

     cin>>n;

     for(i=1;i<n;i++)

     {

         a=a+i;

     }

     cout<<"The number of handshake is "<<a<<endl;

     return 0;

}

