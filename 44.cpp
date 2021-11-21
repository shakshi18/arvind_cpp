#include<iostream>
using namespace std;
int main()
{
   
    int n,m;
    cin>>n>>m;
     int a[n][m];
  
    cout<<"enter elemnts: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Spiral matrix output is: ";
    
    int row_start=0,col_start=0,row_end=n-1,col_end=m-1;
    
    while(row_start<=row_end && col_start<=col_end)
    {
        // for row_start ..........// left to right 
      
        for(int col=col_start;col<=col_end;col++)  // row is const ..col is varying
            {
            cout<<a[row_start][col]<<"  ";
            }
        row_start++;

        // for col_end ...  // going down
      
        for(int row=row_start;row<=row_end;row++)  // col is const ..row is varying (0,1,2,3...)
            {
            cout<<a[row][col_end]<<"  ";
              }
        col_end--;
        
        // for row end ... // right to left 
     if(row_start<=row_end) 
    {
    
        for(int col=col_end;col>=col_start;col--)   // row is const ..col is varying (...3,2,1,0)
            {
            cout<<a[row_end][col]<<"  ";
            }
    }
       row_end--;
      
        
        // for col start .... // going up 

    if(col_start<=col_end)
    {

        for(int row=row_end;row>=row_start;row--)  // col is const ..row is varying 
        
          {
            cout<<a[row][col_start]<<"  ";
          }
    }
        col_start++;
      
      
} 
    
return 0;
}
