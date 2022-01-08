#include<bits/stdc++.h>
using namespace std;
 int  main()
 {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int mx = INT_MIN;
  int mxarr[n];
  for(int i=0;i<n;i++)
  {
      mx = max(mx,arr[i]);
      mxarr[i] = mx;
  }
   for(int i=0;i<n;i++)
  {
      cout<<mxarr[i];
  }
  return 0;
 }