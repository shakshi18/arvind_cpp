// arr[j]-arr[i] such that j>i.. diff must be from letter words...

#include<iostream>
using namespace std;


int maxDiff(int arr[],int n)
{
    int res=arr[1]-arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res=max(res,arr[j]-arr[i]);
        }
    }
    return res;
}

int main()
{
    
    // int arr[] = {2,3,10,6,4,8,1};
    int arr[]={-10, 4, -9, -5} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxDiff(arr,n);
    
    return 0;
}
