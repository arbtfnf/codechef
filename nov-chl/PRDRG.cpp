#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    int output[11]={0};
    cin >> test;
    int x,j=0;
    while(test--){
        //for(int m=0; m<test;m++)
        cin >> x;
        int i=0,cmplt = 33554432;
        int dist=0,res=0;
        bool flag=0;
        while(i < x){
            cmplt=(cmplt)/2;
            if(flag)  dist+=cmplt;
            flag = !flag;
            i++;
        
        }
            if(x%2 != 0)    res=dist + cmplt;
            else res=dist;
            
            int q = std:: __gcd(res,33554432);
            if(x%2 == 0){
                output[j++]=dist/q;
                output[j++]=33554432/q;
            } else {
                output[j++]=dist/q + 1;
                output[j++]=33554432/q;
            }
    }
    for(int z=0; z<j;z++){
        cout<< output[z]<< " ";
    }
    
    
    return 0;
}
