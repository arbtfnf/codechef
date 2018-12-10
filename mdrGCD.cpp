#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int x,test;
    int y;

    cin >> test;

    while(test--){
        cin >> y;
        int res = 1;     // Initialize result
    
        while (y > 0)
        {
            // If y is odd, multiply x with result
            if (y & 1)
                cout << y << endl;
                res = res*x;
    
            // n must be even now
            //cout << y << endl;
            y = y>>1; // y = y/2
            //cout << y << endl;
            //x = x*x;  // Change x to x^2
        }
        //cout << res << endl;
    }
    return 0;
}