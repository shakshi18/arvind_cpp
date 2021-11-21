#include <iostream>
using namespace std;

// {5,6,7,8,9,10}
bool sort(int arr[],int n)
{
for (int i=1;i<n;i++)
{
    if(arr[i]<arr[i-1])
    {
        return false;
    }

}
return true;

}

int main(){
    // int arr[] = { 12, 35, 1, 10, 34, 1};
    int arr[]= {5,6,7,8,9,4};
    // int arr[]= {5,5,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res=sort(arr,n);
    if(res==true)
        cout<<"Yes";
    else
        cout<<"No";
        
return 0;
}
