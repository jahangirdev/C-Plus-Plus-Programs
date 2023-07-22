#include <iostream>
#include <algorithm>

using namespace std;
int main()
{

    string color = "rakibul alam";
    // cin >> color;
    string *p = &color[0];
    string *q = &color[6];
    int CNT = std::count(p, q, 'a');
    cout << CNT << endl;

    return 0;
}
