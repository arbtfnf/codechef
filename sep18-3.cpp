#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  test, N, count, i, j, M, res, k, m, n;
      
    cin >> test;
    while(test--){
        count = j = i = res = j = k = m = n = 0;
        cin >> N;
        long long int arr[N], odd[N], even[N], temp[N];
        while(i < N)
             cin >> arr[i++];

        sort(arr, arr + N);

        if (N !=0 || N !=1){
        for(i=0; i < N-1; i++){
            if (arr[i] != arr[i+1])
                temp[m++] = arr[i];
            }
        }

        temp[m++] = arr[N-1];

        for(i=0;i<m;i++){
            if(temp[i]%2 == 0) 
                even[j++] = temp[i];
            
            else
                odd[k++] = temp[i];;
            }        

        count = k*(k-1)/2 + j*(j-1)/2;

        for(i=0; i<j-1;i++){
            if(even[i]%4 == 0 && even[i+1]%4 == 2)
                count -= 1;
        }

        for(i=0;i<k-1;i++){
            if(odd[i]%4 == 1 && odd[i+1]%4 == 3)
                count -= 1;
        }

        cout << count << endl;
    }
    return 0; 
}
