#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int i, j,k, m,test, arr[6], flag, count, arr2[6];
    string string1, string2;  
    cin >> test;
    while(test--){
        cin >> string1 >> string2;
        j=k=m=0;
        count = 0;
        flag=0;

        for(i=0;i<3;i++){
            if(string1[i] == 'b')
                arr[j++] = i;
        }
        for(i=0;i<3;i++){
            if(string2[i] == 'b')
                arr[j++] = i;
        }

        sort(arr, arr + j);
        
        for(i=0;i<3;i++){ 
            if(binary_search(arr, arr+j, i))
                arr2[k++] = i;
        }

        m = k;

        for(i=0;i<3;i++){
            if(string1[i] == 'o'){
                arr[j++] = i;
                flag=1;
            }
        }

        for(i=0;i<3;i++){
            if(string2[i] == 'o'){
                arr[j++] = i;
                flag=1;
            }
        }
    
        sort(arr, arr + j);
        k=0;
        for(i=0;i<3;i++){ 
            if(binary_search(arr, arr+j, i))
                arr2[k++] = i;
        }
        
        if((m == 1) || (m == 0))
            flag = 0;  

        if((k == 3) && (flag == 1)){
            cout << "yes" <<"\n";
        } 
        else
            cout << "no" << "\n";
    }

    return 0; 
}
