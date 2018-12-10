#include<bits/stdc++.h>
using namespace std;

main()
{
	int n; cin>>n;
	
	map<long long int, int> m;
	map<long long int, int> :: iterator it;
	
	long long int x;
	
	while(n--)
	{
		cin>>x;
		m[x]++;
	}

	for(it = m.begin() ; it != m.end() ; it++)
	{
		cout<<it->first<<" ";
	}
	
	//M1
	//if(m.find(5) != m.end()) cout<<"\nFound!"; {else cout<<"\nNot found!\n";}
	
	//M2
	//if(m[5] > 0) cout<<"\nFound!"; {else cout<<"\nNot found!\n"; m.erase(5);}
	
}