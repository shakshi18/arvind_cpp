#include<iostream>
using namespace std;

 void fib(int n){
    int t1=0; // these two values are from where we have to start with like 0,1,1,2,3,5,8....(you can use any two to start with)
    int t2=1;
    int t3;
    int sum=0;
   
    for(int i=1;i<=n;i++)
    {
         
        cout<<t1<<endl;
        
        // sum=sum+t1; // will add every single t1 like 0>>1>>1>>2>>3>>5...
        
        t3=t1+t2;
        t1=t2;
        t2=t3;
        
    }
// cout<<"sum of fisrt "<<n<<" fib sequence is :"<<sum;
    
}
