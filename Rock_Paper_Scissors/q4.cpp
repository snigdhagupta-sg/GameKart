#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void printvector(vector<char>v)
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
        ll no=0,we=0,ea=0,so=0,realns=0,realwe=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N')
            no++;
            else if(s[i]=='S')
            so++;
            else if(s[i]=='E')
            ea++;
            else
            we++;
        }
        if(no>=so)
        {
            realns=so;
            no=no-so;
            so=0;
        }
        else{
            realns=no;
            so=so-no;
            no=0;
        }
        if(we>=ea)
        {
            realwe=ea;
            we=we-ea;
            ea=0;
        }
        else{
            realwe=we;
            ea=ea-we;
            we=0;
        }
        // cout<<no<<" "<<so<<" "<<we<< " "<<ea<<" "<<realns<<" "<<realwe<<'\n';
        vector<char>v(n,'O');
        string ans="";
        if(no%2!=0||so%2!=0||we%2!=0||ea%2!=0)
        {
            cout<<"NO"<<'\n';
        }
        // else if(no==0&&so==0&&realns%2!=0)
        else
        {
            ll realns1=realns,realns2=realns,realwe1=realwe,realwe2=realwe;
            for(int i=0;i<n;i++)
            {
                ll a=1,b=1;
                if(s[i]=='N'&&realns1!=0)
                if(a%2==0)
                    v[i]='R',realns1--;
                    else
                    v[i]='H',realns1--;
                if(s[i]=='S'&&realns2!=0)
                
                    if(a==0)
                    v[i]='R',realns2--;
                    else
                    v[i]='H',realns2--;
                if(s[i]=='E'&&realwe1!=0)
                    if(b%2==0)
                    v[i]='R',realwe1--;
                    else
                    v[i]='H',realwe1--;
                
                if(s[i]=='W'&&realwe2!=0)
                    if(b%2==0)
                    v[i]='R',realwe2--;
                    else
                    v[i]='H',realwe2--;
           
            }
            // printvector(v);
            for(int i=0;i<n;i++){
                if(v[i]=='O')
                {
                    ll x=1,y=1;
                    if(s[i]=='N'&&no!=0)
                    if(x%2==0)
                    v[i]='R',no--,x++;
                    else
                    v[i]='H',no--,x++;
                    if(s[i]=='S'&&so!=0)
                    if(x%2==0)
                    v[i]='R',so--,x++;
                    else
                    v[i]='H',so--,x++;
                    if(s[i]=='W'&&we!=0)
                    if(y%2==0)
                    v[i]='H',we--,y++;
                    else
                    v[i]='R',we--,y++;
                    if(s[i]=='E'&&ea!=0)
                    if(y%2==0)
                    v[i]='H',ea--,y++;
                    else
                    v[i]='R',ea--,y++;
                }
            }
                // printvector(v);
                ll r=0,h=0;
            for(int i=0;i<n;i++)
            {
                ans+=v[i];
                if(v[i]=='R')
                r++;
                else
                h++;
            }
            // cout<<r<<" "<<h<<'\n';
            // if(r==0||h==0)
            // cout<<"NO"<<'\n';
            // else
            cout<<ans<<'\n';
        }
            // cout<<"NEXT"<<'\n';
    }
}