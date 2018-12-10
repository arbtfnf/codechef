#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  test, N, M, X, Y, pOW, kNW, flag;
      
    cin >> test;
    while(test--){
        pOW = kNW = 1;
        flag = 0;
        cin >> N >> M >> X >> Y;
                N -=1;
                M -=1;
                if(X == 1 && Y == 1)
                    cout << "Chefirnemo" << endl;
                else if((M%Y == 1 && N%X == 1) ||(M%Y == 0 && N%X == 0) || (M%Y == 1 && X == 1 && N > 0) || (Y == 1 && N%X == 1 && M > 1))
                    cout << "Chefirnemo" << endl;
                else 
                    cout << "Pofik" << endl;
                    
        }
    return 0; 
}
