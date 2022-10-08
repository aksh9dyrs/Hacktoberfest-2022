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







/* ******* Your Functions Above ******** */

int32_t main()
{
  c_p_p();
  #ifndef ONLINE_JUDGE
  // For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("inpute.exe", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.exe", "w", stdout); 
#endif
    int t;
    cin>>t;
    
    while(t--) 
{  
   
      int n,m;
      cin>>n>>m;
      vector<int>harsh;
      int min=INT_MAX;
      f(i,0,n)    
        {
          int x;
          cin>>x;
          harsh.push_back(x);

      }
      sort(harsh.begin(),harsh.end());
      for(int i=0;i+m-1<n;i++)
      {
        int d=harsh[i+m-1]-harsh[i];
        if(d<min)
        min=d;
      }
cout<<min<<endl;




    }

   
 
   return 0;
  
    
        
    
 }