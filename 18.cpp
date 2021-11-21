/* size of array means total memory space given to the array. lets say int arr[4] means array has been given 16 Byte (4x4) since int has a size of 4 Byte.
now you have 16 Byte of space its up to how many element you can store in this space.

OR
max no element than can be stored in this array is = sizeof(arr)/sizeof(arr[0])
hence max no element== 16/4==4

here if you will enter only 3 element in 4 size array still the size of array will be 4 . but you can not enter the more than 4 elemnt
*/


#include <iostream>
using namespace std;
int main()
{
//     int n;
//     cin>>n;
//     arr[n]={1,2,3,4}
    //OR
    
    int arr[10] = {1,2,3,4};
    int count=0;
    for(int i=0;i<10;i++) // 0 to 9 which is 10 times
    {
        if(arr[i]!=0)
            count++;
    }
    cout<<"Size of array is "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"Elements in array are: "<<count;
}


