

#include<iostream>
using namespace std;


int zeroAtEnd(int arr[],int n)
{
    int res=0;
    
    for(int i=0;i<n;i++) // 
    {
        if(arr[i]!=0) // will find that index where element is not zero
        {
           arr[res]= arr[i]; // move element of that index to new position {from begning posn}
            
//          OR   swap(arr[i],arr[res])
            
           res++;
        }
    }
    
    return res; // new range of array 
   
}

int main()
{
    // int arr[] = {0,0,0,0,1,0};
    int arr[] = {8,5,0,10,0,20};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"now array is: "<<endl;
    int r=zeroAtEnd(arr,n); // existing array will be changed .
    for(int i=0;i<r;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nthe new size is: "<<r;
    int n1 = sizeof(arr) / sizeof(arr[0]);
    cout<<"\ncapacity is: "<<n1;
    return 0;
}
 
