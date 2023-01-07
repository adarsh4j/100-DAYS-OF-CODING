#include <iostream>

using namespace std;

void reverse(int a[], int n)

   {

       reverse(a,a+n);

   }

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

   reverse(a,n);

   cout<<"REVERSE OF ARRAY"<<endl;

    for(i=0;i<n;i++)

   {

       cout<<a[i]<<endl;

   }

   

    return 0;

}
