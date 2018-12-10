#include <bits/stdc++.h>
using namespace std;



//static std::vector<std::string> str;
long long int A[1100001], str[1100001];
int main()
{   
    long long int  test,N,K,i,j;
      
    cin >> test;
    while(test--){

        cin >> N >> K;

        
        for(i=0;i<N;i++){
            cin >> A[i];
        }

        for(i=0;i<N;i++){
            if((K - A[i]) >= 0){
                str[i]=1;
                K -=A[i];
            }
            else 
                str[i]=0;
        }
        for(i=0;i<N;i++)
            cout << str[i];
        cout << endl;
    }
       
    return 0; 
}
