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
    Example operator + (Example obj)
    {
        Example ans(0);
        ans.x = x + obj.x;
        return ans;
    }
};

int main(void)
{
    Example a(10), b(20), c(30);

    Example ans = a + b;
    Example ans2 = ans + c;

    cout << ans.x << " " << ans2.x;
}
