// Pointer is variable which store the adress of another variable


//NOTE : *x will point the VALUE of "a" ... "x" will point to add of "a".



#include<iostream>
using namespace std;

int main()
{
    
int a=10;
  
// int x=&a; >>  wrong
  
int *x=&a; // correct

cout<<x; //....> adress of "a" : 0x7fff71c9549c
cout<<*x //....> value of "a" pointed by "x" : 10

    return 0;
}

//__________________________________________________+_______________________________________________+_____________________________________________________


#include<iostream>
using namespace std;

int main()
{
    
int a=10;
int *x;
x=&a;

cout<<x; //....> adress of "a" : 0x7fff71c9549c
cout<<*x //....> value of "a" pointed by "x" : 10

    return 0;
}
 


//__________________________________________________+_______________________________________________+_____________________________________________________

#include<iostream>
using namespace std;

int main()
{
    
int a=10;
int *x=&a;
  
cout<<*x<<endl; //...> 10

 *x=20; // *x is pointing to "a". means we have changed "a" without touching "a" with help of pointer 
cout<<*x<<endl; // ....> 20

    return 0;
}
  
  
  
