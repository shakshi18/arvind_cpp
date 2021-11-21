#include<iostream>
#include<climits>
using namespace std;


int Binsearch(int arr[],int n,int x)
{
int low=0;
int high=n-1;
while(low<=high)
{
   int mid=(low+high)/2;
    
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]<x) // element ahead of mid
    {
        low=mid+1; // high will be on same place 
    }
    else // element before mid  (arr[mid]>x)
    {
       high=mid-1; //low will be on same place 
    }
}
return -1;
}



int main ()
{

//   int arr[] = {3,4,5,6,7,8,9};


//   int arr[]={1,2,3,4,5};
   
     int arr[]={1,2,3,4,5,6};

  int n = sizeof (arr) / sizeof (arr[0]);
  cout << Binsearch(arr, n,2);
  

  return 0;
}
