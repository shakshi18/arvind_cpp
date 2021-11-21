

// WRONG



#include<iostream>
using namespace std;

int factorial(int n){
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
    int n,r;
    cin>>n>>r;
    factorial(n)/(factorial(n-r)*factorial(r));
    return 0;
}



____________________________________________________________________________________________________________________________________________________________________

    
//CORRECT : // when u want to print the ans in "main fn" ....then always ask "return" from the "factorial" funcion.



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
    int n,r;
    cin>>n>>r;
    int ans=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<ans;
    
    
    return 0;
}
