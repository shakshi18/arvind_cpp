//1, 4, 10, 20, 35, 56, 84, 120, 165... {(n+1)*2} but here printing first then incrementing {(i*2)+1} then do +1
// ex: 4.... (4+1)*2=10 OR ... [(4*2)+1=9 ..i++ means.....+1=10....enter in while loop having i==10...cout<<10]

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n) // limit of the series
    {
        cout<<i<<endl;
        i=(i*2)+1;
        i++;
    }

    return 0;
}


//_____________________________________________________________________________________________________________

// METHOD 2:

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        i=(i*2)+1;
    }
    return 0;
    
}
