#include <iostream>

using namespace std;

int main() {

    int n,i,flag=0;

   cout<<"Enter the size of an array"<<endl;

   cin>>n;

   int a[n];

   cout<<"Enter the array elements"<<endl;

   for(i=0;i<n;i++)

   {

       cin>>a[i];

   }

  for(i=0;i<n;i++)

  {

      while(a[i]%2==0)

      {

      	a[i]=a[i]/2;      }

      while(a[i]%3==0)

      {

          a[i]=a[i]/3;

      }

  

  }

  for(i=0;i<n;i++)

  {

  	if(a[i]!=a[0])

  	{

  		flag=1;

  	}

  	else

  	{

  		flag=0;

  	}

  }

  cout<<"OUTPUT"<<endl;

    if(flag==1)

    {

          cout<<"No"<<endl;

    }

    else

    {

           cout<<"Yes"<<endl;

    }

    return 0;

}
