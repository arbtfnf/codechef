//https://www.codechef.com/problems/BUGCAL

#include <bits/stdc++.h>
using namespace std;

int fact(int);
int main()
{   
    int i,test,a,b,res,len1,len2,N,res1,res2,y;
    string a1,b1;
    cin >> test;
    while(test--){
        cin >> a >> b;
        res = 0;
        len1 =  0;
        len2 =  0;
        y=0;
        
        while(1){
            if(a < y)
                break;
            else y = pow(10, len1);
            len1++;
        }
        y=0;
        while(1){
            if(b < y)
                break;
            else y = pow(10, len2);
            len2++;
        }
        
        N = (len1>len2)?len1:len2;

        for(i=1;i<N;i++){
            res1 = a%10;
            a = a/10;
            res2 = b%10;
            b = b/10;
            res = res + ((res1 + res2)%10)*pow(10,i-1); 
        }
        
        cout << res << endl;
    }
    return 0; 
}
