#include <iostream>
#include <string>
using namespace std;


 int main()
{   
    int i, test, len, asci;
    string str;
    
    cin >> test;
    
    while(test--){
        cin >> len;
        cin >> str;
        
        for(i=0; i<len; i+=2){
            if(i < len -1)
                swap(str[i],str[i+1]);  //ODD EVEN
        }
        for(i=0; i<len; i++){
            asci = int(str[i]);
            asci = 122-asci;
            asci = 97 + asci;
            str[i] = char(asci);
        }
        cout << str << "\n";
    }
    
    return 0;
}

