

#include <iostream>

using namespace std;

int main() {
    
    int firstTerm = 1;   //first term variable
    int secondTerm = 1;  //second term variable
    int nextTerm;        //each next term
    
    cout << "Fibonacci Series: " << firstTerm << " , " << secondTerm << " , "; //prints out the first two terms
    for (int i = 1; i <= 18; i++) {  //looping thorugh first 18 terms in the sequence
        nextTerm = firstTerm + secondTerm; //the next term is the sum of the previous 2 numbers
        cout << nextTerm << " , "; //printing out the next number
        firstTerm = secondTerm;   //each term moves down the sequence
        secondTerm = nextTerm;
    }                             //loops thorugh until there are 18 terms
    return 0;
}
