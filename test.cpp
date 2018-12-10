#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    // your code goes here
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,arr[n],freq[1100001]={0};//Frequency array
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;//update frequency of number
        }
        long long odd=0,even=0,ans=0;
        for(i=0;i<n;i++)//Count how many odd and even numbers are there
        {
            if(arr[i]&1)
                odd++;
            else 
                even++;
        }
        //Odd^Odd=Even. Even ^ Even=Even. ^=XOR operation.
        
        
        
        for(i=0;i<n;i++)
        {
            if(arr[i]&1)ans=ans+odd;
            else ans=ans+even;
            ans=ans-freq[arr[i]^2];//Remove count of elements by which XOR is 2
            ans=ans-freq[arr[i]];//Remove count of elements by which XOR is 0.
        }
        cout<<(ans>>1)<<endl;//Divide answer by 2 as we doubly counted. i.e. we took (1,2) different from (2,1).
        //Hence, half the answer out for exact required number.
    }
    return 0;
}