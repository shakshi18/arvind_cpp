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
