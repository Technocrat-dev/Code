/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    while(true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        int x = (a - 7) * (b - 7);
        if(c) {
            if(x % 2 == 0) {
                cout << x/2 << endl;
            }
            else {
                cout << x/2 + 1 << endl;
            }
        }
        else {
            cout << x/2 << endl;
        }
    }
    
    
    
    return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    