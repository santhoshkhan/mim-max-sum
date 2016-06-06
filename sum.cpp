#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  int arr[n],min=INT_MAX,max=INT_MIN;
  for(i=0;i<n;i++)
    cin>>arr[i];
  for(i=0;i<n;i++)
  {
    if(min>arr[i])
      min=arr[i];
    if(max<arr[i])
      max=arr[i];
  }
  cout<<min+max;
  return 0;
}
