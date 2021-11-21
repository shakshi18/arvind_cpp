//>>> FLAG method is most clear..even in python




//ERROR


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Non Prime number";
            break;
        }
    }
    cout<<i;    // will print i==0 (perhaps int i from upper )
	
    // if(i==n)
    // {
    //     cout<<"prime number"<<endl;
        
    // }
    return 0;
}



//______________________________________+_______________________________________________+________________________________________________________________________

#include<iostream>
using namespace std;
int
main ()
{
  int i,n;
  cin >> n;
  for (i = 2; i < n; i++) 
    {
      if (n % i == 0) // will enter this loop when condition will be true ..else not(out of loop)
	{
	  cout << "not a prime no" << endl;
	  break;
	}
	
	/*   wrong  ('55' test case fail  ) if will enter immidiately on else when if condition false [we cant conclude it is prime untill all iteration is finished]*/ 
	
//       else 
//       {
//           cout<<"prime no "<<endl;
//           break;
//       }
    
    
    }
  if (i == n) // did it competed the all iteration? else it will print "Not a prime no Prime no" 
	       // cz after printing "non prime" it will come out of loop and just after "prime" is written so will print both. Hence apply condtion just after the loop.
    {
      cout<<"prime no "<<endl;
    }



  return 0;
}




//OR//



#include<iostream>
#include<cmath>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  bool flag=0;
  int i;
  for (int i = 2; i < sqrt(n); i++) 
    {
      if (n % i == 0) // will enter this loop when condition will be true ..else not(out of loop)
	{
	  cout << "not a prime no" << endl;
	  break;
	  flag=1;
	}
	
	/*   wrong  ('55' test case fail  ) if will enter immidiately on else when if condition false [we cant conclude it is prime untill all iteration is finished]*/ 
	
//       else 
//       {
//           cout<<"prime no "<<endl;
//           break;
//       }
    
    
    }
  if (flag==0) // did it competed the all iteration?
    {
      cout<<"prime no "<<endl;
    }



  return 0;
}
