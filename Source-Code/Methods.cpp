

// function example
#include <iostream>
using namespace std;

int multiplication (int a, int b)
{
    int p;
    p=a*b;
    return p;
}

int main ()
{
    int a;
    a = multiplication (5,3);
    cout << "The product is " << a;
}
