#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define hr(i,n) for(ll i=n-1; i>=0; i--)
#define h(i,n)  for(ll i=0; i<=n-1; i++)
#define H(i,n)  for(ll i=1; i<=n; i++)
#define hi(i,n) for(ll i=n; i>=1; i--)
#define vi  vector<int>
#define vvi vector<vi>
#define vl  vector<ll>
#define vvl vector<vl>
#define pi  pair<int,int>
#define pl  pair<ll,ll>
#define pv(v)  h(i,v.size()) {cout<<v[i]<<" ";} cout<<endl
#define pvv(v) h(i,v.size()) {h(j,v[i].size()){cout<<v[i][j]<<" ";} cout<<endl;}
#define sortv(v) sort(v.begin(), v.end())
#define rsortv(v) sort(v.begin(), v.end(), greater(int))
#define endl "\n"
//==================================//

void adie(){
   int n, k;
   cin>>n>>k;

   vi v(n);
   h(i,n){
      cin >> v[i];
      v[i] = ((v[i] -1) % k) +1 ;
   }

   vvi u (max(k,n));




   01
   h(i,n){
      u[v[i]].push_back(i + 1);
   }
   hr(i, k){
      h(j, u[i].size()){
         cout << u[i][j] << " ";
      }
   }
   cout << endl;
}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}

/*
   vector <pair<int,int>> v;
   H(i,n){
      int x;
      cin >> x;
      v.push_back(make_pair(x,i));
   }
//code
   sort(v.begin(), v.end());
   //we have to sort repeatdeatly 'causes problem...
*/

/* brute force ## time limit exceeded
   int m = 0;
   int sum = 0; //array sum

   h(i,n){
      if(v[i]>v[m]){
         m = i;
      }
      sum += v[i];
   }

   while (sum > 0)
   {
      //updation
      if(v[m] > k){
         sum -= k;
         v[m] -= k;
      }else{
         sum -= v[m];
         v[m] = 0;
         cout << m+1 << " ";
      }

      //new index
      m = 0;
      h(i,n){
         if(v[i] > v[m]){
            m = i;
         }
      }

   }
   cout<<endl;
*/

/*
time limit exceeded
   hi(i, k){
      h(j, n){
         if(v[j] == i){
            cout << j+1 << " ";
         }
      }
   }
   cout << endl;
*/