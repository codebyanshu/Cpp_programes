#include <iostream>
using namespace std;

// Define a structure to represent a complex number
struct complex
{
    double r;   // Real part
    double img; // Imaginary part
};

// Function to set the values of a complex number and return it
complex set(double a, double b)
{
    complex temp;
    temp.r = a;
    temp.img = b;
    return temp;
}

// Overload the '+' operator to add two complex numbers
complex operator+(complex a, complex b)
{
    complex temp;
    temp.img = a.img + b.img;
    temp.r = a.r + b.r;
    return temp;
}

// Overload the '-' operator to subtract two complex numbers
complex operator-(complex a, complex b)
{
    complex temp;
    temp.img = a.img - b.img;
    temp.r = a.r - b.r;
    return temp;
}

// Function to display a complex number in (real, imaginary) format
void evalute(complex m)
{
    cout << '(' << m.r << ',' << m.img << ')' << endl;
}

int main(int argc, char const *argv[])
{
    // Create two complex numbers using the set function
    complex a, b;
    a = set(1, 2); // a = (1, 2)
    b = set(1, 3); // b = (1, 3)

    // Add complex numbers a and b
    complex c = a + b; // c = (2, 5)
    evalute(c);        // Display c

    // Add a and two b's: a + b + b
    complex d = a + b + b; // d = (3, 8)
    evalute(d);            // Display d

    // Subtract d from c
    complex f = c - d; // f = (-1, -3)
    evalute(f);        // Display f

    return 0;
}