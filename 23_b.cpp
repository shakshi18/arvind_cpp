// when function get "return" first time then end the function.


#include <iostream>
using namespace std;


int search(int arr[],int n,int x){
    for (int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
          return i; // if it executed once ..then done with function
        }
    }
    return -1;
    
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);     // size of array (HERE: == no of elemnt in array)==max no of element that can be in array.
   int x=2; // element to be searched
   
   int result=search(arr,n,x);
   cout<<result;
   

  return 0;  
}

//_______________________________  __________________________________  __________________________________________________________________________


#include <iostream>
using namespace std;


int search(int arr[],int n,int x){
    for (int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
          return i;
        }
    }
    return -1;
  
    
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);     // size of array (HERE: == no of elemnt in array)==max no of element that can be in array.
   int x=2; // element to be searched
   
   int result=search(arr,n,x);
   if (result==-1)
   {
       cout<<"element not found";
   }
   else {
       cout<<result;
   }
   

  return 0;  
}

//_______________________________  __________________________________  __________________________________________________________________________



#include <iostream>
using namespace std;


void search(int arr[],int n,int x){
    for (int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
         cout<<i;
        }
    }
    
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);     // size of array (HERE: == no of elemnt in array)==max no of element that can be in array.
   int x=2; // element to be searched
  
   int result=search(arr,n,x);


  return 0;  
}
