#include<iostream>
#include<climits>
using namespace std;


int maxOnes(int arr[],int n,int k) 
{
    
//   int max_sum=0; Wrong 

    int max_sum=INT_MIN;   // (- infinity)
    
    for(int i=0;i<n-k+1;i++) // till last d element ex: {1,2,3,4,5}.. i=0 to i<3.. cz when i=3(4th elem) how next 3? i[0+3], i[1+3], i[2+3] (not avlble)
    {
         int sum=0;
        for(int j=0;j<k;j++)
        {
            sum=sum+arr[i+j];  // making every point is a beggining point for the next d sum. sum of index like 0,1,2 >> 1,2,3 >>2,3,4...
        }
        
        max_sum=max(sum,max_sum);
    }
    return max_sum;
}


int main()
{
    
        int arr[] = {1,2,3,4,5};
       
    //  int arr[] = {1,8,30,-5,20,7};
 
    // int arr[] = {-1,-2,-3,-4,-5}; thats why INT_MIN was taken(-infi) instead of 0, so that we can compare list to list min value.otherwise ans would be zero. 
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxOnes(arr,n,3);
    
    return 0;
}
