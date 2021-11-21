#include<iostream>
using namespace std;

int maxksum(int arr[], int n, int k)	// you can use int arr[] will get same ans
{

int curr_sum=0;
for(int i=0;i<k;i++)
{
    curr_sum+=arr[i];   // sum of first window
}
  
int max_sum=curr_sum;

  // for next windows ..
  
for(int i=k;i<n;i++)
{
    curr_sum+=(arr[i]-arr[i-k]);  //adding next element and removing 1st element of previous window to the curr_sum..(sum of prev window)
    max_sum=max(curr_sum,max_sum); // next window sum is comapred with first one and update if changed 
}

  return max_sum;
}


int
main ()
{

//   int arr[] = { 1, 2, 3, 4, 5 };

    int arr[] = {1,8,30,-5,20,7};

  // int arr[] = {-1,-2,-3,-4,-5};

  int n = sizeof (arr) / sizeof (arr[0]);
  cout << maxksum(arr, n, 3);

  return 0;
}
