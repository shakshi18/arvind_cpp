#include<iostream>
using namespace std;


int maxOnes(bool arr[],int n) // you can use int arr[] will get same ans 

{
 int res=0;
 for(int i=0;i<n;i++)
 {
     int curr=0; // as a current counter ...will be reset after every "i" iteration .. i=0 curr =x ..reset curr=0 again when i=1 execute
     for(int j=i;j<n;j++)
     {
         if(arr[j]==1) // if elemnts from i is 1
         {
             curr++;    // it will do count++ equal to number of 1's
         }
         else
         {
             break;
         }
     }
     res=max(res,curr);
 }
 return res;
}

int main()
{
    
    // int arr[] = {2,3,10,6,4,8,1};
    // int arr[]={-10, 4, -9, -5} ;
   bool arr[] = {0,1,1,1,0,1,1,0,0}; // you can use int arr[] will get same ans 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxOnes(arr,n);
    
    return 0;
}
