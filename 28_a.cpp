#include<climits>
#include <iostream>
using namespace std;

// {5,6,7,8,9,10}
bool sort(int arr[],int n)
{
for (int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[i]) // say at 0th index value==5 ... if j(coming values) become less ex: 3<5 means arr is not sorted we want it must be in incr order
                          // false only when j(coming values) become LESS. if equal still not go inside of false cz 5<5 is not true ..only true condition go inside IF
        {
            return false;
        }
        
    }
}
return true;


}

int main()
{
    // int arr[] = { 12, 35, 1, 10, 34, 1 };
    // int arr[]= {5,6,7,8,9,10};
    // int arr[]= {5,5,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res=sort(arr,n);
    if(res==true)
        cout<<"Yes";
    else
        cout<<"No";
}
