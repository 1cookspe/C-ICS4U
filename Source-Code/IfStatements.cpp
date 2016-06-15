

#include <iostream>

using namespace std;

int main()                            // All programs must have main class
{
    int pHLevel;                        // vaiable for the pH
    
    cout<<"Please input the pH Level: ";  // Asks for pH
    cin>> pHLevel;                       // The input is put in pHLevel
    
    if ( pHLevel < 0 || pHLevel>14) {  // CASE 1: INVALID DATA
        cout<<"Invalid pH Number\n";   // OUTPUT
    }
    else if ( pHLevel < 6.5 ) {            // CASE 2: ACIDIC
        cout<<"The sample is acidic";       // Just to show you it works...
    }
    else if (pHLevel>7.5){
        cout<<"The sample is basic\n";     // CASE 3: BASIC
    }
    
}
