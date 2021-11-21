// METHOD 1: 

#include<iostream>
using namespace std;


int rev(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
      int temp;      // swap program
      temp=arr[low];
      arr[low]=arr[high];
      arr[high]=temp;
      low++;
      high--;
      
    }
    return n; // new range of array { see Qn no 26_b}
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
    int r=rev(arr,n); // r will give new range { see prob 26_b}
    cout<<"now array is: "<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



//_______________________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;


void rev(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
      int temp;   // swap program
      temp=arr[low];
      arr[low]=arr[high];
      arr[high]=temp;
      low++;
      high--;
      
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
    rev(arr,n); 
    cout<<"now array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
 
