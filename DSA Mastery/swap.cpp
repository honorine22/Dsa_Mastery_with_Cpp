#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout<<"Enter number a: "<<endl;
    cin>>a;
    cout<<"Enter number b: "<<endl;
    cin>>b;
temp = a;
a = b;
b = temp;

cout<<"Numbers after swapping"<<endl;
cout<<"a = "<<a<<" and b = "<<b<<endl;

return 0;
}
