#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    arr[2]=8;                     // Will REPLACE 2nd index by 8
    for ( int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}

//OUTPUT : 1 2 8 4 5 
//__________________________________________________________________________________________________________________________________________

#include<bits/stdc++.h>
using namespace std;
 
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
if(i==n)
{
    return n;
}
for (int j=i; j<n-1; j++) // no need to go till last index bcz .. when 5th elemnt is COPIED into 4th ...5th is same  ..stop..cz 6th to 5th not possble..capcity is 5
                          // for(int j=i+1;j<n;j++)
                           //     arr[j-1] = arr[j];

    {
    
        arr[j] = arr[j+1];
    }
return n-1; // we will print till n-1 element cz 1 is removed ...if u print all element u will get 1 2 4 5 5 
}
             
 
/* Driver program to test above function */
int main()
{
//     int arr[] = {11, 15, 3, 8, 9};
       int arr[]= {1,2,3,4,5}
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
 
    // Delete x from arr[]
    int r = deleteElement(arr, n, x); // "r" is our modified range, r become n-1
 
    cout << "Modified array is \n";
    for (int i=0; i<r; i++)
    cout << arr[i] << " ";
 
    return 0;
}
