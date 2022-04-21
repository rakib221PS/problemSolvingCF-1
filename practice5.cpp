#include<iostream>
using namespace std;

int main(void) {
    cout.precision(9);

    float f = 1.999998; //this number gets rounded up to the nearest hundred thousandths
    cout << f << endl;  //so f should equal 2

    return 0;
}