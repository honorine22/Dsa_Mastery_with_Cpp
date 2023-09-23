#include <iostream>
#include <cstring>
using namespace std;

bool mystrcmp(char str1[], char str2[]) {
    if(strlen(str1) != strlen(str2)) return false;

    for (int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

int main() {
char str1[100];
char str2[100];
cout<<"Enter the first string\n";
cin>>str1;
// strlen built in function
int len = strlen(str1);
cout<<"The length of "<<str1<<" is "<<len<<endl;

// strcmp built in function
cout<<"Enter the second string\n";
cin>>str2;

if(mystrcmp(str1, str2))  {
    cout<<"EQUALL\n";
} else {
    cout<<"NOT EQUALL\n";
}

// strcat to concatenate strings
strcat(str1, str2);
cout<<"String 1 after concatenate "<<str1<<endl;
return 0;
}
