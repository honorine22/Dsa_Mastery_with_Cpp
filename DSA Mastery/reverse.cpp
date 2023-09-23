#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements you want to use\n";
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }

    cout<<"Before Reverse \n";

    for(int i = 0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    //Print array in reversed order

    /*
    cout<<"Reversed Array\n";
    for(int j = end - 1; j>=0; j++) {
        cout<<a[j]<<" "<,endl;
    }
*/

    cout<<"After Reverse \n";

    for(int i = 0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
