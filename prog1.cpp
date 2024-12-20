#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int x=0;
    int y=0;
    
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] >= 97) {
            y++;
        }
        else {x++;}
    }
    if (x>y) {
        for (int i = 0; i < s.length(); i++) {
            if(s[i] >= 97) {
                s[i] -= 32;
            }
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            if(s[i] < 97) {
                s[i] += 32;
            }
        }
    }
    cout << s << ' ';
    return 0;
}