#include <iostream>
#include <map>

using namespace std;

int main()
{
   int n;   cin >> n;
   //declaration
   map <int,int> mp;
   //user input
   for (int i=0; i<n; i++){
      int x;
      cin >> x;

      if(mp.find(x) == mp.end()){
         mp.insert(pair<int,int>(x,1));
      } else {
         mp[x] ++ ;
      }
   }
   //printing map
   for(auto itr=mp.begin(); itr!= mp.end(); ++itr){
      cout << itr->first << " " << itr->second << endl;
   }
   //
}