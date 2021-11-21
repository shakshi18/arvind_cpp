#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
    int last_digit;
    int sum=0;
    
   while(n>0) 
   {
       last_digit=n%10;
       sum=sum*10+last_digit;
       n=n/10;
   }
   if(temp==sum)
   {
       cout<<"palindrom"<<endl;
   }
   else
    cout<<"not a palindrom";
    
    
    return 0;
}
