#include<iostream>
using namespace std;
int
main ()
{
int n;
cin>>n;
int reverse=0;
while(n>0)
{
    int last_digit=n%10; //3>>2>>>1
    reverse=reverse*10+last_digit; //0*10+3=3>>3*10+2=32>>32*10+1=321(final answer)
    n=n/10; //(initially ==123) >>12>>1>>0
}
cout<<reverse;


  return 0;
}

// 1/10==(quationt)==0
//1%10== (remainder)==1
}


// FOR 100 it will return 1...we want 1000>>>001 then.....




//___________________________________________________________________________________________________________________________________________________________


//method 2:
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int sum=0;
while(n>0)
{
    int last_digit=n%2;
    cout<<last_digit<<"";
    n=n/2;
}


    return 0;
}


//     10000>>>> 00001



//___________________________________________________________________________________________________________________________________________________________


// Sum of Digit 


#include<iostream>
using namespace std;
int
main ()
{
int n;
cin>>n;
int ans=0;
while(n>0)
{
    int last_digit=n%10; 
    ans=ans+last_digit;
    n=n/10; 
}
cout<<ans;


  return 0;
}
