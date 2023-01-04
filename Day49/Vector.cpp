#include<iostream>

#include<algorithm>

using namespace std;

int main()

{

//fill the code;

 int n;

 cout<<"Enter the size of array"<<endl;

 cin >> n;

 int arr1[n], arr2[n];

 int i;

 cout<<"Enter the elements of first array"<<endl;

 for(i = 0; i < n ; i++)

  {

   cin >> arr1[i];

  }

 cout<<"Enter the elements of second array"<<endl;

 for(i = 0; i < n ; i++)

  {

   cin >> arr2[i];

  }

 sort(arr1, arr1 + n);

 sort(arr2, arr2 + n, greater<int>());

 int sum = 0;

 for(i = 0; i < n ; i++)

  {

   sum = sum + (arr1[i] * arr2[i]);

  }

  cout<<"OUTPUT"<<endl;

 cout << sum;

 return 0;

}

