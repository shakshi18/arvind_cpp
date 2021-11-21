#include<iostream>
using namespace std;
int
main ()
{
  int i,a,b;
  cin >>a>>b;
  for(a;a<=b;a++) // from a to b first [ex: 10-20]
  {
      for (i=2;i<a;i++) // checking "a" is it prime or not.(ex: 10)
      {
          if(a%i==0)    // when its true and through out of loop means that number is NON PRIME { no need tp print them}  
          {
              break;
          }
      }
      
    if(i==a)// doest it have completed the iteration ?if yes means there was no number who can do a%i==0 ..means this "Ai" is PRIME no. 
    
    {
       cout<<a<<endl; 
    }

  }
  


  return 0;
}






/* OR */


#include<iostream>
using namespace std;
int
main ()
{
  int i,a,b;
  cin >>a>>b;
  for(int num=a;num<=b;num++)
  {
      for (i=2;i<num;i++)
      {
          if(num%i==0)
          {
              break;
          }
      }
      
    if(i==num) // doest it have completed the iteration ? if yes means there was no number who can do num%i==0 ..means its PRIME no. 
    {
       cout<<num<<endl; // here 'num' is prime
    }

  }
  


  return 0;
}
