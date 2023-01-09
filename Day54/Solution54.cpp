#include <iostream>

#include<algorithm>

using namespace std;

int main() {

    int n,m,i,flag=0,j,index;

   cout<<"Enter the size of first array"<<endl;;

   cin>>n;

   int a[n];

   cout<<"Enter the array elements"<<endl;

   for(i=0;i<n;i++)

   {

       cin>>a[i];

   }

    cout<<"Enter the size of second array"<<endl;;

   cin>>m;

   int b[m];

   cout<<"Enter the array elements"<<endl;

   for(i=0;i<m;i++)

   {

       cin>>b[i];

   }

   sort(a,a+n);

   sort(a,a+m);

   for(i=0,j=0;i<n,j<m;i++,j++)

   {

       if(a[i]==b[i])

       {

           index=i;

           flag=1;

           break;

       }

   }

   if(flag==1)

        cout<<"Not disjoint"<<endl;

   else

        cout<<"Disjoint"<<endl;

    return 0;

}

