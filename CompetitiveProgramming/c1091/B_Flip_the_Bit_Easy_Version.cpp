#include <iostream>

using namespace std;

void adie()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cin >> k; //k is index
    k--; //zero based index now
    int val = arr[k];

    int ans=0, l = 0, r = n-1;
    while (l != r)
    {
        while (arr[l] == val && l<k){
            l++;
        }
        while (arr[r] == val && r>k){
            r--;
        }

        if(l==r) break;
        
        ans ++;
        val = 1-val;
    }
    if(ans%2 == 1){
        ans++;
    }
    cout << ans << endl;

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