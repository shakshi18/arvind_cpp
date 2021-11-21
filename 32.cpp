
// same as 26_b(delete operation)


#include<iostream>
using namespace std;

void lefRot(int arr[],int n)
{
    int temp=arr[0];
   for(int i=0;i<n-1;i++) // i=0,1,2,3
   {
      arr[i]=arr[i+1]; 
   }                        // become {2,3,4,5,5}
   arr[n-1]=temp;           // {2,3,4,5,1}
}

int main()
{
    int arr[] = {1,2,3,4,5};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"now array is: "<<endl;
    lefRot(arr,n); // existing array will be changed .
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}

//__________________ +________________________________________________________________________________+___________________________________________________


#include<iostream>
using namespace std;

void lefRot(int arr[],int n)
{
    int temp=arr[0];
   for(int i=1;i<n;i++) // i=1,2,3,4
   {
      arr[i-1]=arr[i]; 
   }                        // become {2,3,4,5,5}
   arr[n-1]=temp;           // {2,3,4,5,1}
}

int main()
{
    int arr[] = {1,2,3,4,5};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"now array is: "<<endl;
    lefRot(arr,n); // existing array will be changed .
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
