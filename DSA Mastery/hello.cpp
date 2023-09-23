#include <iostream>
using namespace std;

int main() {

int n;
cout<<"Enter the number of elements: "<<endl;
cin>>n;
int a[n];

for(int i = 0; i<n; i++) {
    cout<<"Please enter your number "<<i+1<<endl;
    cin>> a[i];
}

int sum = 0;
int largest = 0;
for(int i = 0; i<n; i++) {
    if(a[i] > largest) {
        largest = a[i];
    }
    sum+= a[i];
}

cout<<"The largest number is "<<largest<<endl;
cout<<"The sum of all numbers is: "<<sum<<endl;
return 0;
}
