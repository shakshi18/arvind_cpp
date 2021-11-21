//sum of first n number

#include<iostream>
using namespace std;


int nsum(int n){
    
int sum=0;
for(int i=1;i<=n;i++)
{
    sum=sum+i;
}
return sum;
 
}

int main(){
int n;
cin>>n;
cout<<nsum(n);
    
    return 0;
    
}

//__________________________________________________________________________________
// METHOD 2: 

#include<iostream>
using namespace std;


int nsum(int n){
    
    int ans=(n*(n+1))/2;
    return ans;
}

int main(){
int n;
cin>>n;
cout<<nsum(n);
    
    return 0;
    
}
