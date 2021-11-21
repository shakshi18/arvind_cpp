#include<climits>
#include <iostream>
using namespace std;

int main()
{
   
int n;
cin>>n;
int arr[n];
int i;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}

int res=0; //result

for (int i=1;i<n;i++)
{
    if (arr[i]>arr[res])
    {
        res=i; // put that greater i(index) number into res.
    }
}
cout<<res;
  return 0;  
}
