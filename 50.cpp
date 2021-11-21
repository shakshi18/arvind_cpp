

#include<iostream>
using namespace std;

int main()
{
    
int arr[]={10,20,30};

// "arr" here act like a pointer that contain  ADD of 0th element 

cout<<arr<<endl; //0x7fffa02e8d90

// " *arr " will point to the VALUE of 0th element 

cout<<*arr<<endl; // 10

    return 0;
}


//__________________________________________________+_______________________________________________+_____________________________________________________


// print the elemet of an array using pointer 


#include<iostream>
using namespace std;

int main()
{
    
int arr[]={10,20,30};

int *x=arr; // now "x" have ADD of 0th elemnt... and "x* " have the VALUE of 0th element.

for(int i=0;i<3;i++)
{
    cout<<*x<<" ";
    x++; // will make adress with 4Byte gap ... and there we will get next elemnt of our array 
}



    return 0;
}

//__________________________________________________+_______________________________________________+_____________________________________________________


// NOTE:  arr is indexing pointer... pointing to 0th element

#include<iostream>
using namespace std;

int main()
{
    
int arr[]={10,20,30};


cout<<*arr<<endl; // print 10

for(int i=0;i<3;i++)
{
   /* cout<<*arr<<" "; 
     arr++; // illegal
     
     */
      
     cout<<*(arr+i)<<" "; // print elemnt of array
}


    return 0;
}
 
