#include <iostream>

using namespace std;

int main()

    {

        int n, j;

        cout<<"Enter the size of array:"; 

        cin>>n;

        int arr[n];

        cout<<"Enter the elements of array:";

        int odd = 0, even = 0;

        for(j = 0; j < n; j++)

        {

            cin>>arr[j];

        }

        for(j = 0; j < n; j++)

        {

            if(arr[j] % 2 == 1)

            odd++;

            if(arr[j] % 2 == 0)

            even++;

        }

            if(odd == n)

            cout<<"Odd";

            else if(even == n)

            cout<<"Even";

            else

            cout<<"Mixed";

            return 0;

    }

