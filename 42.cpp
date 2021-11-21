.// 2D Matrix


#include<iostream>
using namespace std;

int main()
{
    int m,n; // m is row , n is col
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter the element: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"Output array is: "<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { 
                cout<<arr[i][j]<<" ";   // will print one row;       
            }
//             cout<<endl;
            cout<<"\n"; // print next row in diffrent line 
        }

    
    return 0;
}
