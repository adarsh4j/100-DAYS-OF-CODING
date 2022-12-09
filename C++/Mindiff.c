#include<iostream>

using namespace std;

int main()

{

    int a[10],i,j,temp,n,m;

    cout<<"Enter the size of the array: ";

    cin>>n;

    cout<<"Enter the maximum children:"<<endl;

    cin>>m;

    cout<<"Enter the element of array: ";

    for(i=0;i<n;i++)

    {

        cin>>a[i];

    }

      for (i = 0; i <n; ++i) 

        {

 

            for (j = i + 1; j < n; ++j)

            {

 

                if (a[i] > a[j]) 

                {

 

                    temp =  a[i];

                    a[i] = a[j];

                    a[j] = temp;

 

                }

 

            }

 

        }

    cout<<"Sorted array is "<<endl;

        for(i=0;i<n;i++)

      {

        cout<<a[i]<<endl;

      }

//    cout<<endl;

    int s=a[--m]-a[0];

    cout<<"Minimum difference is "<<endl;

    cout<<s<<endl;

    return 0;

}
