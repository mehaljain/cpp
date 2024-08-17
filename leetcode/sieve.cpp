#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    bool b[n + 1];
    memset(b, 1, n); // O(n)
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= n; i++) //O(sqrt(n))
    {
        if (b[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                b[j] = 0;
            }
        }
    }
    int count = 0;
    forn(i, n + 1)
    {
        if (b[i])
        {
            count++;
        }
    }
    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}