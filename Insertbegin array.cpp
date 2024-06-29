#include<bits/stdc++.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

void insertbegin(int *p, int n, int E)
{
    int b[n+1];
    b[0] = E;

    for(int i = 0; i < n; i++)
    {
        b[i+1] = p[i];
    }
    for(int i = 0; i < n+1; i++)
    {
        p[i] = b[i];
    }
    printlist(p, n+1);
}

int main()
{
    int a[6] = {10, 20, 30, 40, 50};
    int n = 5;
    printlist(a, n);

    insertbegin(a, n, 100);

    return 0;
}
