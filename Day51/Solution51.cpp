#include <iostream>

#include<algorithm>

using namespace std;

int main() {

    int n,i;

   cout<<"Enter the size of an array"<<endl;;

   cin>>n;

   int a[n];

   cout<<"Enter the array elements"<<endl;

   for(i=0;i<n;i++)

   {

       cin>>a[i];

   }

   sort(a,a+n);

   cout<<"OUTPUT"<<endl;

    for(i=0;i<n;i++)

   {

       cout<<a[i]<<endl;

   }

   

    return 0;

}

