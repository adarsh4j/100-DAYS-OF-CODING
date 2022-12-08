#include <iostream>
using namespace std;
static int kadane(int a[], int n) {
  int max_sum = 0;
  int current_sum = 0;

  for(int i=0; i<n; i++) {
    current_sum = current_sum + a[i];
    
    if (current_sum < 0)
      current_sum = 0;
    
    if(max_sum < current_sum)
      max_sum = current_sum;
  }
  return max_sum;
}
int main() {
    int a[100],i,n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    cout<<"Enter the elements in an array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
  cout<<"Maximum SubArray is: "<<kadane(a,n);
  return 0;
}
