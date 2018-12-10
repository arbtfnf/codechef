//https://www.codechef.com/ISCC2018/problems/T22

#include <bits/stdc++.h>
using namespace std;

long long int prime(long long int);
int main()
{   
    int i,j,N,test,flag;
      
    cin >> test;
    while(test--){
        cin >> N;
       long long int a[N];
        flag=0;
        
        for(i=0;i<N;i++)
            cin >> a[i];

        sort(a,a+N);
        for(i=0;i<N;i++){
            if(a[i] == 1)
                flag = 1;
        }
        
        for(i=1;i<N;i++){
                if(prime(a[i]) == 1){
                    flag += 1;
                    break;                
            }
        }
        if(flag == 2)
            cout << a[i] << endl; 
        else if(flag == 0 || flag == 1) 
           cout << -1 << endl;
    }
    return 0; 
}

long long int prime(long long int k){
    long long int i,m;
    if(k == 1)
        return 0;
    else {
    m = sqrt(k);
    for(i=2;i<=m;i++){
        if(k%i == 0)
            return 0;
    }
    return 1;
    }
}