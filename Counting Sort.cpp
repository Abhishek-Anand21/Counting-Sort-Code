#include <bits/stdc++.h>

using namespace std; 

int main()
{
    int i,n,min=-1;
    cin>>n;
    int arr[n],arr2[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>min)
         min = arr[i];
    }
    
    min = min +1;
    int arr1[min];
    
    for(i=0;i<min;i++)
     arr1[i] = 0;
     
    for(i=0;i<n;i++)
     arr1[arr[i]]++;
     
    for(i=1;i<min;i++)
     arr1[i] = arr1[i] + arr1[i-1];
     
    for(i=n-1;i>=0;i--)
    {
        arr2[arr1[arr[i]]-1] = arr[i];
        arr1[arr[i]]--;
    }
    
    for(i=0;i<n;i++)
     cout<<arr2[i]<<" ";
    
    
    return 0;
}
