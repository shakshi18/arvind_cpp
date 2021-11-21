// this code will only give exact answer when array consist -ve number . 
// else.. maximum will be correct but min will not { will return old minNO==0) 
//cz (1,2,3,4..< 0) condition will not be true and will not enter in the condtion hence minNO will reamin unchanged.


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

int maxNo=0;
int minNO=0;

for (int i=0;i<n;i++)
{
    if (arr[i]>maxNo)
    {
        maxNo=arr[i];
    }
    else if(arr[i]<minNO) // will enter in the condition when * (1,2,3,4,5..) < 0 (cz minNO==0 intially) else it will return minNO==0 when dont get inside the condition 
    {
        minNO=arr[i];
    }
}
cout<<maxNo<<" "<<minNO;

  return 0;  
}


_____________________________________________ ____________________________________________________ _________________________________________________ _________________
  
  
  
// METHOD 2: 
  
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

int maxNo=INT_MIN; // should be min from all the element in series
int minNO= INT_MAX;  // it should be maximum from all the element in series

for (int i=0;i<n;i++) // use double if so that can check both every time...if u use else it wwill only check when " if" is failed.
{
    if (arr[i]>maxNo)
    {
        maxNo=arr[i];
    }
     if(arr[i]<minNO) // will enter in the condition when * (1,2,3,4,5) < 0 (cz minNO==0 intially) else it will return minNO==0 when dont get inside the condition 
    {
        minNO=arr[i]; // now minNO has been changed 
    }
}
cout<<maxNo<<" "<<minNO;

  return 0;  
}
