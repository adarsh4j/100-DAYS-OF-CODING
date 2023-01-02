#include<iostream>

using namespace std;

int ispalindrome(int n){

    int rev=0, temp = n;

    while(temp>0){

        int rem = temp%10;

        rev = rev*10 + rem;

        temp /= 10;

    }

    if(n==rev)

       return 1;

    else

       return 0;

}

int main(){

    int n;

    cout<<"Input"<<endl;

    cout<<"Enter the size of array"<<endl;

    cin>>n;

    cout<<"Enter the elements of array"<<endl;

    int a[n];

    for(int i=0;i<n;i++)

    {

        cin>>a[i];

    }

    int res= INT_MIN;

    sort(a, a+n);

    for(int i=n-1; i>=0; i--){

        if(ispalindrome(a[i]) && res<a[i])

        {

           res= a[i];

           break;

        }

    }

    if(res==INT_MIN)

      res= -1;

      cout<<"Output"<<endl;

    cout<<res;

    return 0;

}

