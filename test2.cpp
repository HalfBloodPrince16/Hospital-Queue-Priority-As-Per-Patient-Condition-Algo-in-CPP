#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Compare {
    bool operator()(pair<string,int> n1,pair<string,int> n2) {
        return n1.second>n2.second;
    }
};

int main()
{
    priority_queue<pair<string,int>,std::vector<pair<string,int> >,Compare> Q;
    int n;
    cin>>n;
    string a;
    for(int i=0;i<n;i++)
    {
        ll b;
        cin>>a>>b;
        Q.push(make_pair(a,b));
    }

    for(ll i=0;i<n;i++)
    {
        pair<string,ll> m;
        m=Q.top();
        cout<<m.first<<" "<<m.second<<"\n";
        Q.pop();
    }
}