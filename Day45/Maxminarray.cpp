#include <iostream>

using namespace std;

int main() {

   int n;

   cout<<"Enter the size of array"<<endl;

   cin>>n;

   int a[n],i,min=a[0];

   cout<<"Enter the elements"<<endl;

   for(i=0;i<n;i++)

   {

       cin>>a[i];

   }

   for(i=0;i<n;i++)

    {

     if(min>a[i])

     {

         min=a[i];

     }

    }

    int max=a[0];

    for(i=0;i<n;i++)

    {

     if(max<a[i])

     {

         max=a[i];

     }

    }

    cout<<"Smallest Number:"<<endl<<min<<endl;

    cout<<"Largest Number:"<<endl<<max;

    return 0;

}

