// method 1 : 

#include<iostream>
using namespace std;

void BubSort(int arr[],int n)
{
 
for(int i=0;i<n-1;i++)
{
 for(int j=0;j<n-1;j++) // checking every element in array with next element 2,10 >> 10,8 >>swap>>10,7>>swap>>7,10 (till n-1)
 {
     if(arr[j]>arr[j+1])
     {
         swap(arr[j],arr[j+1]);
     }
  }
}
  
}

int main()
{
    // int arr[] = {64, 25, 12, 22, 11};
    // int arr[] ={12,45,23,51,19,8};
    int arr[] ={2,10,8,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
     BubSort(arr, n);
    cout << "Sorted array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}


// method 2: change in "j" loop

#include<iostream>
using namespace std;

void BubSort(int arr[],int n)
{
 
for(int i=0;i<n-1;i++)
{
 for(int j=0;j<n-1-i;j++) // checking every element in array with next element till.. "n-1-i" cz no need to check those elemnt who has already sorted and reached to thier max posn
                        // on every pass(i value) one max elemnt got place in thier posn ..so no need to check that elemnt ..waste of time ..he is already max at the last posn
                        // reduce "i" iteration of "j"accordingly
 {
     if(arr[j]>arr[j+1])
     {
         swap(arr[j],arr[j+1]);
    }
  }
}
}

int main()
{
    // int arr[] = {64, 25, 12, 22, 11};
    // int arr[] ={12,45,23,51,19,8};
    int arr[] ={2,10,8,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
     BubSort(arr, n);
    cout << "Sorted array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
