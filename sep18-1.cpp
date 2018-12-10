#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int coin, test, N, S, A, B;
      
    cin >> test;
    while(test--){
        cin >> N >> coin >> S;
        while(S--){
            cin >> A >> B;

            if(A == coin || B == coin){
                if(coin == A){
                    coin = B;
                    //cout << coin << endl;
                }
                else{
                    coin = A;
                    //cout << coin << endl;
                } 
            }
        }
            cout << coin << endl;
        }
    return 0; 
}
