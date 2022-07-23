#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    int x;
    Example(int a)
    {
        x = a;
    }
    int operator + (Example obj)
    {
        return x + obj.x;
    }
};

int main(void)
{
    Example a(10), b(20), c(30);
    int ans = a + b;
    cout << ans << endl;

    Example ansObj(ans);

    cout << ansObj+c;
}
