/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    int c = 0;
    while(cin >> a && cin >> b) {
        int x = 0;
        for(int i = 0; i < b; i++) {
            c = (c + a) % b;
            x += c;
        }
        if(x == ((b*(b + 1))/2) - b) {
            cout << "         " << a << "         " << b << "    " << "Good Choice";
            cout << endl << endl;
        }
        else {
            cout << "         " << a << "         " << b << "    " << "Bad Choice";
            cout << endl << endl;
        }
    }
    
    
    
    return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    