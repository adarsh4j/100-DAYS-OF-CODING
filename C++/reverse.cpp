#include <iostream>
using namespace std;
int main() {
   int a[10],i,n,temp,j;
   cout<<"\nEnter the number of element: ";
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0,j=n-1;i<n/2;i++,j--)
   {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
   }
   cout<<"\n Reverse of array is"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<endl;
   }

    return 0;
}
