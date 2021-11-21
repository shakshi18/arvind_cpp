#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int originaln=n; // n is stored .."origianaln" not changing throught programm
    int sum=0;
    while(n>0)
    {
        int last_digit=n%10;
        sum=sum+pow(last_digit,3);
        n=n/10;
        
    }
    // when while loop ends "n" has become 0 by dividing by 10 again and again..hence to copmare what "n" was originally
    // we have created another variable "originaln" in which "n" is stored permanently .. that is not changing
    if(sum==originaln)
    {
        cout<<"Armstrong Number";
    }
    else{
        cout<<"not an Armstrong";
    }
    
    
    
    
    
    return 0;
    
}
