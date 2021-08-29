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
      
        
        for(int i=0;i<n;i++)  cin>>v[i];

        int jumps=0;
        
        int mini = v[n-1];
        int pi=n-1;

        for(int i=n-2; i>=0; i--)
        {
            if(v[i]>mini){
                jumps++;
                mini = v[i];
                pi=i;
            }
        }
        if(v[0]<mini) cout<<-1<<endl;
        else if( pi!=0 ) cout<<jumps+1;
        else cout<<jumps<<endl;
    }
    return 0;
} 