#include <iostream>
using namespace std;
void input(int n,int arr[])
{
   cout <<"Enter " <<n <<" elements into array";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void select_sort(int n,int arr[])
{
    int sma=0;
    int i,index;
    for(i=0;i<n-1;i++)
    {
       sma=arr[i];
       index=i;
        for(int j=i+1;j<n;j++)
        {
          if(sma>arr[j])
          {
            sma=arr[j];
            index=j;
          }
        }
        if(index!=i)
        {
            swap(&arr[i],&arr[index]);
        }
    }
}
void display(int n,int arr[])
{
    for(int i=0;i<n;i++)
   {
    cout<<"\t"<<arr[i];
   }
}
int main()
{
    int n;
    int ceiling;
    cout <<"\nEnter how many elements in an array ";
    cin >>n;
    int arr[n];
    input(n,arr);
    select_sort(n,arr);
     cout <<"\nElement in sorted order are:";
     display(n,arr);
     cout <<"\nEnter the value to find the ceiling of it";
     cin>>ceiling;
     int small;
     if(ceiling>arr[n-1])
     {
        cout<<"\nceil doesn't exist in array";
     }
     else
     {
         for(int i=0;i<n;i++)
         {
           if(ceiling==arr[i] || ceiling <arr[i])
           {
               small=arr[i];
                
               break;
           }
            
           }
          cout<<"The ceiling of "<<ceiling<<" is "<<small; 
         }
         return 0;
}
