/*try to write the functions above that function in which that function is being used so that compiler dont get confused
ex: use of "add" function is in "main" hence i have written "add" above "main". and use of "print" is in "add" hence
i have written "print" above "add".*/

//                  OR


/* Use Function prototye (tell compiler that okay this functuon is comming ahead be ready)
     
     
     
     
//The syntax for function declaration is-
return-type function_name (parameter 1, parameterϮ ...... parameter n){

//function_body
} */



#include<iostream>
#include<math.h>
using namespace std;


void print(int num){
    cout<<num<<endl;
    // return;
}
// void means return type is void(nothing)so there is no need to write "return".
//{we r just printing ..if inside function there is anything that reqire some calculation then we return like int , float etc}

int add(int a, int b){
    print(a); // will call "print" function
    print(b);
    int c=a+b;
    return c;
}
 int main(){
     int a,b;
     cin>>a>>b;
     cout<<add(a,b)<<endl;
    
    
    
    return 0;
    
}
