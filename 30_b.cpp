// Time: 0(n)
//Space : 0(1)


#include<iostream>
using namespace std;


int remDup(int arr[],int n)
{
    int res=1; // we will compare from "res-1" index[ previously added element] and store the new value in "res" index
    
    for(int i=1;i<n;i++) // starting from 2nd element of arr
    {
        if(arr[i]!=arr[res-1]) // will check that if previously added element in (array) is diff from current i th element in arr.
        {
           arr[res]= arr[i];
           res++;
        }
    }
    
    return res; // new range of array .. ex: 3 
   
}
   

int main()
{
    int arr[] = {10,20,20,30,30,30};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"now array is: "<<endl;
    int r=remDup(arr,n);
    for(int i=0;i<r;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nthe new size is: "<<r;
    int n1 = sizeof(arr) / sizeof(arr[0]);
    cout<<"\ncapacity is: "<<n1;
    return 0;
}
