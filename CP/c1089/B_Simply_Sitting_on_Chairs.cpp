#include <bits/stdc++.h>
using namespace std;

void adie()
{
   int n;
   cin >> n;
   vector <int> a(n);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }

   vector <int> a2(n);
   for (int i = 0; i < n; i++) {
      a2[a[i]-1] = i+1;
   }

//solution
   //if Pi <= i then pi can sit on chair
   
   //NO SOLUTION FOUND

}

int main()
{
   int _;
   cin >> _;
   while (_--)   {
      adie();
   }
}