#include<bits/stdc++.h>
using namespace std;

void print_sbs(string input, string output){
    if(input.length() == 0){
        cout << output << " ";
    }
    print_sbs(input.substr(1), output);
    print_sbs(input.substr(1), output+input[0]);
}

int main()
{
    long long int test;
    cin >> test;
    string N,outpt;
    outpt = "";
    while(test--){
        cin >> N;
        print_sbs(N,outpt);
    }
    return 1;
}