/*
ID: musarra1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ios ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void read()
{
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

void solve()
{
    int n; cin>>n;
    char s,r; int d;
    vector<int> sus,others;
    while(n--)
    {
        cin>>d>>s>>r;
        if(r=='c' and s=='1')
        {
            sus.pb(d);
        }
        else if(r=='i' and s=='0')
        {
            others.pb(d);
        }
    }
    //debug(sus);
    //debug(others);
    sort(sus.begin(),sus.end());
    sort(others.begin(),others.end());
    ll cnt=0;
    for(auto i:others)
    {
        int ub=upper_bound(sus.begin(),sus.end(),i)-sus.begin();
        cnt+=(sus.size()-ub);
    }
    cout<<cnt<<endl;
}

int main()
{
    ios
    ll t=1;
    cin>>t;
    for(ll tc=1;tc<=t;++tc)
    {
       // cout << "Case " << tc << ":" << endl;
        solve();

    }
    return 0;
}
