#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long int sumN, sumD, N, test, D, ans, flag, count;
        cin >> test;
    while(test--){
        cin >> N >> D;
        sumD = sumN = 0;

        sumN = N%9;
        sumD = D%9;
        if(sumD == 6) flag = 1;

        if(sumD == 9){
            cout << sumN << " " << 2 << endl;
        } else{
            ans = 10-sumN;
            if(ans%sumD == 0){
                count = ans/sumD + 1;
                cout << 1 << " " << count << endl;
            }
            else{
                if(sumD == 3 || sumD == 6){
                    if(sumN >= 7){
                        ans = (sumN+3)%9;
                        flag > 0 ? count = 3 : count = 2;  
                    }
                    else if(sumN >=4 && sumN < 7){
                        ans = (sumN+6)%9;
                        flag > 0 ? count = 2 : count = 3;
                    }
                    else{ ans = sumN; count = 4; }
                cout << ans << " " << count << endl;
                }
            
            }
            
        }

        }
    return 0; 
}