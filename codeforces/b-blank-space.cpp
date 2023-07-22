/*
Jahangir Alam
ISTT
Bangladesh
*/
#ifdef RASHEDUL
#include "helpingHand.h"
#endif

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <utility>
#include <iomanip>
#include <ctime>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned int;

#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define E '\n'

const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    /*START:)*/

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max{}, temp{};
        for (int i{}; i < n; i++)
        {
            if (a[i] == 0)
            {
                temp++;
                if (temp >= max)
                {
                    max = temp;
                }
            }
            else
                temp = 0;
        }
        cout << max << '\n';
    }

    return 0;
}
