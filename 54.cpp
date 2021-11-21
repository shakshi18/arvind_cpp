// syntax : string var_name



#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name;
cin>>name; // arvind

cout<<name; // arvind


    return 0;
}


//_________________________+____________________________________________________+______________________________________+_____________________________


#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name="arvind";

cout<<name;  // arvind


    return 0;
}


//_________________________+____________________________________________________+______________________________________+_____________________________


#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name="arvind kumar yadav";

cout<<name;  // arvind kumar yadav


    return 0;
}

//_________________________+____________________________________________________+______________________________________+_____________________________

#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name(5,'n');

cout<<name;   // nnnnn


    return 0;
}

//_________________________+____________________________________________________+______________________________________+_____________________________


#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name;

cin>>name; // arvind kumar
cout<<name;  // arvind


    return 0;
}


//_________________________+____________________________________________________+______________________________________+_____________________________



// cin considers a space (whitespace, tabs, etc) as a terminating character, 
//which means that it can only display a single word (even if you type many words):


// solution : use getline(cin, var_name) function 

#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name; // arvind kumar yadav

getline(cin,name); // take all the input in a single line

cout<<name;  // arvind kumar yadav


    return 0;
}

//_________________________+____________________________________________________+______________________________________+_____________________________

#include<iostream>
#include<string>
using namespace std;


int main(){
    
    cout<<('a'>'A'); // 1 ... means true. 'a' is 32 time greater than 'A'.
    
    return 0;
    
}

#include<iostream>
#include<string>
using namespace std;
int main(){

// string to int ... int x = stoi(s)

string s="786";
int x=stoi(s);
// cout<<s+2<<endl; // wrong it will print "s" original string while converted one is stored in "x".
cout<<x+2<<endl;


    return 0;
    
}

//_________________________+____________________________________________________+______________________________________+_____________________________


#include<iostream>
#include<string>
using namespace std;
int main(){

// int to string

int x=786;
string s=to_string(x);
cout<<(s+" arvind") <<endl; // here s became string 

    return 0;  
}
