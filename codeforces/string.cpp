#include <iostream>
#include <algorithm>

using namespace std;
int main()
{

    string color = "rakibul alam";
    char *p = &color[0];
    char *q = &color[11];
    int CNT = std::count(p, q, 'a');
    cout << CNT << endl;
    return 0;
}
