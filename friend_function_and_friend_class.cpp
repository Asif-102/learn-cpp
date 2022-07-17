#include <bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int taka;

protected:
    int password;

public:
    Parent(int tk,int pass)
    {
        taka=tk;
        password=pass;
    }
    friend class AmarBondhu;
    friend void tellSecret(Parent *ptr);
};

class AmarBondhu
{
public:
    void tellSecret(Parent *ptr)
    {
        cout << ptr->taka << endl;
        cout << ptr->password << endl;
    }
};

void tellSecret(Parent *ptr)
{
    cout << ptr->taka << " " << ptr->password <<endl;
}

int main(void)
{
    Parent pt(1500, 2345);
    AmarBondhu bondhu;
    bondhu.tellSecret(&pt);
    tellSecret(&pt);
}
