#include <bits/stdc++.h>

using namespace std;
int tot;
int R, K;

void compra(int i, int falta, int n)
{
    if(falta < 0)
        return;
    if(falta == 0 && n == 0)
    {
        tot++;
        return;
    }
    if (n == 0)
        return;
    if(i > falta)
        return;
    if (i > R)
        return;

    compra(i+1, falta - i, n - 1);

    compra(i+1, falta, n);
}

int main()
{
    cin >> R >> K;
    compra(1, R, K);
    cout << tot << endl;
    return 0;
}
