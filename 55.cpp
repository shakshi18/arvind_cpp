#include<iostream>
#include<string>
using namespace std;
int main(){
  // cout<<'a'-'A'; : .... 32>> 'a' is 32 times greater than 'A'.


string s="arvind";

// CONVERT TO UPPER CASE 

for(int i=0;i<s.size();i++)
{
    if(s[i]>='a' && s[i]<='z') // if 'a' come -ve by 32 will get 'A' as for 'b' -ve by 32 get 'B'...
        s[i]-=32;
}

cout<<s;

    return 0;
    
}
//________    __________________  Method 2:   ___________________  ______________________________

//METHOD 2: 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){


string s="arvind";

transform(s.begin(), s.end(), s.begin(),::toupper);
cout<<s;

    return 0;
    
}









//____________________________LOWER CASE ___________________________________+_____________________________________________+_______________________________________________________



// LOWER CASE:
#include<iostream>
#include<string>
using namespace std;
int main(){
string s="ARVIND";
for(int i=0;i<s.size();i++)
{
    if(s[i]>='A' && s[i]<='Z') // if 'A'+ come.. -ve by 32 will get 'a' as for 'B' -ve by 32 get 'B'....
        s[i]+=32;
}
cout<<s;
  
  return 0;
}


//________    __________________  Method 2:  ___________________  ______________________________

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){


string s="ARVIND";

transform(s.begin(), s.end(), s.begin(),::tolower);
cout<<s;

    return 0;
    
}

