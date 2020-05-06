#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> solve(){
vector<ll> v;
v.push_back(2);
for (int i =0 ; i <=1e5; ++i)
{	v.push_back(v[i]+((i+2)*3)-1);
	if(v[i]>=1e9)
	break;
	
	
}
return v;

}
main(){
vector<ll> v; v=solve();
int t;
cin>>t;
while(t--){
ll n ;
cin>>n;
vector<ll>::iterator lower; 
    lower = lower_bound (v.begin(), v.end(), n+1);  
int ans=0;
    while(n>=2){
    
      ans+=n/v[lower- v.begin()-1] ; 
    	n=n%v[lower- v.begin()-1];
     lower = lower_bound (v.begin(), v.end(), n+1); 
    }



cout<<ans<<endl;
}




}