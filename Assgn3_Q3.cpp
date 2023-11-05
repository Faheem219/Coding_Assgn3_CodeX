//question 3:

#include <iostream>
using namespace std;

inline int addNumbers(int a, int b) {
    return a+b;
}

int multiplyNumbers(int x, int y, int z = 1) {
    return x*y*z;
}

int main() {
    int sum = addNumbers(5, 7);
    int product = multiplyNumbers(3, 4); // Use default argument
    cout<<"Sum of numbers: "<<sum<<endl;
    cout<<"Product of numbers: "<<product<<endl;
    return 0;
}