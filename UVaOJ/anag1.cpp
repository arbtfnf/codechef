#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  i,test,new1,key;
    string a;
    map<string,long long int> my_map;
    map<string,long long int> :: iterator it;
    map<long long int,long long int> frq;
    //Need a boolean array which store T/F
    bool arr[1000000] = {false};
    //map<bool,long long int> my_bool = {false};

    cin >> test;
    while(test--){
        new1 = key = i = 0;
        while(1){
            cin >> a;
            //new1 += a;
            if(a == "#") break;
            my_map.insert(pair<string,int>(a,key++));
        }
        
    for(it = my_map.begin() ; it != my_map.end() ; it++)
	{
        for(i=0; i<it->first.length();i++){
            if(it->first[i] < 91)
                new1 +=32; 
            new1 += it->first[i];
        }
        arr[new1]=!arr[new1];
        //cout << new1 << endl;
        new1 = 0;
		    //new1 += it->first[i++];
	}
    i=0;
    vector<string> userString;
    for(it = my_map.begin() ; it != my_map.end() ; it++){
        if(arr[(i++)]){
           cout<<it->first<<endl; 
        }
    }
    //Clear the map
    }
    return 0; 
    // cout<<my_map.lower_bound("Ab")->second<<endl;
    // cout<<my_map.upper_bound("Ab")->second<<endl;
}
