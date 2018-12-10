#include <bits/stdc++.h>
using namespace std;


int main()
{
	 
	//ofstream abhi;
	//abhi.open("sam.txt");
	string sample,input,var;
	//int n;
	//cin >> n;
	//while(n--){
	
	long long int round,count,arr[26]={0},flag=0,counter=0;
	count=0;
	cin>>round;
	cin >> sample;
	for(long long int i=0;i<sample.length();i++){
		if(arr[sample[i]-97]==0)	counter +=1;
		arr[sample[i]-97]=1;
	}
	cin >> input;
	for(long long int i=0;i<input.length();i++){
		if(counter==0){
			break;
		}
		else if(arr[input[i]-97]==1){
			arr[input[i]-97]=2;
			counter -=1;
		}
		else if(arr[input[i]-97]==0){	count +=1;	arr[input[i]-97]=2;}
			
	}
	if(count >=7)	var = "lose.";
	for(long long int i=0;i<26;i++){
		if(arr[i]==1)
			flag=1;
	}
	if(flag && count<7)	var = "chickened out.";
	else if(!flag && count < 7) var = "win.";

		cout<<"Round"<<" "<<round<<endl;
		cout<<"You"<<" "<<var<<endl;
	//}
	return 0;
}