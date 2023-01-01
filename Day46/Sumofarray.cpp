#include<iostream>

using namespace std;

int main()

{

int n,a[n],sum=0,i;

cout<<"Enter the size of array"<<endl;

cin>>n;

cout<<"Enter the elements of array"<<endl;

for(i=0;i<n;i++)

    {

cin>>a[i];

    }

    for(i=0;i<n;i++)

{

sum+=a[i];

}

cout<<"The sum of elements is "<<sum;

return 0;

}

