#include <bits/stdc++.h>
using namespace std;


int main()
{
	 
	long long int m,n; 
	
	cin>>n>>m;
    long long int arr[n][m];
    char ch;
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> ch;
                arr[i][j]=ch;
        }
    }

    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << arr[i][j];
        }
    }
	
	return 0;
}