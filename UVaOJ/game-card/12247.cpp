#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  fix,i,test,insrt,X,Y,ar[6],count,ans;
    cin >> test;
    while(test--){
        count=0;
        for(i=0; i<3;i++){  
            cin >> ar[i];
        }
        sort(ar,ar+3);
        cin >> ar[i] >> ar[i+1];
        X=ar[i];
        Y=ar[i+1];
        ar[5] = 100;
        if(X>ar[1] && Y>ar[1]){
            sort(ar,ar+6);
            fix = ar[2] - ar[1];
             if(fix){
                for(i=1;i<5;i++){
                    ans = ar[1]+i;
                    if(ans != ar[2])
                        if(ans != ar[3])
                            if(ans != ar[4]) 
                                break;
                }
            }   else ans = ar[1]+1;
            count = 1;
        }
        sort(ar,ar+5);
        if((ar[4] ==X && ar[3] == Y) || (ar[3] ==X && ar[4] == Y)){ 
            if(ar[0] == 1){
                for(i=0;i<5;i++){
                    ans = ar[i]+1;
                    if(ans != ar[i+1]) break;
            }
        } else ans = 1; 
        count = 1;}
        
        if(((X==ar[0] || X==ar[1]) && Y==ar[4] || ((Y==ar[0] || Y==ar[1]) && X==ar[4])) && count == 0){
            if(ar[4] !=  ar[3]+1) ans=ar[3]+1;
            else ans=ar[4]+1;
            count = 1;
        }
        ar[5] = ans;
        sort(ar,ar+6);

        if(ar[5] > 52  || ar[4]>52){
            count = 0;
        }

        if(count != 1) cout << -1 << endl;
        else cout << ans << endl;
        
    }
    return 0;
}