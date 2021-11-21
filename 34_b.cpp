


#include<iostream>
using namespace std;


int maxDiff(int arr[],int n)
{
    int res=arr[1]-arr[0], minval=arr[0];
    for(int i=1;i<n;i++)
    {
 
      res=max(res,arr[i]-minval);   // basically we are comparing max and {letter elem - min val} // here 1 will be min logically hence {10-1,6-1,4-1,....}
      minval=min(minval,arr[i]);   // comparing which is min..for i=1 > (2,1) now minval==1
      
     
    }
    return res;
}

int main()
{
    
    // int arr[] = {2,3,10,6,4,8,1};
    // int arr[]={-10, 4, -9, -5} ;
    int arr[] = {2,1,10,6,4,8,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxDiff(arr,n);
    
    return 0;
}
