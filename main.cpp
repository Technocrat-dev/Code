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

bool isPrime(int n) {
    if (n <= 1) {return false;}
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; 
    }
    return true;
}

bool func(int n) {
    int root = sqrt(n);
    return (root*root == n);
}

int main() {
    int a;
    vector<int> x;
    while(true) {
        cin >> a;
        if(a == 0) {
            break;
        }
        x.push_back(a);
    }
    for(int i = 0; i < x.size(); i++) {
        int p = x[i];
        if(func(p)) {
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    cout << sqrt(5);
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    