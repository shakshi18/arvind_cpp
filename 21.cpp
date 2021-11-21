

#include <iostream>
using namespace std;

int main()
{
   
    int n;
    cin>>n;
    int arr[n]; // n size array
    
    for(int i=0;i<n;i++) // will run till "n" times.{0 to n-1>> n times}
    {
        cin>>arr[i]; // will take element like cin>>arr[0] then cin>>arr[1] then cin>>arr[2] then....
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; // output to corresponding index value
    }
    
    
  return 0;  
}
