// declartion char arr[n+1] ..for "n" words cz last elemnt is null character that tell us okay the string is finished now.


//__________________________________________________________________________________________________________________________________________________
#include<iostream>
using namespace std;

int main()
{
char arr[100]="arvind";
cout<<arr;
    
    return 0;
}

//__________________________________________________________________________________________________________________________________________________
#include<iostream>
using namespace std;

int main()
{
char arr[100]="arvind";
int i=0;

while(arr[i]!='\0') // out of loop when it will get Null Character ..here after "d"
{
    cout<<arr[i]<<endl;
    i++;
}
    
    return 0;
}

//__________________________________________________________________________________________________________________________________________________
#include<iostream>
using namespace std;

int main()
{
char arr[100]="arvind";

cout<<arr[3]; // output : i

    return 0;
}

//__________________________________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

int main()
{
  int n;
  cin<<n;
  char arr[n+1];
  
  cin>>arr;
  
  cout<<arr;
 

    return 0;
}
