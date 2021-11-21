
// Insertion Sort

#include<iostream>
using namespace std;

void InsertSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0) // when prev elemnt(i-1) is greater current elemnt(i) 
        {
            arr[j+1]=arr[j]; // send that elemnt 1 index ahead
            j--;
        }
        arr[j+1]=key; // due to j-- after... do j+1 so that get to exact position of j where while break
        
    }
}


int main()
{
    // int arr[] = {64, 25, 12, 22, 11};
    int arr[] ={12,45,23,51,19,8};
    // int arr[] ={2,10,8,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertSort(arr, n);
    cout << "Sorted array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
