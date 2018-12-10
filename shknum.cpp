#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int i, j, p1, p2, N, result, diff1, diff2, ndiff, test, N1, flag; 
    cin >> test;
    while(test--){
        cin >> N;
        j=p1=p2=N1=result=diff1=diff2=ndiff=flag = 0;
        
        for(i=0;i>=0;i++){     
            N1 = pow(2,i);
            if(N < N1){
                p1 = i-1;
                break;
            }
        }
        ndiff = N - pow(2, p1);
        // N1 = ndiff;
        for(i=0;i>=0;i++){     
            N1 = pow(2,i);
            if(ndiff < N1){
                p2 = i-1;
                break;
            }
        }
                
        if(pow(2,p1) == pow(2,p2)*2)
            flag = 1;
        
        diff1 = pow(2,p2)*2 - ndiff + flag;       
        
        diff2 = ndiff - pow(2, p2);
        
        result = (diff1 > diff2) ? diff2 : diff1;

        if(N == 0){
            cout << 3 << endl;
        }
        else if(N == 1){
            cout << 2 << endl;
        }
        else if(pow(2, p1) == N)
            cout << 1 << endl;
        else {
            cout << result << endl;
        }
    }

    return 0; 
}
