#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  i,test,count,insrt,X,Y,j,k;
    char su0, su1;
    string ar[52],ar2[25],suit,otp;
      
    cin >> test;
    count = 1;
    while(test--){
        i=X=Y=0;insrt = 52;j=3; 
        while(insrt--){ 
            if(i<27)    cin >> ar[i++];
            else    cin >> ar2[i++];  
        }
        k=24;
        //cout<< ar2[] << endl;
        while(j--){
            if(ar2[k][0]<10 && ar2[k][0]>1) X=ar2[k][0]; else X=10;
            Y+=X;
            k-=10-X;
        }
        Y-=k;
        cout<< "Case " << count << ": " << ar[Y+1] << endl;
        count++;
    }
}