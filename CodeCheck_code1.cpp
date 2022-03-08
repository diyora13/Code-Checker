/*
            			********************
						**  MANAN DIYORA  **
						**    DA-IICT     **
						**   diyora13     **
						********************
*/
#include <bits/stdc++.h>
using namespace std;

void IOS()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	#ifndef ONLINE_JUDGE 
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout); 
	#endif
}

#define endl '\n'
#define setpre(x,d) fixed<<setprecision(d)<<x
#define fil(a,x) memset(a,x,sizeof(a));
#define fill(a,siz,x) fill(a,a+siz,x);
#define inarr(a,n) for(ll i=0;i<n;i++) cin>>a[i];
#define outarr(a,n) for(ll i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rf(i,s,e) for(ll i=s-1;i>=e;i--)
#define deb1(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define deb4(x,y,z,w) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<"\t"<<#w<<" : "<<w<<endl;
#define deb5(x,y,z,w,v) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<"\t"<<#w<<" : "<<w<<"\t"<<#v<<" : "<<v<<endl;
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define sz(v) (ll)(v.size())

typedef long long ll;   // only int (hide typedef & define ll int);  only ll (define int ll)
typedef long double lld;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;

const ll MOD=1e9+7;
const ll inf=1e18;
const ll N=1e6+5;







int32_t main()
{
	#ifndef ONLINE_JUDGE 
	freopen("input.txt","r",stdin); 
	freopen("output1.txt","w",stdout);
	#endif
	ll tt=1;
	   // cin>>tt;

	while(tt--)
	{
		ll n; cin>>n;
		cout<<n*n<<endl;
	}
	return 0;
}