/*
                        ********************
                        **  MANAN DIYORA  **
                        **    DA-IICT     **
                        **   diyora13     **
                        ********************
*/
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <fstream>
#include <unistd.h>

#define endl '\n'
#define setpre(x,d) fixed<<setprecision(d)<<x
#define fill(a,x) memset(a,x,sizeof(a));
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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
ll getRand(ll l,ll r)
{
    uniform_int_distribution<ll> uid(l, r);
    return uid(rng);
}

void call_fail(int t)
{
	cout<<"     : FAILED  :( :("<<endl;
	assert("FAILED ON CURRUNT TEST CASE">"F");
}


int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string status_s="status.txt";
    const char *status=status_s.c_str();
    ofstream file_in(status);




    ll T=10; // total random test case you want to check
    
    fr(t,0,T+1)
    {
    	file_in<<"TEST "<<t<<":  RUNNING..."<<endl;
    	
		/*---------------------------------TEST CASE GENERATOR FILE RUN---------------------------------*/
   

        string sol_filename="CodeCheck_Case_Generator";

        string build_s="g++ -o "+sol_filename+" "+sol_filename+".cpp";
        const char *build=build_s.c_str();
        system(build);

        string run_s=sol_filename+".exe "+to_string(t);
        const char *run=run_s.c_str();
        system(run);




    	/*------------------------------code1 file run and output in output1----------------------------*/


        string sol_filename1="CodeCheck_code1";    // Write solution file1 name without extension

        string build_s1="g++ -o "+sol_filename1+" "+sol_filename1+".cpp";
        const char *build1=build_s1.c_str();
        system(build1);

        string run_s1=sol_filename1+".exe";
        const char *run1=run_s1.c_str();
        system(run1);


    	/*------------------------------code2 file run and output in output2----------------------------*/

        string sol_filename2="CodeCheck_code2";    // Write solution file2 name without extension

        string build_s2="g++ -o "+sol_filename2+" "+sol_filename2+".cpp";
        const char *build2=build_s2.c_str();
        system(build2);

        string run_s2=sol_filename2+".exe";
        const char *run2=run_s2.c_str();
        system(run2);




        /*------------------------------Write code to check both solutions------------------------------*/

        freopen("output1.txt","r",stdin);
		ll n1; cin>>n1;

		freopen("output2.txt","r",stdin);
		ll n2; cin>>n2;




		/*----------------------------------Check for the correctness-----------------------------------*/
		if(n1!=n2) call_fail(t);

		file_in<<"     "<<t<<":  PASSED !!!"<<endl;
    }

    return 0;
}