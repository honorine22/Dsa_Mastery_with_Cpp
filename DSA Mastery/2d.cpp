#include <iostream>
using namespace std;

void printArray(int a[][5], int m, int n) {
    // rowwise

for(int i = 0; i<m; i++) {
    for(int j = 0; j<n; j++) {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}

int main() {
int a[2][5] = {
            {1,2,3,4}, {2,3,4,5}
            };
printArray(a, 2, 5);
return 0;
}
