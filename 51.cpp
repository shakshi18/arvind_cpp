// ex: a=10 have adress 2000 ... variable p=2000 has add 4000 ..variable q=4000 has add 4200


#include<iostream>
using namespace std;

int main()
{

int a=10;
int *p=&a;

cout<<p<<endl; // 2000
cout<<*p<<endl; //10

int **q=&p;

cout<<q<<endl; // 4000 (ADD of that variable which it is pointing ie "p") >>(add of p)
  
cout<<*q<<endl; // 2000 (VALUE of that variable which it is pointing ie "p") >>(value of p)
cout<<**q<<endl; // 10



    return 0;
}
 
