#include<iostream>
using namespace std;
int main()
{
	int i,a[100],n,b,m;
	cout<<"Enter the number of element in an array "<<endl;
	cin>>b;
	cout<<"Enter the array element"<<endl;
	for(i=0;i<b;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to find ceil value"<<endl;
	cin>>n;
	cout<<"Enter the element to find floor value"<<endl;
	cin>>m;
     int ceil;
     if(n>a[b-1])
     {
        cout<<"\nceil value doesn't exist";
     }
     else
     {
         for(int i=0;i<b;i++)
         {
           if(n==a[i] || n<a[i])
           {
               ceil=a[i];
                break;
           }       
           }
          cout<<"The ceil value of "<<n<<" is "<<ceil<<endl; 
         }
      int floor;
     if(n>a[b-1])
     {
        cout<<"\nfloor value doesn't exist";
     }
     else
     {
         for(int i=0;i<b;i++)
         {
           if(m==a[i] || m>a[i])
           {
               floor=a[i];
                break;
           }       
           }
          cout<<"The floor value of "<<m<<" is "<<floor<<endl; 
         }
         
    return 0;
}

			
	
