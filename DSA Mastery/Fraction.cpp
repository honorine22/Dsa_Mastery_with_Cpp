#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator; // mandatory
    }
    void print() {
        cout<<this->numerator<<"/"<<this->denominator<<endl; //optional
    }
    void add(Fraction f2) {
        int lcm = denominator * f2.denominator; //optional
        int x = lcm/denominator; //optional
        int y = lcm / f2.denominator;
        int num = x*numerator + y*f2.numerator;

        // int num = numerator * f2.denominator + f2.numerator * denominator

        // store result in f1
        this->numerator = num;
        this->denominator = lcm;

        simplify();
    }

    void simplify() {
    int gcd = 1;
        int j = min(this->numerator, this->denominator); // optional
        for(int i = 1; i <= j; i++) {
                if(numerator%i == 0 && denominator % i == 0) {
                    gcd = i;
                }
        }

    // simplify
    numerator = numerator/gcd;
    denominator = denominator/gcd;
    }



};
int main() {
    Fraction f1(10, 2);
    Fraction f2(15,4);

    f1.add(f2);
    f1.print();
    f2.print();

return 0;
}
