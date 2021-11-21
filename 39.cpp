#include<iostream>
using namespace std;

void selectSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]) // upcoming elemnts are smaller than current i ..swap it to begning of sorted array
            {
            // swap(arr[j],arr[i]); OR
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
}
int main()
{
    // int arr[] = {64, 25, 12, 22, 11};
    int arr[] ={12,45,23,51,19,8};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    selectSort(arr, n);
    cout << "Sorted array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
