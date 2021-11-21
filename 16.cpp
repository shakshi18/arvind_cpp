
// triplet : a=max(x,y,z)

//           a^2=b^2+c^2; must satisfy




#include<iostream>
using namespace std;

void check(int x,int y,int z){
    // a=max(x,y,z) .....we want maximum value to be stored in a.
    int a=max(x,max(y,z)); 
    int b,c;
    if(a==x) // means x is maximum
    {
        a=x; // now a is max
        b=y;
        z=c; // rest two is stored in any of b or c .
    }
    else if(a==y) // means y is maximum
    {
        a=y; // now a is max
        b=x;
        c=z;
        
    }
    else // means z is maximum
    {
        a=z; // now a is max
        b=y;
        c=x;
    }

    
    
    if(a*a==b*b+c*c)
    {
        cout<<"Pythagorial Triplet";
    }
    else
    {
    cout<<"not a Triplet";
    }
}



main ()
{
    
int x,y,z;
cin>>x>>y>>z;

check(x,y,z);

  return 0;
}

//_______________________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;
bool check(int x,int y,int z){
    // a=max(x,y,z) .....we want maximum value to be stored in a.
    int a=max(x,max(y,z)); 
    int b,c;
    if(a==x) // means x is maximum
    {
        a=x; // now a is max
        b=y;
        z=c; // rest two is stored in any of b or c .
    }
    else if(a==y) // means y is maximum
    {
        a=y; // now a is max
        b=x;
        c=z;
        
    }
    else // means z is maximum
    {
        a=z; // now a is max
        b=y;
        c=x;
    }

    
    
    if(a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int main ()
{
    
int x,y,z;
cin>>x>>y>>z;

if(check(x,y,z))
{
    cout<<"Triplet";
}
else
{
    cout<<"not Triplet";
}

  return 0;
}























