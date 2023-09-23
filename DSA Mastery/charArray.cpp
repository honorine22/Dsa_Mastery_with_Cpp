#include <iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        count++;
    }
    return count;
}


void reverseString(char word[]) {
int start = 0;
int end = length(word) - 1;

while(start < end) {
    /*
    char temp;
    temp = start;
    start = end;
    end = temp;
    */
    swap( word[start], word[end] );
    start++;
    end--;
}

}

int main() {
    char name[100];
    cout<<"Enter any word : ";
    cin.getline(name, 100);

    cout<<"Your name is "<<name<<endl;
    cout<<"The length of "<<name<<" is: "<<length(name)<<endl;
    // we can't directly cout this because the function returns void
    reverseString(name);
    cout<<"Reversed String is: "<<name<<endl;

return 0;
}
