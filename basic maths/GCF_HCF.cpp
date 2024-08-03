#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1>> n2;

    //for(int i=1; i<=min(n1,n2); i++)
    //As we want GREATEST its better to run it backwards so tht it terminates when it finds the GCF
    for(int i= min(n1,n2); i>0; i--){
        if(n1%i ==0 && n2%i==0){
            cout<< i;
            break; //As whats the need if if we hv found the biggest one
        }
    }
}

//Also GCD(a,b) = GCD(a-b, b)
