// if array is [1 2 2]
// sub array would be : [1] [1 2] [1 2 2], [2] [2 2], [2]

#include<iostream>
using namespace std;
int main()
{
   
    int n;
    cout<<"enter the no of elemnt: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of subArray is: \n"; 
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            cout<<curr_sum<<endl;
        }
    }
return 0;
}
