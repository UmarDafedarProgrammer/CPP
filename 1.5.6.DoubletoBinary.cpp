/* 
 * File:   display-double.cpp
 * Author: aspyct
 * 
 * Can be compiled to a binaly that displays the binary value of double numbers.
 * Usage  : ./a.out <number1> ... <number n>
 * Example: ./a.out 1.0 2.5
 *
 * Created on July 28, 2012, 11:03 PM
 */

#include <cstdlib>
#include <stdint.h>
#include <iostream>

using namespace std;

union number {
    double d;
    uint64_t i;
};

void display(double d);
void display(union number n);

int main(int argc, char** argv) {
    int i;
    double d;
   argc=64; 
    
    for (i = 1; i < argc; ++i) {
        sscanf(argv[i], "%lf", &d);
        display(d);
    }

    return 0;
}

void display(double d) {
    union number n;
    n.d = d;
    display(n);
}

void display(union number n) {
    int i;
    uint64_t base = 1;
    
    cout << (n.i & (base << 63)) << " ";
    
    for (i = 62; i > 51; --i) {
        cout << ((n.i & (base << i)) >> i);
    }
    
    cout << " ";
    
    for (; i >= 0; --i) {
        cout << ((n.i & (base << i)) >> i);
    }
    
    cout << endl;
}
