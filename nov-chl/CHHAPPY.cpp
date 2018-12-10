#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    long long int N,i;
    while(test--){
        cin >> N;
        long long int A[N];
        for(i=0;i<N;i++){
            cin >> A[i];
        }
        long long int rsc[N];
        for(i=0;i<N;i++){
            rsc[i] = 1;
        }
        long long int fnl[N]={0};
        long long int flag[N] = {0};
        for(i=0;i<N;i++){
            fnl[i] = A[A[i]-1];
        }

        for(i=0;i<N;i++){
            if(rsc[A[i]-1] == 1){
                rsc[A[i]-1] = 0;
                flag[fnl[i]-1] += 1;
            }
        }
        
        sort(flag, flag+N);
        
        // for(i=0;i<N;i++){
        //     cout << A[i] << " ";
        // }
        // cout << endl;
        // for(i=0;i<N;i++){
        //     cout << fnl[i] << " ";
        // }
        // cout << endl;
        // for(i=0;i<N;i++){
        //     cout << rsc[i] << " ";
        // }
        // cout << endl;
        // for(i=0;i<N;i++){
        //     cout << flag[i] << " ";
        // }
        //cout << endl;
        if(flag[N-1]>1)
            cout << "Truly Happy" << endl;
        else
            cout << "Poor Chef" << endl;
    }
    
    return 0;
}
