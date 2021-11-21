
#include<iostream>
using namespace std;
int largestno(int arr[],int n){
    for (int i=0;i<n;i++)
    {
        // bool flag=true;
        int flag=1;
        for(int j=i+1;j<n;j++) //imp j=i+1 is correct not j=0 [mistakes]
        {
            if(arr[j]>arr[i])
            {
                // flag=false;
                flag=0;
                break;
            }
        }
        if(flag==1) // OR if(flag==true)
        {
            return arr[i];
        }
    }
    // return -1;
}

int main(){
    int arr[]={5,8,20,10}; // you can take from user
    cout<<largestno(arr,4);
    return 0;
    
    
}

