#include <iostream>

using namespace std;

void adie()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int sumOfArr = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sumOfArr += arr[i];
    }

    //sumofarr is total number of moves
    //normally, if sumofarr is odd he wins
    //else ...

    if (sumOfArr % 2 == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (k*n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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