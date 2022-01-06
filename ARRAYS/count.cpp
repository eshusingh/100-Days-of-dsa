#include <bits/stdc++.h>
int firstoccu(int n,int arr[], int key)
{
    int ans = -1;
    int st =0;
    int en = n-1;
    
    while(st<=en)
    {
        int mid = st + (en-st)/2;
        if(arr[mid]==key)
        {
            ans = mid;
            en = mid-1;
        }
        else if(arr[mid]<key)
        {
            st = mid+1;
        }
        else 
        {
            en = mid -1;
        }
    }
    return ans;
}
int lastoccu(int n,int arr[], int key)
{
    int ans = -1;
    int st =0;
    int en = n-1;
    
    while(st<=en)
    {
        int mid = st + (en-st)/2;
        if(arr[mid]==key)
        {
            ans = mid;
             st = mid+1;
        }
        else if(arr[mid]<key)
        {
            st = mid+1;
        }
        else 
        {
            en = mid -1;
        }
    }
    return ans;
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int f = firstoccu(n,arr,key);
    cout<<f<<endl;
    int l = lastoccu(n,arr,key);
    cout<<l<<endl;

int count = l-f+1;
cout<<"count "<<count<<endl;
    return 0;
}