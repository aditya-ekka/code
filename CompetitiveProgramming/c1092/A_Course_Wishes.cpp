#include<iostream>
using namespace std;

void adie()
{
   int n, //courses
   k; //level
   cin >> n >> k;
   int a[k]; //capacity limit
   int b[n]; //initial
   int ar[k+1];
   
   int countSteps=0;

   for(int i=0; i<k; i++){
      cin >> a[i];
   }
   for (int i=0; i<n; i++){
      cin >> b[i];
      if(b[i] < k+1)
         countSteps++;
   }

   for(int i=0; i<k+1; i++)
   {
      ar[i] =0;
   }
   for (int i=0; i<n; i++)
   {
      ar[b[i]]++;
   }

   cout << countSteps << endl;

   for(int i=k; i>=0; i--)
   {
      for(int j=0; j<ar[i]; j++)
      {
         cout << 
      }
   }
}
int main()
{
   int t;
   cin >> t;
   for(int i=0; i<t; i++){
      adie();
   }
}