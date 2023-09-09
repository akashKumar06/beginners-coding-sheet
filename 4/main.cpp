#include <iostream>
using namespace std;

int main(){
    int dividend,divisor;
    cout<<"\n\t\tRemainder and quotient\n\n";
    cout<<"Enter dividend: ";
    cin>>dividend;
    cout<<"Enter divisor: ";
    cin>>divisor;
    
    cout<<"\nRemainder: "<<dividend%divisor;
    cout<<"\nQuotient: "<<float(dividend)/divisor;
    
    return 0;
}
