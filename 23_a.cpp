#include <iostream>
using namespace std;
int main(){
    
int arr[]={1,2,3,4,5};
int x=3; // element to be searched
int n=5; // size of array
for( int i=0;i<n;i++)
{
    if(x==arr[i])
    {
        cout<<i;
    }
}

    
    return 0;
}

________________________________________________________________________________________
  
  
  
  
  
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"sizeof the array: "<<endl;
cin>>n;
int arr[n];
  
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}

cout<<"your array is: ";

for (int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
  
int x;
cout<<endl<<"elemnet to be searched: ";
cin>>x;

// int n=sizeof(arr)/sizeof(arr[0]) // no of elemnet in the arr.


for( int i=0;i<n;i++)
{
    if(x==arr[i])
    {
        cout<<i;
    }
}
    
    return 0;
}
