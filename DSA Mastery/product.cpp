#include <iostream>
#include "student.cpp"
using namespace std;


int main() {
    // Creating objects statistically
    Student s1;
    Student s2;
    Student s3, s4, s5;
    // Creating objects dynamically
    Student *s6 = new Student;
    s1.age = 24;
    s1.rollNumber = 96;

    cout<<s1.age<<endl;
    cout<<s1.rollNumber<<endl;

    (*s6).age=23;
    (*s6).rollNumber=30;
    //s6->age = 23 & (*s6).age are exactly the same. The first is the shortcut

return 0;
}
