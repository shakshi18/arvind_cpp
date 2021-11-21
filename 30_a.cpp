// Create an auxiliary array temp[] to store unique elements.
//Traverse input array and one by one copy unique elements of arr[] to temp[]. Also keep track of count of unique elements.


#include<iostream>
using namespace std;


int remDup(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    
    for(int i=1;i<n;i++) // starting from 2nd element of arr
    {
        if(arr[i]!=temp[res-1]) // will check that if previously added element in temp(array) is diff from current elementin arr.
        {
           temp[res]= arr[i];
           res++;
        }
    }
    for(int i=0;i<res;i++)
    {
        arr[i]=temp[i]; // copy temp into arr..
    }
    
    return res; // new range of array .. ex: 3 
   
}  

int main()
{
    int arr[] = {10,20,20,30,30,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"now array is: "<<endl;
    int r=remDup(arr,n); // return the size of array and.... array is also changed by calling this function
  
  
    for(int i=0;i<r;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nthe new size is: "<<r;
    int n1 = sizeof(arr) / sizeof(arr[0]);
    cout<<"\ncapacity is: "<<n1;
    return 0;
}
