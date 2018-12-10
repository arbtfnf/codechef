#include <bits/stdc++.h>
using namespace std;
#include <stdio.h> 

int binarySearch(long long int arr[],long long int l,long long int r,long long int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2;  
        if (arr[mid] == x)   
            return 0;  
        else if (arr[mid] > x )  
            return binarySearch(arr, l, mid-1, x);  
        return binarySearch(arr, mid+1, r, x); 
   } 
   return -1; 
}

int main()
{   
    long long int  test, N, M,i,j,k,x;
      
    cin >> test;
    while(test--){
        cin>>N >> M;

    bool flag = 0;
	k=i=j=0;
    long long int tim1[N], tim2[N];
        while(N--){
            if(!flag){
                tim1[i++];
            }
            tim2[j++];		    
            flag = !flag;
    }
        sort(tim1,tim1+i);
        sort(tim2,tim2+j);

        long long int pp[M], op[M];
        while(M--){
            cin >> x;

        long long int l = 0, r= i-1, f = 0;

        l1:
        if(tim1[r/2] == ){

            }
        }

        l2:

        
       
    }
    return 0; 
}
