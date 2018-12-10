#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long int wr,k,N;
    int i,j,flag,test,l;
      
    cin >> test;
    while(test--){
        cin >> N;
        if(N > 332){
            l = (int)log10(N)+1;
        
        long long int ar[l];
        flag=j=0;
        int min = 3;
        wr = N;
        k = 10;
        int a1[l],o=0;
        for(i=1;i<=l;i++){
            if(wr%k == 3){
                flag += 1;
                ar[j++] = i;
            }
            else 
                a1[o++] = i;
            wr = wr/k;
        }
        int a[l-flag];

        for(i=0;i<l-flag;i++){
           a[i]=a1[i]; 
        }
        // for(i=0;i<l-j;i++){
        //    cout << endl;             
        //    cout << a[i] << endl; 
        // }

        wr = N;
        
        
        min = 3-flag;
        
        if(flag == l){
            wr += pow(10,l);
        }
        else{
            for(i=0;i<min;i++){
                j = pow(10,a[i]-1);
                k = wr%j;
                wr = wr/pow(10,a[i]);
                wr = wr*pow(10,a[i]) + 3*pow(10,a[i]-1) + k;     
            }
        }
        if(N<wr)
            cout << wr << endl;
        else if(N>wr){
            // cout << l << endl;
            // j = (int)log10(wr)+1;
            // cout << j << endl;
            if(l == 3){
                wr += pow(10,l);
                cout << wr << endl;
                }
            else{
                j = pow(10,a[i]-1);
                k = wr%j;
                wr = wr/pow(10,a[i]);
                wr = wr*pow(10,a[i]) + 3*pow(10,a[i]-1) + k;
                cout << wr << endl;
                }
            }
        }
        else
            cout << 333 << endl;
         
    }
    return 0; 
}