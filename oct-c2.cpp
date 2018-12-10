#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int count, N, test, bit, nbb, byt;
      
    cin >> test;
    while(test--){
        cin >> N;
        bit = nbb = byt = 0;
        count = pow(2,(N/26));
        
        if(N%26 <= 2 && N%26 != 0) bit = count;
        else if(N%26 <= 10 && N%26 > 2) nbb = count;
        else if((N%26 <= 26 && N%26 > 10)||(N%26 == 0)) byt = count;

        cout << bit << " " << nbb << " " << byt << endl;
        }
    return 0; 
}