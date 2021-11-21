/*
i==row(start with 0)>>>j==column (no of coloumn==no of row)

1(0c0)  
1(1c0)   1 (1c1) >>>>>>>>>> >>>>>>> >>>>>>>>>> >>>>>>>>> {row==2 and col from 0,1}
1(2c0)   2(2c1)   1(2c2)  >>>>>>>>>> >>>>>>> >>>>>>>>>> >>>>>>>>> {row==3 and col from 0,1,2}
1(3c0)   3(3c1)   3(3c2)   1(3c3) 
1        4        6        4        1 
1        5        10       10       5       1 




in every loop we want : iCj [i start from 0 and so j is]

*/


//CODE:

#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n==0||n==1)
    {
       return 1;
    }
    else if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
       return fact;
    }
        
}




int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        // for(int j=i;j>=0;j--) just for the loop (easy) but here we have to give the values {ex: factorial(j)} as well so values will change ....i=2 then j=2 se start we want that 0 se start ho
        for(int j=0;j<=i;j++)
        {
           cout<<factorial(i)/(factorial(j)*factorial(i-j))<<"  "; 
        }
        cout<<endl;
    }

    
    
    return 0;
}
