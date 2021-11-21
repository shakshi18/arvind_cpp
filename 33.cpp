// METHOD 1: 

#include<iostream>
using namespace std;


void rotLeft(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void rotbyD(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
    {
        rotLeft(arr,n); // will call rotLeft fun "d" times.
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rotbyD(arr,n,2);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//__________________________________________________________________ + _____________________________________________ + _____________________________________________

// in mind take exp d=2, n=5 element {1,2,3,4,5}

// method 2: 

#include<iostream>
using namespace std;


void rotbyD(int arr[],int n,int d)
{
    int temp[n];
    
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i]; // starting "d" element copied into temp
    }
    
    for(int i=d;i<n;i++) 
    {
        arr[i-d]=arr[i];    // d= const 2,3,4,5....i is varying i=d,d+1,d+2 or i=2,3,4,5..
    }
    for(int i=0;i<d;i++)
    {
                        // we have to insert values of temp in last d position.. ex:for (d=2) & 5 element add into  4 posn(3 index) and 5th posn(4 index)
    arr[n-d+i]=temp[i]; // last d position
    }
}

int main()
{
    // int arr[] = { 1, 2, 3, 4, 5};
    int arr[] = { 1, 2, 3, 4, 5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotbyD(arr,n,2);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
