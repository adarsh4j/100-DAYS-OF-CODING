#include <iostream>

using namespace std;

int main() {

    int n,i,sum=0;

   cout<<"Enter the size of an array"<<endl;;

   cin>>n;

   int a[n],b[n];

   cout<<"Enter the first array elements"<<endl;

   for(i=0;i<n;i++)

   {

       cin>>a[i];

   }

   cout<<"Enter the second array elements"<<endl;

   for(i=0;i<n;i++)

   {

       cin>>b[i];

   }

   for(i=0;i<n;i++)

   {

       sum=sum+(a[i]*b[i]);

   }

  

   cout<<"Sum of maximum scalar product"<<endl;

    cout<<sum<<endl;  

    return 0;

}

