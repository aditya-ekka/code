#include <bits/stdc++.h>
using namespace std;

void adie()
{
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++) {
      cin >>a[i];
   }
//solution
   if (n<3) {
      for(int i=0; i<n; i++) {
         cout << n << " ";
      }
      cout << "\n";
      return;
   }
   else
   {
      for (int i = 0; i < n; i++)
      {
         cout << 2 << " ";
      }
      cout << "\n";
   }
}

int main()
{
   int _;
   cin >> _;
   while (_--)   {
      adie();
   }
}