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
    // fact(n);
    cout<<factorial(n);
    
    
    return 0;
}


____________________________________________________________________________________________________________________________________________________________________
  
  
  
// Method 2:

#include<iostream>
using namespace std;

void factorial(int n){ // in void there is no return {if write return 1 or return fact it willl through an error}
    int fact=1;
    if(n==0||n==1)
    {
       cout<<1;
    }
    else if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact;
    }
        
}

int main(){
    int n;
    cin>>n;
    factorial(n);
    
    return 0;
}

// ++++++++++++++++++++++++++++++++++++++++++++++++ recursion +++++++++++++++++

#include <stdio.h>

int factorial(int x)
{
if (x==1 || x==0)
{
    return 1;
}

else
{
    return x*factorial(x-1);

}

}


int main()
{
 int x;
printf("enter the number x:");
scanf("%d",&x);

int result=factorial(x);

printf("the result is:%d",result);

    return 0;
}
