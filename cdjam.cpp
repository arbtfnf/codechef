#include<bits/stdc++.h>
using namespace std;

int main()
{   
    long long int test,count=0,i,j;
    cin >> test;
    string A,B;
    while(test--){
        cin >> A >> B;
        long long int arr1[A.length()];
        long long int arr2[B.length()];
        for( i=0;i<A.length();i++){
            arr1[i] = A[i]-64;
        }
        for(j=0;j<B.length();j++){
            arr2[j] = B[j]-64;
        }
            long long int x;
        	map<long long int, int> m;
	        map<long long int, int> :: iterator it;

        for(long long int k=0;k<i;k++){
            for(long long int m=k;m<i;m++){
                x;
		        m[x]++;

            }
        }
        
        for(long long int k=0;k<j;k++){
            
        }

    }
    return 0;
}