

#include<iostream>
using namespace std;


void zeroAtEnd(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
       {
           for( int j=i+1;j<n;j++)
           {
               if(arr[j]!=0)
               swap(arr[i],arr[j]); // swap 0 and non 0 values
           }
       }
   }
 
}
   

int main()
{
    // int arr[] = {0,0,0,0,1,0};
    int arr[] = {8,5,0,10,0,20};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"now array is: "<<endl;
    zeroAtEnd(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nthe new size is: "<<n;
    int n1 = sizeof(arr) / sizeof(arr[0]);
    cout<<"\ncapacity is: "<<n1;
    return 0;
}
 
