#include<iostream>

using namespace std;

int main()

{

	int a[100],i,j,n,flag=0;	cout<<"Enter the size"<<endl;

	cin>>n;

	cout<<"Enter the elements in an array"<<endl;

	for(i=0;i<n;i++)

	{

		cin>>a[i];

	}

	for(i=0;i<n;i++)

	{

		for(j=i+1;j<n;j++)

		{

			if(a[i]==a[j])

			{

			   flag=1;

			}

	/*		else

			{

				cout<<"False"<<endl;

			}*/

		}

	}

	   if(flag==1){

		cout<<"True,duplication occur"<<endl;}

	  else{

	  	cout<<"False,no duplication ptesent"<<endl;}

	return 0;

}

	
