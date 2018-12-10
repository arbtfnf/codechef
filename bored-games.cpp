#include <bits/stdc++.h>
using namespace std;

int fact(int);
int main()
{   
    int i,j,k,N,test;
    long long int sqr, wr;
    string string1, string2;  
    cin >> test;
    while(test--){
        cin >> N;
        sqr = 0;
        //sqr = N*N;
        
        for(i=1;i<=N;i++){
            if(i%2 != 0){
                sqr += pow(N-i+1, 2);
            }
        }
        wr = pow(sqr, 1);
        cout << wr << endl;
    }
    return 0; 
}