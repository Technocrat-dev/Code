/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 1;
    int x = 0;
    int y = 0;
    while(a != 0) {
        cin >> a;
        vector<vector<int>> vec;
        int b,c,d,e;
        for (int i = 0; i < a; i++) {
            cin >> b >> c >> d >> e;
            vec.push_back({b, c, d, e});
        }
        for(int i = 0; i < a - 1; i++) {
            if(vec[i][2] == vec[i + 1][2]) {
                if(vec[i][1] ==  vec[i + 1][1]) {
                    if(vec[i + 1][0] - vec[i][0] == 1) {
                        x++;
                        y += vec[i + 1][3] - vec[i][3];
                    }
                }
                else if (vec[i][1] ==  vec[i + 1][1] - 1) {
                    if (vec[i + 1][0] == 1 && (vec[i][0] == 29 || vec[i][0] == 28 || vec[i][0] == 31)) {
                        x++;
                        y += vec[i + 1][3] - vec[i][3];
                    }
                    if (vec[i + 1][0] == 1 && vec[i][0] == 30) {
                        if(vec[i][1] == 4 || vec[i][1] == 6 || vec[i][1] == 9 || vec[i][1] == 11) {
                            x++;
                            y += vec[i + 1][3] - vec[i][3];
                        }
                    }
                        
                }
                
            }
            else if(vec[i][2] == vec[i + 1][2] - 1) {
                if(vec[i][1] == 12 && vec[i + 1][1] == 1) {
                    if(vec[i][0] == 31 && vec[i][1] == 1) {
                        x++;
                        y += vec[i + 1][3] - vec[i][3];
                    }
                }
            }
        }
        cout << x << " " << y;
    }
    
    
    return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    