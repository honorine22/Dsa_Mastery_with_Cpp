#include <iostream>
using namespace std;
class Student {
    public :
        // Default constructor
        Student() {
        cout<<"Constructor called "<<endl;
        }
        //Parameterized constructor
        Student(int r){
        cout<<"Second constructor called "<<endl;
        rollNumber = r;
        }
        Student(int a, int r){
        cout<<"This "<<this<<endl;
        cout<<"Third constructor called "<<endl;
        rollNumber = r;
        age = a;
        }
        int rollNumber;

    private :
        int age;

    public :
        void display() {
            cout<<age<<" "<<rollNumber<<endl;
        }

        int getAge() {
            return age;
        }

        void setAge(int a) {
            if(a<0) {
                return;
            }
        age = a;
        }
};
