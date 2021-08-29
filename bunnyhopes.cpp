#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define vvi vector<vecetor<int>> 
#define vi vector<int> 
#define vvll vector<vecetor<long long>> 
#define vll vector<long long> 

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll solve(vector<int> &a)
{
    ll gg=0;
    for(int i=0;i<a.size(); i++)
    {   
        int tt=1;
        while(i+1<a.size() && a[i+1]<a[i])
            { tt++; i++; }
        gg += ( tt*(tt-1))/2;
    }
    return gg;
}
int main()
{     
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t; cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        vector<int> v(n-1);
        vector<int> a(n);

      
        
        for(int i=0;i<n-1;i++)  cin>>v[i];
        for(int i=0;i<n;i++)  cin>>a[i];

       
        int res=0;
        res += solve(a);
        reverse(a.begin() , a.end()) ;
        res += solve(a);
        cout<<res%MOD<<endl;
        
    }
    return 0;
} 