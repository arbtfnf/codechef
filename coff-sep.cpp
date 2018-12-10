#include <bits/stdc++.h>
using namespace std;
#include <vector> 

long long int A[1100001];
//freq[1100001];
int main()
{   
    long long int  test,N,s,i,j;
    long long int sum, high;
    vector<int> freq;  
    cin >> test;
    while(test--){
        cin >> N;
        sum=0, s=0, high =0;

        for(i=0;i<=2*N;i++){
            freq[i]=0;
        }

        for(i=0;i<N;i++){
            cin >> A[i];
        }

        for(i=0;i<N;i++){
            sum =0;
            for(j=i;j<N;j++){
                sum += A[j];    
                freq[sum]=1; 
                if(high < sum)
                    high = sum;
            }
        }
        //cout << high << endl;
        for(i=0;i<= high;i++){
            s += freq[i];
        }

        cout << s << endl;
    }
       
    return 0; 
}
