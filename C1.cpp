// Program 1

#include <iostream>
using namespace std;
int main(){
int x;
int x=5;
cout<<x;
    
    return 0;
}
 //   error: redeclaration of ‘int x’


_______________________________ _____________________ _____________________________ ________________________________________
  
  
  
 #include <iostream>
using namespace std;
int x; // declared in GLOBAL VARIABLE
int main(){
int x=5;
cout<<x;
    
    return 0;
}


// C++/C allows a global variable to be declared again when first declaration doesn’t initialize the variable.
