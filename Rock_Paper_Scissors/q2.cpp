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
        string s;cin>>s;
        string str=s;
        sort(s.begin(),s.end());
        string str1="";str1+=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1]){
                str1+=s[i];
            }
        }
        // cout<<str1<<'\n';
        map<char,char>m;
        for(int i=0;i<str1.length();i++)
        {
            ll x;
            x=(str1.length()-i-1);
            if(x<0)
            x=-x;
            m[str1[i]]=str1[x];
            // cout<<str1[i]<<"->"<<m[str1[i]]<<'\n';
        }

        string ans="";
        for(int i=0;i<str.length();i++){
            ans+=m[str[i]];
        }
        cout<<ans<<'\n';
    }
}