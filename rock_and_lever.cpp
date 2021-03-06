#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fi(i,a,b,x) for(i=a;i<b;i=i+x)
#define fe(i,a,b) for(i=a;i<=b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define sp '\t'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

template <typename T>
void print(vector<T>& a, char sep = ' ')
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
        ll n;
        cin>>n;
        n = mod_opr(n);
        vector<ll> arr(n);
        for(auto& i: arr){
            cin>>i;
            i = mod_opr(i);
        }
        ll i, j, count = 0;
        f(i, 0, arr.size() - 1){
            f(j, i+1, arr.size()){
                // cout<<arr[i]<<" "<<arr[j]<<endl;
                if((arr[i] & arr[j]) >= (arr[i] ^ arr[j]))
                    count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}