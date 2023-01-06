#include<iostream>

using namespace std;

int main()

{

    int n,sum=0;

    cout<<"Input"<<endl;

    cin>>n;

    int a[n],i;

    for(i=0;i<n;i++)

    {

        cin>>a[i];

    }

    for(i=0;i<n;i++)

    {

        sum=sum+(a[i]*a[i]);

    }

    cout<<"Output"<<endl;

    cout<<sum;

    return 0;

}

    

