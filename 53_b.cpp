// PROBLEM : 

#include<iostream>
using namespace std;


void swap(int x,int y) // int x=a ( value of "a" is copied into x II int y=b)
{
 int temp=x;
 x=y;
 y=temp;
}

int main()
{

int a=2, b=4;
swap(a,b);
cout<<a<<" "<<b;   // a=2   b=4
return 0;
}


// SWAP didnt haapend here ...cz only local variable of function (x and y) is chnged not the actual parameter in main fun.

//_________________________________+________________________________________________+__________________________________________________+_______________________


// SOLUTION : 


/* In call by reference, original value is modified because we pass reference (address).

Here, address of the value is passed in the function, 
so actual and formal arguments share the same address space. Hence, value changed inside the function, is reflected inside as well as outside the function. */



#include<iostream>
using namespace std;


void swap(int *x,int *y)   // means : int *x=&a  II int *y=&b
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

int main()
{

int a=2, b=4;
swap(&a,&b);
cout<<a<<" "<<b;   // 4 2 
    return 0;
}
