/* In call by value, original value is not modified.

In call by value, value being passed to the function is locally stored by the function parameter in stack memory location.
If you change the value of function parameter,
it is changed for the current function only. It will not change the value of variable inside the caller method such as main(). */






#include<iostream>
using namespace std;


void increment(int a) // this "a" is NEW local variable of this function
{
    a++;
    cout<<" value of a in the fun : "<<a<<endl; //  a=2
}

int main()
{

int a=1;   //this "a" is local variable of this main fun
increment(a);
cout<<"value of a inside main: "<<a; // a=1

    return 0;
}
  


//___________________________+________________________________________________________+__________________________________________________________________


#include<iostream>
using namespace std;


int increment(int a) 
{
    a++;
   return a;  // return means this fun will have value "2" when ever it will be called ...
}

int main()
{

int a=1;  
cout<<increment(a); // OUTPUT : 2

    return 0;
}
