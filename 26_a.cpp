/* 

input : [3,8,12,5,6]
x=12
output: [3,8,5,6]


*/


#include <iostream>
using namespace std;

int main()
{
 int n;   
int arr[n];

cout<<"enter the size of array: "<<endl;
cin>>n;

cout<<"enter the element"<<endl;
for ( int i=0;i<n;i++)
{
    cin>>arr[i];
}

int x;
cout<<"enter the deleting element"<<endl;
cin>>x;

int i,j;
for(i=0;i<n;i++)
{
    if(x==arr[i])
    {
       break;
    }
}
if (i==n)
{
    cout<<"Element not found"<<endl;
}
// for(j=n-1;j<i;j++) : WRONG
  
for(j=i;j<n-1;j++)
{
   arr[j]=arr[j+1];
}

cout<<"new array is:"<<endl;
for (int i=0;i<n-1;i++) 
{
    cout<<arr[i]<<" ";
}
  return 0;  
}
