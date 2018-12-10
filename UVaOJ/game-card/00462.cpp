#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int  i,test,count,C,H,S,D,check,flag,flagC,flagH,flagS,flagD;
    char su0, su1;
    string ar[13],suit,otp;
    test = 13; 
    C=H=S=D=i=flag=flagC=flagH=flagS=flagD=count=0;  
//    cin >> test;
    while(test--){
        cin >> ar[i];
         su0 = ar[i][0];
         su1 = ar[i][1];
        //cout << su1 << endl;    
        if(su1 == 'C') C +=1; else if(su1 == 'H') H +=1; else if(su1 == 'S') S +=1; else if(su1 == 'D') D +=1;
        if(su0 == 'A') count +=4; else if(su0 == 'K') count +=3; else if(su0 == 'Q') count +=2; else if(su0 == 'J') count +=1;
        i++;
    } 
            for(i=0;i<13;i++){
                su1 = ar[i][1]; su0 = ar[i][0];
                if(su1=='C' && su0=='A') flagC=1; else if(su1=='C' && su0=='K'){if(C==1)count-=1; else if(C>=2)flagC=1;} else if(su1=='C' && su0=='Q'){if(C<=2)count-=1; else if(C>=3)flagC=1;} else if(su1=='C' && C<=3 && su0=='J') count-=1;
            }   if(count>15)flag = 1;     
                if(C<=1) count+=2; else if(C==2) count+=1;
   
            for(i=0;i<13;i++){
                su1 = ar[i][1]; su0 = ar[i][0];    
                if(su1=='H' && su0=='A') flagH=1; else if(su1=='H' && su0=='K'){if(H==1)count-=1; else if(H>=2)flagH=1;} else if(su1=='H' && su0=='Q'){if(H<=2)count-=1; else if(H>=3)flagH=1;} else if(su1=='H' && H<=3 && su0=='J') count-=1;
            }   if(count>15) flag=1; 
                if(H<=1) count+=2; else if(H==2) count+=1;   
     
            for(i=0;i<13;i++){
                su1 = ar[i][1]; su0 = ar[i][0];
                if(su1=='S' && su0=='A') flagS=1; else if(su1=='S' && su0=='K'){if(S==1)count-=1; else if(S>=2)flagS=1;} else if(su1=='S' && su0=='Q'){if(S<=2)count-=1; else if(S>=3)flagS=1;} else if(su1=='S' && S<=3 && su0=='J') count-=1;
            }   if(count>15) flag=1;
                if(S<=1) count+=2; else if(S==2) count+=1; 
     
            for(i=0;i<13;i++){
                su1 = ar[i][1]; su0 = ar[i][0];
                if(su1=='D' && su0=='A') flagD=1; else if(su1=='D' && su0=='K'){if(D==1)count-=1; else if(D>=2)flagD=1;} else if(su1=='D' && su0=='Q'){if(D<=2)count-=1; else if(D>=3)flagD=1;} else if(su1=='D' && D<=3 && su0=='J') count-=1;
            }   if(count>15) flag=1;
                if(D<=1) count+=2; else if(D==2) count+=1; 

    if(count<14) cout <<"PASS"<<endl;
    else if(flagC && flagH && flagS && flagD && flag)
    cout <<"BID NO-TRUMP"<<endl; 
    else if(D>=S && D>=H && D>=C)
    cout <<"BID D"<<endl;
    else if(C>=S && C>=H && C>=D)
    cout <<"BID C"<<endl;
    else if(H>=S && H>=C && H>=D)
    cout <<"BID H"<<endl;
    else if(S>=C && S>=H && S>=D)
    cout <<"BID S"<<endl; 
    
    return 0; 
}
