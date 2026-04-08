#include <iostream>
using namespace std;
#define ll long long
void adie()
{
    long long r, d, right, down;
    cin >> down >> right >> d >> r;
   //  r--; d--; right--; down--;

    bool Rarr[r];
    for(ll i=0; i<r; i++){
      Rarr[i] = false;
    }

    long long ii=0;
    long long Rplus = (right % r) + r;
    if(!Rplus){
      cout << "NO" << endl; 
      return;
    }
    while (Rarr[ii] != true)
    {
      Rarr[ii] = true;
      ii += Rplus%r;
    }

    int count = 0;
    for(int i=0;)
}


int main()
{
    int testCases;;
    cin >> testCases;
    for (int i=0; i<testCases; i++)
    {
        adie();
    }
}