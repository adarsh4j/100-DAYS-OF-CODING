#include<iostream>

using namespace std;

int main()

{

    int n,even=0,odd=0;

    cout<<"Enter the size of array"<<endl;

    cin>>n;

    int a[n],i;

    cout<<"Enter the elements of array"<<endl;

    for(i=0;i<n;i++)

    {

        cin>>a[i];

    }

    for(i=0;i<n;i++)

    {

        if(a[i]%2==0)

        {

            even++;

        }

        else

        {

            odd++;

        }

    }

    cout<<"Number of even elements"<<endl;

    cout<<even<<endl;

    cout<<"Number of odd elements"<<endl;

    cout<<odd<<endl;

    return 0;

}

    

