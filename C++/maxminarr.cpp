#include<iostream>
using namespace std;
int main()
{
    int a[10],i,min,max,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
           max=a[i];
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
           min=a[i];
    }
    cout<<min<<" is the minimum element";
    cout<<endl;
    cout<<max<<" is the maximum element";
    return 0;
}
