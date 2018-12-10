#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  test, n, i, one, mone, non;
      
    cin >> test;
    while(test--){
        cin >> n;
        long long int m[n];
	    
	i =0, one =0, mone=0, non=0;
    while(n--){
		cin>>m[i];
        if(m[i] == 1)
            one++;
        else if(m[i] == -1)
            mone++;
        else if(m[i] != 0)
            non++;
        i++;
	}

    if(one > 0)
        if((non == 1 && mone == 0) || (non == 0 && mone > 0) || (non == 0 && mone == 0)) cout<<"yes"<<endl; else cout<<"no"<<endl;
    else if( one == 0)
        if((mone == 1 && non == 0) || (non == 1 && mone == 0) || (non == 0 && mone == 0)) cout<<"yes"<<endl; else cout<<"no"<<endl;
    else cout<<"no"<<endl;
    }
    return 0; 
}