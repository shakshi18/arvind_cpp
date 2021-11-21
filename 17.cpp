// 1 1 1 = 1x2^0 + 1x2^1 + 1x2^2


#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int sum=0;
    int x=0;
    while(n>0)
    {
        int last_digit=n%10;
        sum=sum+pow(2,x)*last_digit;
        x++;
        n=n/10;
    }
    cout<<sum;

  return 0;
}

//_____________________________________________________________________________________________________________________________________


//METHOD 2: without math function

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int sum=0;
    int x=1;
    while(n>0)
    {
        int last_digit=n%10;
        
        sum=sum+x*last_digit;   // first time.... 2^0=1 ....hence 1xlast_digit
        x=x*2; // x=1x2(2^1) >> x=2x2(2^2) >> x=4x2 (2^3)
        n=n/10;
    }
    cout<<sum;

  return 0;
}
