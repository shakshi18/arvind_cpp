// Transpose of matrix

 // code: 

/*
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
*/





#include<iostream>
using namespace std;
int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  cout<<"input matrix is : "<<endl;
    
    
    // input matrix : 
    for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

   // code: 
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
  
  // output: 
  
cout<<"output matrix is: "<<endl;

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    
    
    
    return 0;
}
