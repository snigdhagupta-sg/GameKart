#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void printvector(vector<ll>v)
{
    ll n=v.size();
    for(ll i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
} 
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<int>v;
        for(ll i=0;i<n;i++)
        {
            ll ele;cin>>ele;
            v.push_back(ele);
        }
        ll c=0;
        for(int i=0;i<n-2;i++){
            if((v[i]!=v[i+1]&&v[i]!=v[i+2]&&v[i+1]!=v[i+2])||(v[i]==v[i+1]&&v[i]==v[i+2]&&v[i+1]==v[i+2]))
            {
                continue;
            }
            c++;
            
        }
        cout<<c<<'\n';
    }
}