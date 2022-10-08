#include <bits/stdc++.h>



#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             LONG_LONG_MAX
#define ps(x,y)         fixed<<setprecision(y)<<x
#define endl            '\n'
#define mk(arr,n,type)  type *arr=new type[n]
#define w(x)            int x; cin >> x; while(x--)
#define f(i,x,y)        for(int i = x; i < y; i++)
#define g(i,x,y)        for(int i = x;i<=y;i++)



using namespace std;



void c_p_p()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

}
/* ******* Your Functions Below ******** */
   int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int dp[n+1][amount+1];
        
        for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=amount;++j)
            {
                if(j==0)
                    dp[i][j] = 0;
                else if(i==0)
                    dp[i][j] = 1e5;
                else if(coins[i-1]>j)
                    dp[i][j] = dp[i-1][j];
                else if(coins[i-1]<=j) 
                    dp[i][j] = max( dp[i][j-coins[i-1]],dp[i-1][j]);
            }
        }
        return dp[n][amount]>1e4 ? -1:dp[n][amount];
    }
 

void solve()
{
  int target;
  cin>>target;
  int n;
  cin>>n;
  vector<int>arr1(n);
  for(int i=0;i<n;i++)
  {
   cin>>arr1[i];
  }
int val=coinChange(arr1,target);
cout<<val<<endl;
    



}








/* ******* Your Functions Above ******** */

int32_t main()
{
	c_p_p();
	#ifndef ONLINE_JUDGE
	// For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("input.exe", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("outpute.exe", "w", stdout); 
#endif
    int t;
    cin>>t;
    while(t--)
{
      
solve();
 
}








 
   return 0;
}