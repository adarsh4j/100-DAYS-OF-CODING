#include <iostream>

using namespace std;

int main() {

   int t,i;

   

   cin>>t;

   while(t--)

   {

       int arr[7];

       for(i=0;i<7;i++)

       {

           cin>>arr[i];

       }

        int a=0;

        int b=0;

       for(i=0;i<7;i++)

       {

          if(arr[i]==1){

              a++;

              }

          else{

             b++;

             }

       }

       if(a>b)

       {

           cout<<"YES";

       }

       else

       {

           cout<<"NO";

       }

   }

    return 0;

}

