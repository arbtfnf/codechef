#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int P, S, i, j, SC[30], NS[1000];     
    
    cin >> P >> S;  
        for(j=0;j<S;j++)  
            cin >> SC[j];  
        for(j=0;j<S;j++)  
            cin >> NS[j];
        for(j=0;j<S;j++)  
            cout << SC[j];
        for(j=0;j<S;j++)  
            cout << NS[j];
        
       

    return 0; 
}
