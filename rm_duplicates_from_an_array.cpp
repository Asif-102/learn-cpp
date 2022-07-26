#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n;)
        {
            if(a[i]==a[j])
            {
                for(int k=j; k+1<n; k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
            else j++;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
