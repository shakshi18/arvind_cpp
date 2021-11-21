using namespace std;

int main ()
{
  char button;
  cout<<"button number:"<<endl;
  cin>>button;
  
  if(button=='a') // here button is char so you cant do .....if(button=="a")..error...ISO C++ forbids comparison between pointer and integer
  {
      cout<<"Namaste"<<endl;
  }
   else if(button=='b')
  {
      cout<<"hello"<<endl;
  }
 else if(button=='c')
  {
      cout<<"Hola"<<endl;
  }
  else{
      cout<<"still learning "<<endl;
  }



  return 0;
}


/* with SWITCH */

#include<iostream>
using namespace std;

int main ()
{
  char button;
  cout<<"button number:"<<endl;
  cin>>button;
  
 switch(button) // switch(expression you want to compare with in below case) { as in if else method ..if(button=='a')..} here button is comparison variable
                // this expression is taken by user ex: char button; ... cin>>buttoon;
 {
     case 'a':
        cout<<"Namste"; 
        break;
     case 'b':
        cout<<"hello";
        break;
     
     case 'c':
        cout<<"hola";
        break;
        
    default:  // its like "else"
    cout<<"Im still learning";
    break;
     
 }

  //____________________________+__________________________________________+_____________________________________________________________________
  
  
  
  
  //calculator program :
  
  
  
  
  #include<iostream>
using namespace std;

int main ()
{
    int n1,n2;
    cout<<"n1 and n2"<<endl;
    cin>>n1>>n2;
    
    char op;
    cout<<"op"<<endl;
    cin>>op;
    
    switch(op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;
        
        case '-':
        cout<<n1-n2<<endl;
        break;
        
        case '*':
        cout<<n1*n2<<endl;
        break;
        
        case '/':
        cout<<n1/n2<<endl;
        break;
        
        default:
        cout<<"operator not define"<<endl;
        break;
        
    }
    
    





  return 0;
}
