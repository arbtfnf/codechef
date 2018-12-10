#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  test, N, M;
      
    cin >> test;
    while(test--){
        cin >> N >> M;
        if(N > M) cout << ">" << endl; else if(M>N) cout << "<" << endl; else cout << "=" << endl;
    }
    return 0; 
}
