#include<iostream>
using namespace std;


void increment(int a) //here "a" is NEW local variable of fun
{
    a++;   // only local variable of fun is changed not from everywhere
  
    cout<<" value of a in the fun : "<<a<<endl; // a=2
}

int main()
{

int a=1;
increment(a);
cout<<"value of a inside main: "<<a; // a=1

    return 0;
}
 


//____________________________________________________+___________________________________________________
  
  
  #include<iostream>
using namespace std;


void increment(int b) // here "b" is NEW local variable of fun
{
    b++; // only local variable of fun is changed not from everywhere
  
    cout<<" value of a in the fun : "<<a<<endl; // a=2
}

int main()
{

int a=1;
increment(a);
cout<<"value of a inside main: "<<a; // a=1

    return 0;
}
  

//____________________________________________________+___________________________________________________
  
#include<iostream>
using namespace std;


int increment(int a) 
{
 
    a++;     
    return a; // return means when ever this fun will be called always give you value ==2 
}

int main()
{

int a=1;
cout<<increment(a);   // a=2
    return 0;
}
