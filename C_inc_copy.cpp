// Link - https://codeforces.com/contest/1426/problem/C

#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(auto i=a;i<b;i++)
#define fi(i,a,b,x) for(auto i=a;i<b;i=i+x)
#define fe(i,a,b) for(auto i=a;i<=b;i++)
#define fr(i,a,b) for(auto i=a;i>=b;i--)
#define loop(i, a) for(auto i=a.begin();i!=a.end();i++)
#define endl '\n'
#define sp '\t'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define mod 1000000007
#define PI 3.1415926535897932384626
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<" = "<<x<<","<<#y<<" = "<<y<<endl

using namespace std;

template <typename T>
void print(vector<T>& a, char sep)
{
    for(auto i : a) { cout<<i<<sep; }
}

ll mod_opr(ll num)
{
    return (num + mod) % mod;
}

template <typename T>
bool compare(T x, T y)
{
    return x > y ? true : false;
}

int main()
{
    fast;
    ll tc;
    cin>>tc;
    
    while(tc--){
        
        ll n, answer = INT_MAX;
        cin>>n;
        for(ll i = 1; i * i <= n; i++){
            answer = min(answer, i - 1 + ((n - i) + i - 1) / i);
        }
        cout<<answer<<endl;
    }
    return 0;
}