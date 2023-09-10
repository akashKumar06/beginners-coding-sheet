#include <iostream>
using namespace std;

int main(){
    cout<<"\n\t\tProgram to swap two numbers\n\n";
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\n\nNumbers are a: "<<a<<" b: "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"Numbers after swaping";
    cout<<"\nNumbers are a: "<<a<<" b: "<<b<<endl;
    return 0;
}
