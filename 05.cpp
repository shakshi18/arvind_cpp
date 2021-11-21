 /*1. rectangle 
 
user will give rows and column
****         
****  
****

*/


//CODE:
#include <iostream>
using namespace std;

main() {

int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++)
{
    for (int j=1;j<=col;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}


   return 0;
}


// ________ ___________________  ____________________________    ______________________________ ________________________________ _________________ //



/* 2. Hollow rectangle 

********************
*                  *
*                  *
*                  *
*                  *
******************** */

#include <iostream>
using namespace std;

main() {

int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++)
{
    for(int j=1;j<=col;j++)
    {
        if(i==1 ||i==row  ||  j==1|| j==col)
        {
            cout<<"*";
        }
        else
        {
           cout<<" " ;
        }
    }
    cout<<endl;
}


   return 0;
}







// ________ ___________________  ____________________________    ______________________________ ________________________________ _________________ //


/* 3. Inverted Pyramid { only "n" is given as we go down decrease the the coloumn}
****
***
**
*     


*/

// method 1: 

#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    for (int j=n;j>=i;j-- )
    {
        cout<<"*";
    }
    cout<<endl;
}


   return 0;
}

//method 2

#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=n;i>=1;i--)
{
    for (int j=1;j<=i;j++ ) // this loop will iterate "i" times{5 times,4 times,3 times...1 times}
    {
        cout<<"*";
    }
    cout<<endl;
}


   return 0;
}

// method 3 


#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=n;i>=1;i--)
{
    for (int j=i;j>=1;j-- ) // this loop will iterate "i" times{5 times,4 times,3 times...1 times}
    {
        cout<<"*";
    }
    cout<<endl;
}


   return 0;
}



// ________ ___________________  ____________________________    ______________________________ ________________________________ _________________ //



/*


*
**
***
****
***** 


*/



#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
for(i=1;i<=n;i++)
{
    for( j=i;j>=1;j--)
    {
        cout<<"*";
    }
    cout<<endl;
}

    
    return 0;
}



/* 



// ________ ___________________  ____________________________    ______________________________ ________________________________ _________________ //

        * 
      * * 
    * * * 
  * * * * 
* * * * *


*/


// CODE:

#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    for (int j=1;j<=n;j++ )
    {
        if(j<=n-i)
        {
            cout<<" ";
        }
        else
        {
            cout<<"*";
        }
    }
    
    cout<<endl;
}


   return 0;
}

/*

/*

        * 
       * * 
      * * * 
     * * * * 
    * * * * *  
    
    
    */


// CODE:

#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    for (int j=1;j<=n;j++ )
    {
        if(j<=n-i)
        {
            cout<<" ";
        }
        else
        {
            cout<<"* ";
        }
    }
    
    cout<<endl;
}


   return 0;
}


// ________ ___________________  ____________________________    ______________________________ ________________________________ _________________ //


/*

1
22
333
4444
55555
// print no of rows
*/

#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    for (int j=i;j>=1;j-- )
    {
     cout<<i;
    }
    
    cout<<endl;
}


   return 0;
}

/* 
A
BB
CCC
DDDD
EEEEE

*/

// CODE:

#include <iostream>
using namespace std;

main() {
int n;
cin>>n;
int num=65;
for (int i=1;i<=n;i++)
{
    for (int j=i;j>=1;j--)
    {
      cout<<char(num);  // will run J time with same char(num) value A..BB..CCC...D D DD..EEEEE
    }
    num++;
    cout<<endl;
}

   return 0;
}

// ________ ___________________  ____________________________    ______________________________ ________________________________ _________________ //

// Floyds triangle

/* 

1
2 3
4 5 6
7 8 9
10 11 12 13 14 

*/


#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
int count=1;
for (int i=1;i<=n;i++)
{
    
    for (int j=i;j>=1;j-- )
    {
        
     cout<<count<<"";
     count++;
    }
    
    cout<<endl;
}


   return 0;
}


/*

A
BC
DEF
GHIJ
KLMNO

*/


#include <iostream>
using namespace std;

main() {
int n;
cin>>n;
int num=65;
for (int i=1;i<=n;i++)
{
    for (int j=i;j>=1;j--) //when i=3 >> j= three TIME run 3 2 1 
    {
      cout<<char(num);  // for j=3..>>> (D)then in same loop +1=(E)then +1=(F)
                                 
      num++;
    }
    // num++;
    cout<<endl;
}

   return 0;
}


