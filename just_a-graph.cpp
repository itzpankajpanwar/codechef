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
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> my_map;
        for(int i=0;i<n;i++) 
         {  cin>>v[i];
            my_map[v[i]-i-1]++;
         }
        if(my_map[v[0]-1]==n) cout<<n<<endl;
        else cout<<1<<endl;
    }
    return 0;
} 