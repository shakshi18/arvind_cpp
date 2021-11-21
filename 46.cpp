




#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    cout<<"enter the elemnt of 1st matrix: "<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            cin>>m1[i][j];
    }
    
    cout<<"enter the elemnt of 2nd matrix: "<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
            cin>>m2[i][j];
    }
    
    
    int ans[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
            ans[i][j]=0;
    }
    
    
    for(int i=0;i<n1;i++) // row of 1st matrix (n1 x n2)
    {
        for(int j=0;j<n3;j++) // col of 2nd matrix (n2 x n3)
        {
            for(int k=0;k<n2;k++) // "k" will be as varying key for both m1's row and m2's col
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
            
        }
    }
    
    cout<<"Output multiplied matrix is: "<<endl;
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
           cout<<ans[i][j]<<" ";
        cout<<endl;
           
    }
    
    return 0;
}



/* 
custom input 
2 2 2
1 2
3 4
5 6
0 7

output : 
5 20 
15 46 

*/
