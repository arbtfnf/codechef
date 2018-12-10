#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int count, P1, P2, K, test;
      
    cin >> test;
    while(test--){
        cin >> P1 >> P2 >> K;
        if(((P1 + P2)%(2*K)) < K) cout << "CHEF"<< endl; else cout << "COOK"<< endl;
        }
    return 0; 
}
