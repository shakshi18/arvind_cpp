#include<climits>
#include <iostream>
using namespace std;
int getmax(int arr[],int n)
{

int res=0; //result

for (int i=1;i<n;i++)
{
    if (arr[i]>arr[res])
    {
        res=i; // put that greater i(index) number into res.
    }
}
return res;  
}

int secondLarge(int arr[],int n){
    int large=getmax(arr,n); // return index of first largest no
    
    int res=-1; // may be there dont exist 2nd largest hence return -1 ex: {10,10,10}
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[large])
        {
            if(res==-1)
            {
                res=i;
            }
        
            else if(arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"index of 1st max is: "<<getmax(arr, n)<<endl;
    cout<<"1st max number is : "<<arr[getmax(arr,n)]<<endl;
     
    cout<<"index of 2nd max: "<<secondLarge(arr, n)<<endl;
    cout<<"2nd max number is : "<<arr[secondLarge(arr,n)];
    return 0;
}


___________________________________________________________________ _______________________________________________________ __________________________________
  
  
  #include<climits>
#include <iostream>
using namespace std;
int getmax(int arr[],int n)
{

int res=0; //result

for (int i=1;i<n;i++)
{
    if (arr[i]>arr[res])
        res=i; // put that greater i(index) number into res.
    
}
return res;  
}

int secondLarge(int arr[],int n){
    int large=getmax(arr,n); // return index of first largest no
    
    int res=-1; // may be there dont exist 2nd largest hence return -1 ex: {10,10,10}
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[large])
        
            if(res==-1) 
                res=i;
            
            else if(arr[i]>arr[res])
                res=i;
    }
    return res;
}

int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"index of 1st max is: "<<getmax(arr, n)<<endl;
    cout<<"1st max number is : "<<arr[getmax(arr,n)]<<endl;
     
    cout<<"index of 2nd max: "<<secondLarge(arr, n)<<endl;
    cout<<"2nd max number is : "<<arr[secondLarge(arr,n)];
    return 0;
}
