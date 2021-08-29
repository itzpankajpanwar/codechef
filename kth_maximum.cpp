#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define vvi vector<vecetor<int>> 
#define vi vector<int> 
#define vvll vector<vecetor<long long>> 
#define vll vector<long long> 

const ll MOD = 1e9 + 7;
const ll INF = 1e9;


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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        cin>>v[0];
        int maxi = v[0];
        for(int i=1;i<n;i++) 
         {  cin>>v[i];
            maxi = max( maxi ,v[i] );
         }
        
        ll res=0;
        for(int i=k-1; i<n;i++)
        {   
        
            if( v[i] == maxi )
                res+= (n-i);
        }
        cout<<res<<endl;
    }
    return 0;
} 