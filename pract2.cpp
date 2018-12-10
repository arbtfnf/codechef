#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


 int main()
{   
    int i, test, N, A, B, count1, count2;   
    
    cin >> test;
    
    while(test--){
        cin >> N >> A >> B;
        int arr[N];
        for(i=0; i<N; i++){
            cin >> arr[i];    
        }
    //sort(arr, arr+N);
    count1 = count2 = 0;
    for(i=0; i<N; i++){
        if(arr[i] == A)
            count1++;
        if(arr[i] == B)
            count2++;
    }

    cout << ((count1*count2*1.0)/(N*N)) << "\n";

    }     
    return 0;
    
}

