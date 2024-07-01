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
        ll x,y; cin>>x>>y;
        ll red=ceil((double)y/2);
        if(y%2==0){
            if(red*7>=x){
                cout<<red<<'\n';
            }
            else{
                ll ans=red+ceil((double)(x-red*7)/15);
                cout<<ans<<'\n';
            }
        }
        else{
            if((red-1)*7+11>=x){
                cout<<red<<'\n';
            }
            else{
                ll ans=red+ceil((double)(x-((red-1)*7+11))/15);
                cout<<ans<<'\n';
            }
        }
    }
}