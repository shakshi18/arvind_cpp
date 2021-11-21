
#include<iostream>
using namespace std;


void increment(int *b)  // int *b= &a
{
 
    *b++;     // wrong { its like 1++} ... always var_name ++
  
    cout<<" value of a in the fun : "<<*b<<endl;
}

int main()
{

int a=1;
increment(&a);
cout<<"value of a inside main: "<<a;

    return 0;
}

//________________________________________________________________+___________________________________________________+___________________________________________________

#include<iostream>
using namespace std;


void increment(int *b) // here its like : int *b= &a >> "b" will have address of "a" and....  "*b" will have value of "a"
{
 
    int x=*b;  // x will get *b (means value 1)
    x++;
    cout<<" value of a in the fun : "<<x<<endl;   // 2
}

int main()
{

int a=1;
increment(&a);
cout<<"value of a inside main: "<<a;  // 2

    return 0;
}



 
