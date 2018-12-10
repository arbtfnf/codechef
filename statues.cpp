#include<bits/stdc++.h>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
    	int n,ms;
    	cin>>n>>ms;
    	
    	pair <long long int, long long int > p[n];
    	
    	for(int i=0; i<n; i++)
    	{
    		cin>>p[i].first>>p[i].second;
    	}
    	
    	sort(p,p+n);
    	
    	while(ms--)
    	{
    		long long int z,ind;
    		cin>>z;
    		
    		long long int l = 0, r= n-1, f = 0;
    		
			lb1:
				
			if(l <= r)
			{	
			long long int mid = (l + r)/2;
    		
    		if(p[mid].first < z) {l = mid + 1; ind = mid; goto lb1;}
			
			else if(p[mid].first > z) {r = mid-1; ind  = mid; goto lb1;}
			
			else {ind = mid; f= 1; goto lb2;}
			}
			
			lb2:
				
			if(f) cout<<0<<"\n";
			
			else
			{
				if(p[ind].first > z)
				{
					if(ind == 0) cout<<p[0].first - z<<"\n";
					
					else if( p[ind - 1].second > z) cout<<0<<"\n";
					
					else cout<<p[ind].first - z<<"\n";
				}
				
				else
				{
					if(ind == n-1) cout<<-1<<"\n";
					
					else if( p[ind].second > z) cout<<0<<"\n";
					
					else cout<<p[ind+1].first - z<<"\n";
				}
			
		    }
	}
}
}
