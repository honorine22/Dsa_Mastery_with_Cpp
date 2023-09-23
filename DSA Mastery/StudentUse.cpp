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
    s1.setAge(24);
    s1.rollNumber = 96;

    s1.display();

    cout<<"S1 age: "<<s1.getAge()<<endl;


    (*s6).setAge(23);
    (*s6).rollNumber=30;

    (*s6).display();
    s6->display();
    cout<<"S1 age: "<<s6->getAge()<<endl;

    //s6->age = 23 & (*s6).age are exactly the same. The first is the shortcut

return 0;
}
